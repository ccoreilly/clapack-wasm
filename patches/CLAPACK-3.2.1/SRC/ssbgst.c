--- ../../../CLAPACK-3.2.1/SRC/ssbgst.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssbgst.c	2020-03-18 14:52:00.254153333 +0100
@@ -46,7 +46,8 @@
     extern /* Subroutine */ int sscal_(integer *, real *, real *, integer *);
     logical upper, wantx;
     extern /* Subroutine */ int slar2v_(integer *, real *, real *, real *, 
-	    integer *, real *, real *, integer *), xerbla_(char *, integer *);
+	    integer *, real *, real *, integer *);
+    void xerbla_(char *, integer *);
     logical update;
     extern /* Subroutine */ int slaset_(char *, integer *, integer *, real *, 
 	    real *, real *, integer *), slartg_(real *, real *, real *
