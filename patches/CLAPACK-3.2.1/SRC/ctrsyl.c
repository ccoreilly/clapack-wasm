--- ../../../CLAPACK-3.2.1/SRC/ctrsyl.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctrsyl.c	2020-03-18 14:52:00.218151815 +0100
@@ -52,7 +52,8 @@
     real scaloc;
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
-	    *), xerbla_(char *, integer *);
+	    *);
+    void xerbla_(char *, integer *);
     real bignum;
     logical notrna, notrnb;
     real smlnum;
