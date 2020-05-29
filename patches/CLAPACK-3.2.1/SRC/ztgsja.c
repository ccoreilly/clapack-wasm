--- ../../../CLAPACK-3.2.1/SRC/ztgsja.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztgsja.c	2020-03-18 14:52:00.270154007 +0100
@@ -59,8 +59,10 @@
 	    doublecomplex *, doublereal *, doublecomplex *);
     integer kcycle;
     extern /* Subroutine */ int dlartg_(doublereal *, doublereal *, 
-	    doublereal *, doublereal *, doublereal *), xerbla_(char *, 
-	    integer *), zdscal_(integer *, doublereal *, 
+	    doublereal *, doublereal *, doublereal *);
+    void xerbla_(char *, 
+	    integer *);
+    int zdscal_(integer *, doublereal *, 
 	    doublecomplex *, integer *), zlapll_(integer *, doublecomplex *, 
 	    integer *, doublecomplex *, integer *, doublereal *), zlaset_(
 	    char *, integer *, integer *, doublecomplex *, doublecomplex *, 
