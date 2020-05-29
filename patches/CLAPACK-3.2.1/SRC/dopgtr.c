--- ../../../CLAPACK-3.2.1/SRC/dopgtr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dopgtr.c	2020-03-18 14:52:00.238152659 +0100
@@ -28,7 +28,8 @@
     extern /* Subroutine */ int dorg2l_(integer *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, doublereal *, integer *), 
 	    dorg2r_(integer *, integer *, integer *, doublereal *, integer *, 
-	    doublereal *, doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
