--- ../../../CLAPACK-3.2.1/SRC/slauu2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slauu2.c	2020-03-18 14:52:00.254153333 +0100
@@ -33,7 +33,7 @@
 	    sgemv_(char *, integer *, integer *, real *, real *, integer *, 
 	    real *, integer *, real *, real *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK auxiliary routine (version 3.2) -- */
