--- ../../../CLAPACK-3.2.1/SRC/dgtsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgtsvx.c	2020-03-18 14:52:00.226152152 +0100
@@ -37,8 +37,9 @@
 	    doublereal *, doublereal *, doublereal *);
     logical nofact;
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *), dgtcon_(char *, integer *, 
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
+    int dgtcon_(char *, integer *, 
 	    doublereal *, doublereal *, doublereal *, doublereal *, integer *, 
 	     doublereal *, doublereal *, doublereal *, integer *, integer *), dgtrfs_(char *, integer *, integer *, doublereal *, 
 	    doublereal *, doublereal *, doublereal *, doublereal *, 
