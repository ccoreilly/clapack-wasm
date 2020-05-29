--- ../../../CLAPACK-3.2.1/SRC/zgghrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgghrd.c	2020-03-18 14:52:00.262153670 +0100
@@ -41,7 +41,7 @@
 	    doublecomplex *, integer *, doublereal *, doublecomplex *);
     extern logical lsame_(char *, char *);
     doublecomplex ctemp;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer icompq, icompz;
     extern /* Subroutine */ int zlaset_(char *, integer *, integer *, 
 	    doublecomplex *, doublecomplex *, doublecomplex *, integer *), zlartg_(doublecomplex *, doublecomplex *, doublereal *, 
