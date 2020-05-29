--- ../../../CLAPACK-3.2.1/SRC/zcgesv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zcgesv.c	2020-03-18 14:52:00.258153501 +0100
@@ -48,7 +48,8 @@
 	    doublecomplex *, integer *, complex *, integer *, integer *);
     extern doublereal dlamch_(char *);
     extern /* Subroutine */ int cgetrf_(integer *, integer *, complex *, 
-	    integer *, integer *, integer *), xerbla_(char *, integer *);
+	    integer *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern doublereal zlange_(char *, integer *, integer *, doublecomplex *, 
 	    integer *, doublereal *);
     extern /* Subroutine */ int cgetrs_(char *, integer *, integer *, complex 
