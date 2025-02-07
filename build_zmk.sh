#!/bin/bash

zmk_repo=$1
output_dir=$2
board=$3
shield=$4

container_info=$(devcontainer up --workspace-folder $zmk_repo)
container_id=$(echo $container_info | jq -r '.containerId')


echo "Building ZMK firmware for $board"
docker exec $container_id bash -c "ls /workspaces/zmk-config/config"
[[ -n $shield ]] && shield_flag="-DSHIELD=$shield" || shield_flag=""
docker exec -w /workspaces/zmk/app $container_id bash -c "west build -p -b $board -- $shield_flag -DZMK_CONFIG=\"/workspaces/zmk-config/config\""
[[ -n $shield ]] && filename="$board-$shield" || filename=$board
docker cp $container_id:/workspaces/zmk/app/build/zephyr/zmk.uf2 $output_dir/$filename.uf2
# for planck
docker cp $container_id:/workspaces/zmk/app/build/zephyr/zmk.bin $output_dir/$filename.bin

# dfu-util -a 0 -d <bootloader_id> -s 0x8000000 -D build/planck_rev6.bin