--- ../../../CLAPACK-3.2.1/SRC/sopmtr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sopmtr.c	2020-03-18 14:52:00.254153333 +0100
@@ -32,7 +32,7 @@
     extern /* Subroutine */ int slarf_(char *, integer *, integer *, real *, 
 	    integer *, real *, real *, integer *, real *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran, forwrd;
 
 
