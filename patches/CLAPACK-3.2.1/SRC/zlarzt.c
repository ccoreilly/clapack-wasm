--- ../../../CLAPACK-3.2.1/SRC/zlarzt.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zlarzt.c	2020-03-18 14:52:00.266153839 +0100
@@ -33,8 +33,9 @@
 	    doublecomplex *, doublecomplex *, integer *, doublecomplex *, 
 	    integer *, doublecomplex *, doublecomplex *, integer *), 
 	    ztrmv_(char *, char *, char *, integer *, doublecomplex *, 
-	    integer *, doublecomplex *, integer *), 
-	    xerbla_(char *, integer *), zlacgv_(integer *, 
+	    integer *, doublecomplex *, integer *);
+	void xerbla_(char *, integer *);
+    int zlacgv_(integer *, 
 	    doublecomplex *, integer *);
 
 
