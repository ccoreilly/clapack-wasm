--- ../../../CLAPACK-3.2.1/SRC/slasd7.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slasd7.c	2020-03-18 14:52:00.254153333 +0100
@@ -40,7 +40,8 @@
     extern /* Subroutine */ int scopy_(integer *, real *, integer *, real *, 
 	    integer *);
     extern doublereal slapy2_(real *, real *), slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), slamrg_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slamrg_(
 	    integer *, integer *, real *, integer *, integer *, integer *);
     real hlftol;
 
