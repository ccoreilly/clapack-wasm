--- ../../../CLAPACK-3.2.1/SRC/zupgtr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zupgtr.c	2020-03-18 14:52:00.270154007 +0100
@@ -29,7 +29,8 @@
 	    doublecomplex *, integer *, doublecomplex *, doublecomplex *, 
 	    integer *), zung2r_(integer *, integer *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, doublecomplex *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
