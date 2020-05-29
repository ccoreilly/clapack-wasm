--- ../../../CLAPACK-3.2.1/SRC/zgehrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgehrd.c	2020-03-18 14:52:00.258153501 +0100
@@ -47,7 +47,8 @@
 	    integer *, doublecomplex *, integer *, doublecomplex *, 
 	    doublecomplex *, integer *), zlahr2_(integer *, integer *, 
 	    integer *, doublecomplex *, integer *, doublecomplex *, 
-	    doublecomplex *, integer *, doublecomplex *, integer *), xerbla_(
+	    doublecomplex *, integer *, doublecomplex *, integer *);
+    void xerbla_(
 	    char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
