--- ../../../CLAPACK-3.2.1/SRC/ctrsna.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctrsna.c	2020-03-18 14:52:00.218151815 +0100
@@ -51,7 +51,8 @@
     extern integer icamax_(integer *, complex *, integer *);
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
-	    *, integer *, complex *, integer *), xerbla_(char *, 
+	    *, integer *, complex *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     real bignum;
     logical wantbh;
