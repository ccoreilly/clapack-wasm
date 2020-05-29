--- ../../../CLAPACK-3.2.1/SRC/claed0.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/claed0.c	2020-03-18 14:52:00.202151141 +0100
@@ -51,7 +51,7 @@
     extern /* Subroutine */ int clacrm_(integer *, integer *, complex *, 
 	    integer *, real *, integer *, complex *, integer *, real *);
     integer igivcl;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer igivnm, submat, curprb, subpbs, igivpt, curlvl, matsiz, iprmpt, 
