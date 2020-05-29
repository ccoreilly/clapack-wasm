--- ../../../CLAPACK-3.2.1/SRC/cgbtf2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgbtf2.c	2020-03-18 14:52:00.186150466 +0100
@@ -35,7 +35,7 @@
 	    integer *, complex *, integer *, complex *, integer *), cswap_(
 	    integer *, complex *, integer *, complex *, integer *);
     extern integer icamax_(integer *, complex *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
