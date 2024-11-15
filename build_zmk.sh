#!/bin/bash

zmk_repo=$1
output_dir=$2
boards=("${@:3}")

container_info=$(devcontainer up --workspace-folder $zmk_repo)
container_id=$(echo $container_info | jq -r '.containerId')

for board in "${boards[@]}"; do
    echo "Building ZMK firmware for $board"
    docker exec -w /workspaces/zmk/app $container_id bash -c "west build -p -b $board -- -DZMK_CONFIG=\"/workspaces/zmk-config/config\""
    docker cp $container_id:/workspaces/zmk/app/build/zephyr/zmk.uf2 $output_dir/$board.uf2
done
