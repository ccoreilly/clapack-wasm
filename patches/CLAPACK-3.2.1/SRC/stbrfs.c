--- ../../../CLAPACK-3.2.1/SRC/stbrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stbrfs.c	2020-03-18 14:52:00.258153501 +0100
@@ -48,7 +48,7 @@
 );
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran;
     char transt[1];
     logical nounit;
