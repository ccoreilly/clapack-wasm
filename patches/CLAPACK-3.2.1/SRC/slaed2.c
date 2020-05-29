--- ../../../CLAPACK-3.2.1/SRC/slaed2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slaed2.c	2020-03-18 14:52:00.250153164 +0100
@@ -42,7 +42,7 @@
 	    integer *), scopy_(integer *, real *, integer *, real *, integer *
 );
     extern doublereal slapy2_(real *, real *), slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
     extern /* Subroutine */ int slamrg_(integer *, integer *, real *, integer 
 	    *, integer *, integer *), slacpy_(char *, integer *, integer *, 
