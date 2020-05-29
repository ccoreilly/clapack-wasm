--- ../../../CLAPACK-3.2.1/SRC/cgelss.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgelss.c	2020-03-18 14:52:00.186150466 +0100
@@ -63,7 +63,9 @@
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
 	    *, integer *, complex *, integer *), claset_(char *, 
-	    integer *, integer *, complex *, complex *, complex *, integer *), xerbla_(char *, integer *), cbdsqr_(char *, 
+	    integer *, integer *, complex *, complex *, complex *, integer *);
+    void xerbla_(char *, integer *);
+    int cbdsqr_(char *, 
 	    integer *, integer *, integer *, integer *, real *, real *, 
 	    complex *, integer *, complex *, integer *, complex *, integer *, 
 	    real *, integer *);
