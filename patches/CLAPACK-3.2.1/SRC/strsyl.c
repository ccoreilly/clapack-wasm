--- ../../../CLAPACK-3.2.1/SRC/strsyl.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/strsyl.c	2020-03-18 14:52:00.258153501 +0100
@@ -53,7 +53,7 @@
     real scaloc;
     extern doublereal slamch_(char *), slange_(char *, integer *, 
 	    integer *, real *, integer *, real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     logical notrna, notrnb;
     real smlnum;
