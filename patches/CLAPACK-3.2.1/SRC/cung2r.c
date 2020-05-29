--- ../../../CLAPACK-3.2.1/SRC/cung2r.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cung2r.c	2020-03-18 14:52:00.218151815 +0100
@@ -28,8 +28,8 @@
     integer i__, j, l;
     extern /* Subroutine */ int cscal_(integer *, complex *, complex *, 
 	    integer *), clarf_(char *, integer *, integer *, complex *, 
-	    integer *, complex *, complex *, integer *, complex *), 
-	    xerbla_(char *, integer *);
+	    integer *, complex *, complex *, integer *, complex *);
+	void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
