--- ../../../CLAPACK-3.2.1/SRC/zgeevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgeevx.c	2020-03-18 14:52:00.258153501 +0100
@@ -59,7 +59,7 @@
 	    doublecomplex *, integer *, integer *, integer *, doublereal *, 
 	    integer *);
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     logical select[1];
