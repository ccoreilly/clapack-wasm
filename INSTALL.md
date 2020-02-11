# CBLAS/CLAPACK install instructions

Install instructions tested with:

* gcc 7.4.0
* cc 7.4.0
* emcc 1.39.5

## Autoinstall

```bash
bash install_repo.sh [emcc [emsdk_dir]]
```

Note that to set compiler options, the `[Mm]ake.inc.*` files have to be
moditied

## Manual install

### libf2c

This generates `libf2c.a` in `libf2c/` (among other things).

#### Linux

```bash
cd libf2c
make -f makefile.u
```

#### WASM

```bash
cd libf2c
make -f makefile.WASM
```

### BLAS

This generates `blas_LINUX.a` in `f2c_BLAS/` (among other things).

#### LINUX

```bash
cd f2c_BLAS-3.8.0
cp make.inc.LINUX make.inc
make
```

#### WASM

```bash
cd f2c_BLAS-3.8.0
cp make.inc.WASM make.inc
make
```

### CBLAS + CBLAS tests

This generates:

* `cblas_LINUX.a` in `lib/` (among other things).
* `x[cdsz]cblat[1-3]` test programs in `testing/` (among other things).

#### Linux

```bash
cp Makefile.in.LINUX Makefile.in
make
```

#### WASM

```bash
cp Makefile.in.WASM Makefile.in
make
```

### CLAPACK

#### Linux

```bash
cd CLAPACK
cp make.inc.linux make.inc
make
```

#### WASM

```bash
cd CLAPACK
cp make.inc.WASM make.inc
make
```

## Running CBLAS tests

### Linux

If **not** running wasm files, `bash run_tests.sh`

### WASM

To generate tests for a wasm shared lib, `bash run_wasm_test.sh`. This will
generate html files under `testing`. These files must be viewed via a
webserver that can be created using

```bash
python -m SimpleHTTPServer <port>  # python 2
python -m http.server <port> # python 3
```
