--- ../../../CLAPACK-3.2.1/SRC/dtbrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtbrfs.c	2020-03-18 14:52:00.242152827 +0100
@@ -48,7 +48,7 @@
 	     integer *, doublereal *, integer *, integer *);
     extern doublereal dlamch_(char *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran;
     char transt[1];
     logical nounit;
