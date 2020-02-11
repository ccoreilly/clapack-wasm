#!/bin/bash

echo "Cleaning libf2c"
cd libf2c
make -f makefile.u clean
cd ..
echo "Cleaning f2c_BLAS"
cd ./f2c_BLAS-3.8.0
make clean
cd ..
echo "Cleaning CBLAS"
make clean
echo "Cleaning CLAPACK"
cd CLAPACK
make clean
cd ..
