--- ../../../CLAPACK-3.2.1/SRC/dlaed0.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlaed0.c	2020-03-18 14:52:00.230152321 +0100
@@ -59,7 +59,7 @@
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *);
     integer igivcl;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer igivnm, submat, curprb, subpbs, igivpt;
