--- ../../../CLAPACK-3.2.1/SRC/dgbsvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgbsvxx.c	2020-03-18 14:52:00.222151984 +0100
@@ -45,8 +45,8 @@
 	    integer *, doublereal *, integer *, integer *, integer *);
     logical nofact;
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     doublereal bignum;
     extern /* Subroutine */ int dgbtrs_(char *, integer *, integer *, integer 
 	    *, integer *, doublereal *, integer *, integer *, doublereal *, 
