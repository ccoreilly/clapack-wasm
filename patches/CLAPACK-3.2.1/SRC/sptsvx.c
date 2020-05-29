--- ../../../CLAPACK-3.2.1/SRC/sptsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sptsvx.c	2020-03-18 14:52:00.254153333 +0100
@@ -31,7 +31,8 @@
 	    integer *);
     extern doublereal slamch_(char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slacpy_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slacpy_(
 	    char *, integer *, integer *, real *, integer *, real *, integer *
 );
     extern doublereal slanst_(char *, integer *, real *, real *);
