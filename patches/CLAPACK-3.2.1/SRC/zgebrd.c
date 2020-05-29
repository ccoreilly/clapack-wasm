--- ../../../CLAPACK-3.2.1/SRC/zgebrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgebrd.c	2020-03-18 14:52:00.258153501 +0100
@@ -40,8 +40,9 @@
 	    doublecomplex *, integer *, doublecomplex *, doublecomplex *, 
 	    integer *), zgebd2_(integer *, integer *, 
 	    doublecomplex *, integer *, doublereal *, doublereal *, 
-	    doublecomplex *, doublecomplex *, doublecomplex *, integer *), 
-	    xerbla_(char *, integer *), zlabrd_(integer *, integer *, 
+	    doublecomplex *, doublecomplex *, doublecomplex *, integer *);
+	void xerbla_(char *, integer *);
+    int zlabrd_(integer *, integer *, 
 	    integer *, doublecomplex *, integer *, doublereal *, doublereal *, 
 	     doublecomplex *, doublecomplex *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *);
