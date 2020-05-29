--- ../../../CLAPACK-3.2.1/SRC/dspgvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dspgvd.c	2020-03-18 14:52:00.242152827 +0100
@@ -37,7 +37,8 @@
 	    dtpsv_(char *, char *, char *, integer *, doublereal *, 
 	    doublereal *, integer *);
     logical wantz;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dspevd_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dspevd_(
 	    char *, char *, integer *, doublereal *, doublereal *, doublereal 
 	    *, integer *, doublereal *, integer *, integer *, integer *, 
 	    integer *);
