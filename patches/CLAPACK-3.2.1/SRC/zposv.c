--- ../../../CLAPACK-3.2.1/SRC/zposv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zposv.c	2020-03-18 14:52:00.266153839 +0100
@@ -22,7 +22,8 @@
 
     /* Local variables */
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), zpotrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zpotrf_(
 	    char *, integer *, doublecomplex *, integer *, integer *),
 	     zpotrs_(char *, integer *, integer *, doublecomplex *, integer *, 
 	     doublecomplex *, integer *, integer *);
