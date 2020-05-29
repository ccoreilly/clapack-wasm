--- ../../../CLAPACK-3.2.1/SRC/zgeqp3.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgeqp3.c	2020-03-18 14:52:00.262153670 +0100
@@ -34,7 +34,7 @@
 	    integer *, doublecomplex *, integer *, integer *, doublecomplex *, 
 	     doublereal *, doublereal *, doublecomplex *);
     extern doublereal dznrm2_(integer *, doublecomplex *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int zgeqrf_(integer *, integer *, doublecomplex *, 
