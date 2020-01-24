# CBLAS install instructions

Install instructions tested with:

* gcc 7.4.0
* cc 7.4.0

## libf2c

```bash
cd libf2c
make # for linux, otherwise add -f makefile.WASM
cd ..
```

This generates `libf2c.a` in `libf2c/` (among other things).

## BLAS

```bash
cd f2c_BLAS-3.8.0
# if compiling for linux host, use make.inc.WASM otherwise
cp make.inc.LINUX make.inc
make
cd ..
```

This generates `blas_LINUX.a` in `f2c_BLAS/` (among other things).

## CBLAS + CBLAS tests

```bash
cp Makefile.in.LINUX Makefile.in  # if targetting linux
make
```

This generates:

* `cblas_LINUX.a` in `lib/` (among other things).
* `x[cdsz]cblat[1-3]` test programs in `testing/` (among other things).

## Running CBLAS tests

If **not** running wasm files, `bash run_tests.sh`.
