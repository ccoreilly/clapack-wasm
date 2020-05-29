--- ../../../CLAPACK-3.2.1/SRC/cunmr2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cunmr2.c	2020-03-18 14:52:00.222151984 +0100
@@ -32,8 +32,8 @@
     extern /* Subroutine */ int clarf_(char *, integer *, integer *, complex *
 , integer *, complex *, complex *, integer *, complex *);
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int clacgv_(integer *, complex *, integer *), 
-	    xerbla_(char *, integer *);
+    extern /* Subroutine */ int clacgv_(integer *, complex *, integer *);
+	void xerbla_(char *, integer *);
     logical notran;
 
 
