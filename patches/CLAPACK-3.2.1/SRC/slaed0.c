--- ../../../CLAPACK-3.2.1/SRC/slaed0.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slaed0.c	2020-03-18 14:52:00.250153164 +0100
@@ -52,7 +52,7 @@
 , real *, integer *, integer *, integer *, integer *, integer *, 
 	    real *, real *, integer *, integer *);
     integer igivcl;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer igivnm, submat;
