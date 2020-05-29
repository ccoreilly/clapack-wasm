--- ../../../CLAPACK-3.2.1/SRC/dsygvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsygvx.c	2020-03-18 14:52:00.242152827 +0100
@@ -40,7 +40,7 @@
 	    integer *, integer *, doublereal *, doublereal *, integer *, 
 	    doublereal *, integer *);
     logical upper, wantz, alleig, indeig, valeig;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int dpotrf_(char *, integer *, doublereal *, 
