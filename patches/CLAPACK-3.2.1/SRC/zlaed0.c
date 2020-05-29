--- ../../../CLAPACK-3.2.1/SRC/zlaed0.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zlaed0.c	2020-03-18 14:52:00.262153670 +0100
@@ -47,7 +47,7 @@
 	    doublereal *, doublecomplex *, doublereal *, integer *, integer *)
 	    ;
     integer igivcl;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int zlacrm_(integer *, integer *, doublecomplex *, 
