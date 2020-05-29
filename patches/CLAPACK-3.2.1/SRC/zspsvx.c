--- ../../../CLAPACK-3.2.1/SRC/zspsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zspsvx.c	2020-03-18 14:52:00.266153839 +0100
@@ -33,7 +33,8 @@
 	    doublecomplex *, integer *);
     extern doublereal dlamch_(char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zlacpy_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zlacpy_(
 	    char *, integer *, integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *);
     extern doublereal zlansp_(char *, char *, integer *, doublecomplex *, 
