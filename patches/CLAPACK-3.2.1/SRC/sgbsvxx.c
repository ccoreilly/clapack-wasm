--- ../../../CLAPACK-3.2.1/SRC/sgbsvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgbsvxx.c	2020-03-18 14:52:00.246152995 +0100
@@ -41,7 +41,7 @@
 	    integer *, real *, integer *, real *, real *, real *, real *, 
 	    real *, char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     integer infequ;
     logical colequ;
