--- ../../../CLAPACK-3.2.1/SRC/sspgvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sspgvx.c	2020-03-18 14:52:00.258153501 +0100
@@ -34,7 +34,8 @@
 	    real *, real *, integer *), stpsv_(char *, 
 	     char *, char *, integer *, real *, real *, integer *);
     logical alleig, indeig, valeig;
-    extern /* Subroutine */ int xerbla_(char *, integer *), spptrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  spptrf_(
 	    char *, integer *, real *, integer *), sspgst_(integer *, 
 	    char *, integer *, real *, real *, integer *), sspevx_(
 	    char *, char *, char *, integer *, real *, real *, real *, 
