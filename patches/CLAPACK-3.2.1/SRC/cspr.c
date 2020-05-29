--- ../../../CLAPACK-3.2.1/SRC/cspr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cspr.c	2020-03-18 14:52:00.214151646 +0100
@@ -24,7 +24,7 @@
     integer i__, j, k, kk, ix, jx, kx, info;
     complex temp;
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK auxiliary routine (version 3.2) -- */
