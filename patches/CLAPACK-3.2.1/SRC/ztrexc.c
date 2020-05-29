--- ../../../CLAPACK-3.2.1/SRC/ztrexc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztrexc.c	2020-03-18 14:52:00.270154007 +0100
@@ -36,7 +36,8 @@
 	    doublecomplex *, integer *, doublereal *, doublecomplex *);
     extern logical lsame_(char *, char *);
     logical wantq;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zlartg_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zlartg_(
 	    doublecomplex *, doublecomplex *, doublereal *, doublecomplex *, 
 	    doublecomplex *);
 
