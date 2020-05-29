--- ../../../CLAPACK-3.2.1/SRC/cbdsqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cbdsqr.c	2020-03-18 14:52:00.182150297 +0100
@@ -68,7 +68,8 @@
 , real *, real *, real *, real *, real *);
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
-	    *), xerbla_(char *, integer *);
+	    *);
+    void xerbla_(char *, integer *);
     real sminoa;
     extern /* Subroutine */ int slartg_(real *, real *, real *, real *, real *
 );
