--- ../../../CLAPACK-3.2.1/SRC/zbdsqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zbdsqr.c	2020-03-18 14:52:00.258153501 +0100
@@ -67,8 +67,10 @@
 	    doublereal *, doublereal *, doublereal *);
     extern doublereal dlamch_(char *);
     extern /* Subroutine */ int dlartg_(doublereal *, doublereal *, 
-	    doublereal *, doublereal *, doublereal *), xerbla_(char *, 
-	    integer *), zdscal_(integer *, doublereal *, 
+	    doublereal *, doublereal *, doublereal *);
+    void xerbla_(char *, 
+	    integer *);
+    int zdscal_(integer *, doublereal *, 
 	    doublecomplex *, integer *);
     doublereal sminoa, thresh;
     logical rotate;
