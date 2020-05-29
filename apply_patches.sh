#!/bin/bash

set -e
set -o nounset

if [ $# != 2 ]; then
    echo "Usage: $0 <patch_dir> <target_dir>"
    echo " e.g.: $0 my_BLAS/patches BLAS"
    echo
    echo "<patch_dir>:  Directory with patches"
    echo "<target_dir>: Directory to patch"
    echo
    echo "This script assumes that <patch_dir> and <target_dir> have the same"
    echo "internal directory structure"
    exit 1
fi

patch_dir=$1
target_dir=$2

for patch_file in $(find $patch_dir -type f); do
    file_path=${patch_file#$patch_dir}
    target_file=${target_dir}/${file_path}
    patch $target_file < $patch_file
done
