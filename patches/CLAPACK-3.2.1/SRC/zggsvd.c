--- ../../../CLAPACK-3.2.1/SRC/zggsvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zggsvd.c	2020-03-18 14:52:00.262153670 +0100
@@ -42,7 +42,7 @@
     logical wantq, wantu, wantv;
     extern doublereal dlamch_(char *);
     integer ncycle;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal zlange_(char *, integer *, integer *, doublecomplex *, 
 	    integer *, doublereal *);
     extern /* Subroutine */ int ztgsja_(char *, char *, char *, integer *, 
