--- ../../../CLAPACK-3.2.1/SRC/ctpttf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctpttf.c	2020-03-18 14:52:00.218151815 +0100
@@ -28,7 +28,7 @@
     logical normaltransr;
     extern logical lsame_(char *, char *);
     logical lower;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical nisodd;
 
 
