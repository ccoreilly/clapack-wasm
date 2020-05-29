--- ../../../CLAPACK-3.2.1/SRC/dsbgv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsbgv.c	2020-03-18 14:52:00.238152659 +0100
@@ -27,7 +27,8 @@
     extern logical lsame_(char *, char *);
     integer iinfo;
     logical upper, wantz;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dpbstf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dpbstf_(
 	    char *, integer *, integer *, doublereal *, integer *, integer *), dsbtrd_(char *, char *, integer *, integer *, doublereal 
 	    *, integer *, doublereal *, doublereal *, doublereal *, integer *, 
 	     doublereal *, integer *), dsbgst_(char *, char *, 
