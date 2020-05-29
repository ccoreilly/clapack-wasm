--- ../../../CLAPACK-3.2.1/SRC/spbstf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spbstf.c	2020-03-18 14:52:00.254153333 +0100
@@ -37,7 +37,7 @@
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int sscal_(integer *, real *, real *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
