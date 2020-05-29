--- ../../../CLAPACK-3.2.1/SRC/xerbla.c	2010-04-27 21:37:04.000000000 +0200
+++ CLAPACK-3.2.1///SRC/xerbla.c	2020-03-18 14:52:00.258153501 +0100
@@ -18,7 +18,7 @@
 
 static integer c__1 = 1;
 
-/* Subroutine */ int xerbla_(char *srname, integer *info)
+/* Subroutine */ void xerbla_(char *srname, integer *info)
 {
     
 
@@ -61,5 +61,5 @@
 
 /*     End of XERBLA */
 
-    return 0;
+    return;
 } /* xerbla_ */
