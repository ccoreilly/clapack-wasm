--- ../../../CLAPACK-3.2.1/SRC/zpteqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zpteqr.c	2020-03-18 14:52:00.266153839 +0100
@@ -36,7 +36,7 @@
     doublecomplex vt[1]	/* was [1][1] */;
     integer nru;
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer icompz;
     extern /* Subroutine */ int zlaset_(char *, integer *, integer *, 
 	    doublecomplex *, doublecomplex *, doublecomplex *, integer *), dpttrf_(integer *, doublereal *, doublereal *, integer *)
