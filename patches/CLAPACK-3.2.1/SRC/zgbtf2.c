--- ../../../CLAPACK-3.2.1/SRC/zgbtf2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgbtf2.c	2020-03-18 14:52:00.258153501 +0100
@@ -34,7 +34,8 @@
 	    doublecomplex *, integer *), zgeru_(integer *, integer *, 
 	    doublecomplex *, doublecomplex *, integer *, doublecomplex *, 
 	    integer *, doublecomplex *, integer *), zswap_(integer *, 
-	    doublecomplex *, integer *, doublecomplex *, integer *), xerbla_(
+	    doublecomplex *, integer *, doublecomplex *, integer *);
+    void xerbla_(
 	    char *, integer *);
     extern integer izamax_(integer *, doublecomplex *, integer *);
 
