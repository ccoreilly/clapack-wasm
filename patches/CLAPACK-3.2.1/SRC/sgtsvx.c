--- ../../../CLAPACK-3.2.1/SRC/sgtsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgtsvx.c	2020-03-18 14:52:00.250153164 +0100
@@ -34,7 +34,7 @@
 	    integer *);
     extern doublereal slamch_(char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal slangt_(char *, integer *, real *, real *, real *);
     extern /* Subroutine */ int slacpy_(char *, integer *, integer *, real *, 
 	    integer *, real *, integer *), sgtcon_(char *, integer *, 
