--- ../../../CLAPACK-3.2.1/SRC/chpgv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chpgv.c	2020-03-18 14:52:00.198150972 +0100
@@ -36,7 +36,8 @@
     extern /* Subroutine */ int ctpsv_(char *, char *, char *, integer *, 
 	    complex *, complex *, integer *);
     logical wantz;
-    extern /* Subroutine */ int xerbla_(char *, integer *), chpgst_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  chpgst_(
 	    integer *, char *, integer *, complex *, complex *, integer *), cpptrf_(char *, integer *, complex *, integer *);
 
 
