--- ../../../CLAPACK-3.2.1/SRC/zlaed8.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zlaed8.c	2020-03-18 14:52:00.262153670 +0100
@@ -48,7 +48,9 @@
     extern doublereal dlapy2_(doublereal *, doublereal *), dlamch_(char *);
     extern integer idamax_(integer *, doublereal *, integer *);
     extern /* Subroutine */ int dlamrg_(integer *, integer *, doublereal *, 
-	    integer *, integer *, integer *), xerbla_(char *, integer *), zlacpy_(char *, integer *, integer *, doublecomplex *, 
+	    integer *, integer *, integer *);
+    void xerbla_(char *, integer *);
+    int zlacpy_(char *, integer *, integer *, doublecomplex *, 
 	    integer *, doublecomplex *, integer *);
 
 
