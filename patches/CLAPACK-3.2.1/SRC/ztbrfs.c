--- ../../../CLAPACK-3.2.1/SRC/ztbrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztbrfs.c	2020-03-18 14:52:00.270154007 +0100
@@ -52,7 +52,7 @@
 	    doublecomplex *, doublereal *, integer *, integer *);
     extern doublereal dlamch_(char *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran;
     char transn[1], transt[1];
     logical nounit;
