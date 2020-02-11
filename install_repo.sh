#!/bin/bash

set -o nounset
set -o errexit  # exit on error

compiler=${1:-gcc}
emsdk_dir=${2:-''}

USAGE=\
"  $0 [compiler [emsdk_dir]] 

  This scripts installs CBLAS and CLAPACK using for a linux or a web browser
  When installing for the web, please use the second argument to indicate
  location of emsdk if either emcc or wasm-ld binary is not in PATH

  compiler: Compiler to use [default: gcc] 
  emsdk_dir: Installation directory of emscripten
"

libf2c_make="makefile.WASM"
blas_make="make.inc.WASM"
cblas_make="Makefile.in.WASM"
clapack_make="make.inc.WASM"

if [[ $compiler != emcc ]]; then
    if [[ -z $(command -v $compiler) ]]; then
        echo "$USAGE"
        echo "ERROR: unknown compiler $compiler"
        exit 1;
    fi
    libf2c_make="makefile.u"
    blas_make="make.inc.LINUX"
    cblas_make="Makefile.in.LINUX"
    clapack_make="make.inc.linux"
else
    if [[ -z $(command -v $compiler) || -z $(command -v wasm-ld) ]]; then
        if [[ -d "$emsdk_dir" ]]; then
            current=$(pwd)
            cd "$emsdk_dir"
            ./emsdk activate latest
            source ./emsdk_env.sh
            export PATH="$(pwd)/upstream/bin:$PATH"
            cd "$current"
        else
            echo "$USAGE"
            echo "ERROR: could not activate emcc from emsdk dir: $emsdk_dir"
            exit 1;
        fi
    fi
fi

echo "Making libf2c"
cd libf2c
make -f $libf2c_make
cd ../
echo "Making BLAS"
cd f2c_BLAS-3.8.0
cp $blas_make make.inc
make
cd ../
echo "Making CBLAS"
mkdir -p lib
cp $cblas_make Makefile.in
make
echo "Making CLAPACK"
cd CLAPACK
mkdir -p SRC/VARIANTS/LIB
cp $clapack_make make.inc
make
