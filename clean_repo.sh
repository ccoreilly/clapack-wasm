#!/bin/bash

echo "Cleaning libf2c"
cd libf2c
make -f makefile.u clean
cd ..
echo "Cleaning f2c_BLAS-3.8.0"
cd ./f2c_BLAS-3.8.0
make cleanall
cd ..
echo "Cleaning CBLAS"
cd CBLAS
make cleanall
cd ..
echo "Cleaning CLAPACK-3.2.1"
cd CLAPACK-3.2.1
make cleanall
cd ..

# unpatch
for patch_dir in $(find ./patches -mindepth 1 -maxdepth 1 -type d); do
    to_unpatch=$(basename $patch_dir)
    echo "Unpatching $to_unpatch"
    ./unpatch.sh $patch_dir $(basename $to_unpatch)
done
