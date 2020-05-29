--- ../../../CLAPACK-3.2.1/SRC/dgbtrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgbtrf.c	2020-03-18 14:52:00.222151984 +0100
@@ -49,7 +49,7 @@
 	    integer *, integer *, integer *, integer *, doublereal *, integer 
 	    *, integer *, integer *);
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int dlaswp_(integer *, doublereal *, integer *, 
