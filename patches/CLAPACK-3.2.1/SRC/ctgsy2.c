--- ../../../CLAPACK-3.2.1/SRC/ctgsy2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctgsy2.c	2020-03-18 14:52:00.218151815 +0100
@@ -48,7 +48,7 @@
 	     clatdf_(integer *, integer *, complex *, integer *, complex *, 
 	    real *, real *, integer *, integer *);
     real scaloc;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran;
 
 
