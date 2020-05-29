--- ../../../CLAPACK-3.2.1/SRC/zgelsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgelsx.c	2020-03-18 14:52:00.258153501 +0100
@@ -49,7 +49,8 @@
     extern doublereal dlamch_(char *);
     extern /* Subroutine */ int zunm2r_(char *, char *, integer *, integer *, 
 	    integer *, doublecomplex *, integer *, doublecomplex *, 
-	    doublecomplex *, integer *, doublecomplex *, integer *), xerbla_(char *, integer *);
+	    doublecomplex *, integer *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
     extern doublereal zlange_(char *, integer *, integer *, doublecomplex *, 
 	    integer *, doublereal *);
     doublereal bignum;
