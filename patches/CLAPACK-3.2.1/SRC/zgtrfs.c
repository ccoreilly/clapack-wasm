--- ../../../CLAPACK-3.2.1/SRC/zgtrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgtrfs.c	2020-03-18 14:52:00.262153670 +0100
@@ -53,7 +53,8 @@
 	    integer *, integer *);
     extern doublereal dlamch_(char *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zlagtm_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zlagtm_(
 	    char *, integer *, integer *, doublereal *, doublecomplex *, 
 	    doublecomplex *, doublecomplex *, doublecomplex *, integer *, 
 	    doublereal *, doublecomplex *, integer *);
