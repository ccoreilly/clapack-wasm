####################################################################
#  BLAS make include file.                                         #
#  March 2007                                                      #
####################################################################
#
SHELL = /bin/sh
#
#  The machine (platform) identifier to append to the library names
#
PLAT =
#  
#  Modify the FORTRAN and OPTS definitions to refer to the
#  compiler and desired compiler options for your machine.  NOOPT
#  refers to the compiler options desired when NO OPTIMIZATION is
#  selected.  Define LOADER and LOADOPTS to refer to the loader and 
#  desired load options for your machine.
#
CC       = emcc
CFLAGS   = -I../libf2c -O3
DRVOPTS  = $(OPTS)
NOOPT    =
LOADER   = emcc
LOADOPTS =
#
#  The archiver and the flag(s) to use when building archive (library)
#  If you system has no ranlib, set RANLIB = echo.
#
ARCH     = emar
ARCHFLAGS= cr
RANLIB   = emranlib
#
#  The location and name of the Reference BLAS library.
#
BLASLIB      = blas$(PLAT).a
