--- ../../../CLAPACK-3.2.1/SRC/cunmr3.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cunmr3.c	2020-03-18 14:52:00.222151984 +0100
@@ -31,7 +31,8 @@
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int clarz_(char *, integer *, integer *, integer *
 , complex *, integer *, complex *, complex *, integer *, complex *
-), xerbla_(char *, integer *);
+);
+    void xerbla_(char *, integer *);
     logical notran;
 
 
