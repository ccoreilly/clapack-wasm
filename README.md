# README

## Overview

This repo contains a checked version of CBLAS with BLAS, both entirely written
in C. Having all soure code in C allows to easily convert the library to WASM.

## Automatic FORTRAN 77 to C translation

### f2c

[`f2c`](https://www.netlib.org/f2c/) is a tool that converts FORTRAN to C code.
To account for the fact that FORTRAN `real` type is equivalent to C `float`
type, the `-R` flags has been systematically used.

The version of the program, which is not provided as it is not necessary is
`20191129`.

### libf2c

Any code translated using the program `f2c` needs to be link against the
`libf2c.a`library. This library can be created using the files in the directory
`libf2c/`, which is provided in this repo.

Note that the header file `f2c.h` in `libf2c` has been modified to account for
the fact that `int`s in modern C compilers are 4 bytes long. In short, the
following command has been run:

```bash
sed -i 's/long int /int /g' f2c.h
```

### Automated translation of BLAS from FORTRAN to C

BLAS, which is originally written in FORTRAN, has been tranlated to C using the
program [`f2c`](https://www.netlib.org/f2c/) using the command

```bash
mkdir f2ced
f2c -d f2ced -aR *.c
```

in the BLAS (version 3.8.0) directory.

This produces C files in the directory `f2ced/`. Note that the files `xerbla.f`
and `xerbla_array.f` cannot be translated to C with `f2c` as they contain non
FORTRAN 77 instructions. For these two files, the C source code has been taken
from [`CLAPACK-3.2.1`](https://www.netlib.org/clapack/).

## CBLAS

The original source code of CBLAS contains the following  BLAS wrappers written
in FORTRAN:

```bash
cdotcsub.f
cdotusub.f
dasumsub.f
ddotsub.f
dnrm2sub.f
dsdotsub.f
dzasumsub.f
dznrm2sub.f
icamaxsub.f
idamaxsub.f
isamaxsub.f
izamaxsub.f
sasumsub.f
scasumsub.f
scnrm2sub.f
sdotsub.f
sdsdotsub.f
snrm2sub.f
zdotcsub.f
zdotusub.f
```

As these were simple wrappers, their usage in the C code has been replaced
by direct calls to the BLAS subroutines (provided by the BLAS library). The
modifications had to make the following assumptions:

* BLAS to C type equivalence
  * `REAL` -> `float`
  * `DOUBLEREAL` -> `double`
  * `INTEGER` -> `int`
  * `VOID` -> `void`
* `f2c` converted function interface
  * The subroutines `cdotc`, `cdotu`, `zdotc`, and `zdotu` return no value but
    store the result in a pointer given as a subroutine parameter
* Complex types
  * The then missing C types `complex` and `doublecomplex` have been defined
    in `include/cblas_f77.h`

With these modifications, the FORTRAN free code of CBLAS passes all the
(unmodified) tests in the `testing` directory.

## CBLAS test suite

To allow automated testing of the generated CBLAS library in wasm, the test
suites has also been converted to c using `f2c`. To ensure that the converted
tests are correct, the following procedure has been followed:

1. Convert BLAS to C and CBLAS to C **without modifying the test source code**
2. Once CBLAS passes all the original tests, convert the test source code
  **without modifying the CBLAS or BLAS C code**.
3. Check that all the tests (now written in C) pass with the BLAS and CBLAS
  code (written in C too)
