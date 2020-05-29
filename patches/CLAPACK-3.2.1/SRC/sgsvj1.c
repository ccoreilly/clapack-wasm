--- ../../../CLAPACK-3.2.1/SRC/sgsvj1.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgsvj1.c	2020-03-18 14:52:00.250153164 +0100
@@ -54,7 +54,8 @@
     extern /* Subroutine */ int sswap_(integer *, real *, integer *, real *, 
 	    integer *), saxpy_(integer *, real *, real *, integer *, real *, 
 	    integer *), srotm_(integer *, real *, integer *, real *, integer *
-, real *), xerbla_(char *, integer *);
+, real *);
+    void xerbla_(char *, integer *);
     integer ijblsk, swband;
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
 	    real *, integer *, integer *, real *, integer *, integer *);
