--- ../../../CLAPACK-3.2.1/SRC/zgehd2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgehd2.c	2020-03-18 14:52:00.258153501 +0100
@@ -33,7 +33,9 @@
     doublecomplex alpha;
     extern /* Subroutine */ int zlarf_(char *, integer *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, doublecomplex *, 
-	    integer *, doublecomplex *), xerbla_(char *, integer *), zlarfg_(integer *, doublecomplex *, doublecomplex *, 
+	    integer *, doublecomplex *);
+    void xerbla_(char *, integer *);
+    int zlarfg_(integer *, doublecomplex *, doublecomplex *, 
 	    integer *, doublecomplex *);
 
 
