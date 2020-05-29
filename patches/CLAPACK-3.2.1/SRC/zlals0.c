--- ../../../CLAPACK-3.2.1/SRC/zlals0.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zlals0.c	2020-03-18 14:52:00.266153839 +0100
@@ -54,7 +54,8 @@
 	    doublereal *, doublereal *);
     extern doublereal dlamc3_(doublereal *, doublereal *);
     extern /* Subroutine */ int zcopy_(integer *, doublecomplex *, integer *, 
-	    doublecomplex *, integer *), xerbla_(char *, integer *);
+	    doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
     doublereal dsigjp;
     extern /* Subroutine */ int zdscal_(integer *, doublereal *, 
 	    doublecomplex *, integer *), zlascl_(char *, integer *, integer *, 
