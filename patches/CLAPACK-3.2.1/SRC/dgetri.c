--- ../../../CLAPACK-3.2.1/SRC/dgetri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgetri.c	2020-03-18 14:52:00.226152152 +0100
@@ -39,7 +39,8 @@
     extern /* Subroutine */ int dswap_(integer *, doublereal *, integer *, 
 	    doublereal *, integer *), dtrsm_(char *, char *, char *, char *, 
 	    integer *, integer *, doublereal *, doublereal *, integer *, 
-	    doublereal *, integer *), xerbla_(
+	    doublereal *, integer *);
+    void xerbla_(
 	    char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
