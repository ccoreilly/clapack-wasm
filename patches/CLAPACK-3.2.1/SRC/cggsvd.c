--- ../../../CLAPACK-3.2.1/SRC/cggsvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cggsvd.c	2020-03-18 14:52:00.190150635 +0100
@@ -48,7 +48,8 @@
 	    integer *, complex *, integer *, complex *, integer *, complex *, 
 	    integer *, integer *);
     integer ncycle;
-    extern /* Subroutine */ int xerbla_(char *, integer *), cggsvp_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  cggsvp_(
 	    char *, char *, char *, integer *, integer *, integer *, complex *
 , integer *, complex *, integer *, real *, real *, integer *, 
 	    integer *, complex *, integer *, complex *, integer *, complex *, 
