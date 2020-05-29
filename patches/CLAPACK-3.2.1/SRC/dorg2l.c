--- ../../../CLAPACK-3.2.1/SRC/dorg2l.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dorg2l.c	2020-03-18 14:52:00.238152659 +0100
@@ -28,7 +28,8 @@
     integer i__, j, l, ii;
     extern /* Subroutine */ int dscal_(integer *, doublereal *, doublereal *, 
 	    integer *), dlarf_(char *, integer *, integer *, doublereal *, 
-	    integer *, doublereal *, doublereal *, integer *, doublereal *), xerbla_(char *, integer *);
+	    integer *, doublereal *, doublereal *, integer *, doublereal *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
