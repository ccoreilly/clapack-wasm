--- ../../../CLAPACK-3.2.1/SRC/zhbgst.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhbgst.c	2020-03-18 14:52:00.262153670 +0100
@@ -56,8 +56,9 @@
     logical wantx;
     extern /* Subroutine */ int zlar2v_(integer *, doublecomplex *, 
 	    doublecomplex *, doublecomplex *, integer *, doublereal *, 
-	    doublecomplex *, integer *), xerbla_(char *, integer *), 
-	    zdscal_(integer *, doublereal *, doublecomplex *, integer *);
+	    doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
+    int zdscal_(integer *, doublereal *, doublecomplex *, integer *);
     logical update;
     extern /* Subroutine */ int zlacgv_(integer *, doublecomplex *, integer *)
 	    , zlaset_(char *, integer *, integer *, doublecomplex *, 
