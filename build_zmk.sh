#!/bin/bash

zmk_repo=$1
output_dir=$2
boards=("${@:3}")

container_info=$(devcontainer up --workspace-folder $zmk_repo)
container_id=$(echo $container_info | jq -r '.containerId')

for board in "${boards[@]}"; do
    echo "Building ZMK firmware for $board"
    docker exec $container_id bash -c "ls /workspaces/zmk-config/config"
    docker exec -w /workspaces/zmk/app $container_id bash -c "west build -p -b $board -- -DZMK_CONFIG=\"/workspaces/zmk-config/config\""
    docker cp $container_id:/workspaces/zmk/app/build/zephyr/zmk.uf2 $output_dir/$board.uf2
    # for planck
    docker cp $container_id:/workspaces/zmk/app/build/zephyr/zmk.bin $output_dir/$board.bin
done

# dfu-util -a 0 -d <bootloader_id> -s 0x8000000 -D build/planck_rev6.bin