--- ../../../CLAPACK-3.2.1/SRC/zptsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zptsvx.c	2020-03-18 14:52:00.266153839 +0100
@@ -34,7 +34,7 @@
 	    integer *, doublecomplex *, integer *);
     extern doublereal dlamch_(char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal zlanht_(char *, integer *, doublereal *, doublecomplex *
 );
     extern /* Subroutine */ int zlacpy_(char *, integer *, integer *, 
