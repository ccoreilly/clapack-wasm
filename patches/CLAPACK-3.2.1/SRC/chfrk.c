--- ../../../CLAPACK-3.2.1/SRC/chfrk.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chfrk.c	2020-03-18 14:52:00.198150972 +0100
@@ -34,7 +34,7 @@
     integer nrowa;
     logical lower;
     complex calpha;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical nisodd, notrans;
 
 
