--- ../../../CLAPACK-3.2.1/SRC/stgevc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stgevc.c	2020-03-18 14:52:00.258153501 +0100
@@ -65,7 +65,7 @@
     real bcoefi, ascale, bscale, creala, crealb, bcoefr;
     extern doublereal slamch_(char *);
     real salfar, safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real xscale, bignum;
     logical ilcomp, ilcplx;
     extern /* Subroutine */ int slacpy_(char *, integer *, integer *, real *, 
