--- ../../../CLAPACK-3.2.1/SRC/slatps.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slatps.c	2020-03-18 14:52:00.254153333 +0100
@@ -45,7 +45,7 @@
 	    real *, integer *), stpsv_(char *, char *, char *, integer *, 
 	    real *, real *, integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     extern integer isamax_(integer *, real *, integer *);
     logical notran;
