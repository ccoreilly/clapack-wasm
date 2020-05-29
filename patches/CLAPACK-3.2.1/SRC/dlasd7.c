--- ../../../CLAPACK-3.2.1/SRC/dlasd7.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlasd7.c	2020-03-18 14:52:00.234152490 +0100
@@ -43,7 +43,8 @@
     integer jprev;
     extern doublereal dlapy2_(doublereal *, doublereal *), dlamch_(char *);
     extern /* Subroutine */ int dlamrg_(integer *, integer *, doublereal *, 
-	    integer *, integer *, integer *), xerbla_(char *, integer *);
+	    integer *, integer *, integer *);
+    void xerbla_(char *, integer *);
     doublereal hlftol;
 
 
