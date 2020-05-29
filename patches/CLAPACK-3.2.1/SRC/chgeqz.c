--- ../../../CLAPACK-3.2.1/SRC/chgeqz.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chgeqz.c	2020-03-18 14:52:00.198150972 +0100
@@ -74,7 +74,7 @@
 	    *, complex *, complex *, integer *), clartg_(complex *, 
 	    complex *, real *, complex *, complex *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     complex eshift;
     logical ilschr;
     integer icompq, ilastm;
