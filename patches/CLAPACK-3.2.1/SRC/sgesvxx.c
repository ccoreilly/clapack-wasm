--- ../../../CLAPACK-3.2.1/SRC/sgesvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgesvxx.c	2020-03-18 14:52:00.250153164 +0100
@@ -38,8 +38,8 @@
     extern doublereal slamch_(char *);
     logical nofact;
     extern /* Subroutine */ int slaqge_(integer *, integer *, real *, integer 
-	    *, real *, real *, real *, real *, real *, char *), 
-	    xerbla_(char *, integer *);
+	    *, real *, real *, real *, real *, real *, char *);
+	void xerbla_(char *, integer *);
     real bignum;
     integer infequ;
     logical colequ;
