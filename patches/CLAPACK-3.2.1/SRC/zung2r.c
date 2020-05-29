--- ../../../CLAPACK-3.2.1/SRC/zung2r.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zung2r.c	2020-03-18 14:52:00.270154007 +0100
@@ -30,7 +30,8 @@
     extern /* Subroutine */ int zscal_(integer *, doublecomplex *, 
 	    doublecomplex *, integer *), zlarf_(char *, integer *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, doublecomplex *, 
-	    integer *, doublecomplex *), xerbla_(char *, integer *);
+	    integer *, doublecomplex *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
