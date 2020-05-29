--- ../../../CLAPACK-3.2.1/SRC/claed8.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/claed8.c	2020-03-18 14:52:00.202151141 +0100
@@ -45,7 +45,8 @@
 	    integer *);
     extern doublereal slapy2_(real *, real *), slamch_(char *);
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
-	    *, integer *, complex *, integer *), xerbla_(char *, 
+	    *, integer *, complex *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     extern integer isamax_(integer *, real *, integer *);
     extern /* Subroutine */ int slamrg_(integer *, integer *, real *, integer 
