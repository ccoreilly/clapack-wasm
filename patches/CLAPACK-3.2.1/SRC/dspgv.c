--- ../../../CLAPACK-3.2.1/SRC/dspgv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dspgv.c	2020-03-18 14:52:00.242152827 +0100
@@ -36,7 +36,8 @@
 	    dtpsv_(char *, char *, char *, integer *, doublereal *, 
 	    doublereal *, integer *);
     logical wantz;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dpptrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dpptrf_(
 	    char *, integer *, doublereal *, integer *), dspgst_(
 	    integer *, char *, integer *, doublereal *, doublereal *, integer 
 	    *);
