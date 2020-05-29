--- ../../../CLAPACK-3.2.1/SRC/zgbtrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgbtrs.c	2020-03-18 14:52:00.258153501 +0100
@@ -37,7 +37,9 @@
 	    integer *, doublecomplex *, integer *, doublecomplex *, integer *)
 	    , zswap_(integer *, doublecomplex *, integer *, doublecomplex *, 
 	    integer *), ztbsv_(char *, char *, char *, integer *, integer *, 
-	    doublecomplex *, integer *, doublecomplex *, integer *), xerbla_(char *, integer *), zlacgv_(
+	    doublecomplex *, integer *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
+    int zlacgv_(
 	    integer *, doublecomplex *, integer *);
     logical notran;
 
