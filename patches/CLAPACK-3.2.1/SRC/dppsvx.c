--- ../../../CLAPACK-3.2.1/SRC/dppsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dppsvx.c	2020-03-18 14:52:00.238152659 +0100
@@ -38,8 +38,8 @@
     extern doublereal dlamch_(char *);
     logical nofact;
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     doublereal bignum;
     extern doublereal dlansp_(char *, char *, integer *, doublereal *, 
 	    doublereal *);
