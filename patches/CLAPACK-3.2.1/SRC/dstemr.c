--- ../../../CLAPACK-3.2.1/SRC/dstemr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dstemr.c	2020-03-18 14:52:00.242152827 +0100
@@ -81,7 +81,8 @@
     extern /* Subroutine */ int dlarrj_(integer *, doublereal *, doublereal *, 
 	     integer *, integer *, doublereal *, integer *, doublereal *, 
 	    doublereal *, doublereal *, integer *, doublereal *, doublereal *, 
-	     integer *), xerbla_(char *, integer *);
+	     integer *);
+    void xerbla_(char *, integer *);
     doublereal bignum;
     integer inderr, iindwk, indgrs, offset;
     extern doublereal dlanst_(char *, integer *, doublereal *, doublereal *);
