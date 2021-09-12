all: blas cblas clapack

blas:
	( cd f2c_BLAS-3.8.0; $(MAKE) )

cblas:
	( cd CBLAS; $(MAKE) )

clapack:
	( cd CLAPACK-3.2.1; $(MAKE) )