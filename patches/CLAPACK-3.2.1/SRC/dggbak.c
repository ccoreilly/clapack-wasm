--- ../../../CLAPACK-3.2.1/SRC/dggbak.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dggbak.c	2020-03-18 14:52:00.226152152 +0100
@@ -28,7 +28,7 @@
     extern /* Subroutine */ int dswap_(integer *, doublereal *, integer *, 
 	    doublereal *, integer *);
     logical leftv;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical rightv;
 
 
