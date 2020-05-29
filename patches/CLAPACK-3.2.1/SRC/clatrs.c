--- ../../../CLAPACK-3.2.1/SRC/clatrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/clatrs.c	2020-03-18 14:52:00.210151478 +0100
@@ -59,7 +59,8 @@
     extern /* Complex */ VOID cladiv_(complex *, complex *, complex *);
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
-	    *), xerbla_(char *, integer *);
+	    *);
+    void xerbla_(char *, integer *);
     real bignum;
     extern integer isamax_(integer *, real *, integer *);
     extern doublereal scasum_(integer *, complex *, integer *);
