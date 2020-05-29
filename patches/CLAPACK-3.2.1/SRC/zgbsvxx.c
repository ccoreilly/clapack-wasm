--- ../../../CLAPACK-3.2.1/SRC/zgbsvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgbsvxx.c	2020-03-18 14:52:00.258153501 +0100
@@ -39,7 +39,8 @@
     extern doublereal dlamch_(char *);
     doublereal colcnd;
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zlaqgb_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zlaqgb_(
 	    integer *, integer *, integer *, integer *, doublecomplex *, 
 	    integer *, doublereal *, doublereal *, doublereal *, doublereal *, 
 	     doublereal *, char *);
