--- ../../../CLAPACK-3.2.1/SRC/sorg2l.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sorg2l.c	2020-03-18 14:52:00.254153333 +0100
@@ -28,7 +28,8 @@
     integer i__, j, l, ii;
     extern /* Subroutine */ int sscal_(integer *, real *, real *, integer *), 
 	    slarf_(char *, integer *, integer *, real *, integer *, real *, 
-	    real *, integer *, real *), xerbla_(char *, integer *);
+	    real *, integer *, real *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
