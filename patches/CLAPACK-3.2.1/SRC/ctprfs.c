--- ../../../CLAPACK-3.2.1/SRC/ctprfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctprfs.c	2020-03-18 14:52:00.218151815 +0100
@@ -51,7 +51,7 @@
 	    integer *, complex *, complex *, real *, integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran;
     char transn[1], transt[1];
     logical nounit;
