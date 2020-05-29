--- ../../../CLAPACK-3.2.1/SRC/dtrsna.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtrsna.c	2020-03-18 14:52:00.246152995 +0100
@@ -61,8 +61,8 @@
     extern /* Subroutine */ int dlabad_(doublereal *, doublereal *);
     extern doublereal dlamch_(char *);
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     doublereal bignum;
     logical wantbh;
     extern /* Subroutine */ int dlaqtr_(logical *, logical *, integer *, 
