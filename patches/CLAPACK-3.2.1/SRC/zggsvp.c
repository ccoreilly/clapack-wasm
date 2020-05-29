--- ../../../CLAPACK-3.2.1/SRC/zggsvp.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zggsvp.c	2020-03-18 14:52:00.262153670 +0100
@@ -46,8 +46,10 @@
 	    integer *, integer *, doublecomplex *, integer *, doublecomplex *, 
 	     doublecomplex *, integer *, doublecomplex *, integer *), zunmr2_(char *, char *, integer *, integer *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, doublecomplex *, 
-	    integer *, doublecomplex *, integer *), xerbla_(
-	    char *, integer *), zgeqpf_(integer *, integer *, 
+	    integer *, doublecomplex *, integer *);
+    void xerbla_(
+	    char *, integer *);
+    int zgeqpf_(integer *, integer *, 
 	    doublecomplex *, integer *, integer *, doublecomplex *, 
 	    doublecomplex *, doublereal *, integer *), zlacpy_(char *, 
 	    integer *, integer *, doublecomplex *, integer *, doublecomplex *, 
