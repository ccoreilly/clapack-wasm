--- ../../../CLAPACK-3.2.1/SRC/dgetrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgetrf.c	2020-03-18 14:52:00.226152152 +0100
@@ -36,7 +36,8 @@
 	    integer *, integer *, doublereal *, doublereal *, integer *, 
 	    doublereal *, integer *), dgetf2_(
 	    integer *, integer *, doublereal *, integer *, integer *, integer 
-	    *), xerbla_(char *, integer *);
+	    *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int dlaswp_(integer *, doublereal *, integer *, 
