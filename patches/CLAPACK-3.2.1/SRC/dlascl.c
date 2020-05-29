--- ../../../CLAPACK-3.2.1/SRC/dlascl.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlascl.c	2020-03-18 14:52:00.234152490 +0100
@@ -31,7 +31,7 @@
     extern doublereal dlamch_(char *);
     doublereal cfromc;
     extern logical disnan_(doublereal *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum, smlnum;
 
 
