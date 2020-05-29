#!/bin/bash

# set -o nounset
# set -e

if [ $# != 3 ]; then
    echo "Usage: $0 <orig_dir> <new_dir> <output_dir>"
    echo " e.g.: $0 BLAS my_BLAS my_BLAS/patches"
    echo
    echo "<orig_dir>:   Directory with unmodified files"
    echo "<new_dir>:    Directory with modified files"
    echo "<output_dir>: Directory where patches will be stored"
    exit 1;
fi

orig_dir=$1
new_dir=$2
output_dir=$3

echo "Creating patches for new files"
for file in $(find $new_dir \( -name "*.c" -o -name "*.h" \)); do
    file_path=${file#$new_dir}
    orig_file=$orig_dir/$file_path
    if [ ! -f $orig_file ]; then
        output_subdir=$output_dir/$(dirname $file_path)
        mkdir -p $output_subdir
        diff -uN $orig_file $file > $output_subdir/$(basename $file_path)
    fi
done
echo "Done diffing new files"

echo "Creating patches for modified files"
for file in $(find $orig_dir \( -name "*.c" -o -name "*.h" \)); do
    file_path=${file#$orig_dir}
    changed_file=$new_dir/$file_path
    # if [ -f "$changed_file" ]; then
        changes=$(diff -uN $file $changed_file)
        if [ -n "$changes" ]; then
            output_subdir=$output_dir/$(dirname $file_path)
            mkdir -p $output_subdir
            echo "$changes" > $output_subdir/$(basename $file_path)
        fi
    # fi
done
echo "Done diffing changed files"

