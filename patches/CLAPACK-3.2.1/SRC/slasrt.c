--- ../../../CLAPACK-3.2.1/SRC/slasrt.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slasrt.c	2020-03-18 14:52:00.254153333 +0100
@@ -28,7 +28,7 @@
     integer stack[64]	/* was [2][32] */;
     real dmnmx;
     integer start;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer stkpnt;
 
 
