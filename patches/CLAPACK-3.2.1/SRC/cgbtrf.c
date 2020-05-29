--- ../../../CLAPACK-3.2.1/SRC/cgbtrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgbtrf.c	2020-03-18 14:52:00.186150466 +0100
@@ -49,7 +49,7 @@
 	    integer *, integer *, integer *, complex *, integer *, integer *, 
 	    integer *);
     extern integer icamax_(integer *, complex *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int claswp_(integer *, complex *, integer *, 
