--- ../../../CLAPACK-3.2.1/SRC/sgghrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgghrd.c	2020-03-18 14:52:00.250153164 +0100
@@ -36,7 +36,7 @@
     extern /* Subroutine */ int srot_(integer *, real *, integer *, real *, 
 	    integer *, real *, real *);
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer icompq;
     extern /* Subroutine */ int slaset_(char *, integer *, integer *, real *, 
 	    real *, real *, integer *), slartg_(real *, real *, real *
