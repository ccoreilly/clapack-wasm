--- ../../../CLAPACK-3.2.1/SRC/zpptrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zpptrf.c	2020-03-18 14:52:00.266153839 +0100
@@ -39,7 +39,9 @@
 	    doublecomplex *, integer *, doublecomplex *, integer *);
     logical upper;
     extern /* Subroutine */ int ztpsv_(char *, char *, char *, integer *, 
-	    doublecomplex *, doublecomplex *, integer *), xerbla_(char *, integer *), zdscal_(integer *, 
+	    doublecomplex *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
+    int zdscal_(integer *, 
 	    doublereal *, doublecomplex *, integer *);
 
 
