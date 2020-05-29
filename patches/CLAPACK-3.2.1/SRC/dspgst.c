--- ../../../CLAPACK-3.2.1/SRC/dspgst.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dspgst.c	2020-03-18 14:52:00.242152827 +0100
@@ -46,7 +46,8 @@
     extern /* Subroutine */ int dtpmv_(char *, char *, char *, integer *, 
 	    doublereal *, doublereal *, integer *), 
 	    dtpsv_(char *, char *, char *, integer *, doublereal *, 
-	    doublereal *, integer *), xerbla_(char *, 
+	    doublereal *, integer *);
+    void xerbla_(char *, 
 	    integer *);
 
 
