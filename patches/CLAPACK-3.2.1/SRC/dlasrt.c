--- ../../../CLAPACK-3.2.1/SRC/dlasrt.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlasrt.c	2020-03-18 14:52:00.238152659 +0100
@@ -29,7 +29,7 @@
     integer stack[64]	/* was [2][32] */;
     doublereal dmnmx;
     integer start;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer stkpnt;
 
 
