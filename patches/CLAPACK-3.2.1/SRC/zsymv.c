--- ../../../CLAPACK-3.2.1/SRC/zsymv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zsymv.c	2020-03-18 14:52:00.266153839 +0100
@@ -25,7 +25,7 @@
     integer i__, j, ix, iy, jx, jy, kx, ky, info;
     doublecomplex temp1, temp2;
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK auxiliary routine (version 3.2) -- */
