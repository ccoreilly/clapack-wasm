--- ../../../CLAPACK-3.2.1/SRC/cgtsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgtsv.c	2020-03-18 14:52:00.190150635 +0100
@@ -28,7 +28,7 @@
     /* Local variables */
     integer j, k;
     complex temp, mult;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
