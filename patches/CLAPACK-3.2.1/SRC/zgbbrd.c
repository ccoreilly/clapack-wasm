--- ../../../CLAPACK-3.2.1/SRC/zgbbrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgbbrd.c	2020-03-18 14:52:00.258153501 +0100
@@ -52,7 +52,8 @@
 	    doublecomplex *, integer *);
     integer minmn;
     logical wantq;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zlaset_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zlaset_(
 	    char *, integer *, integer *, doublecomplex *, doublecomplex *, 
 	    doublecomplex *, integer *), zlartg_(doublecomplex *, 
 	    doublecomplex *, doublereal *, doublecomplex *, doublecomplex *), 
