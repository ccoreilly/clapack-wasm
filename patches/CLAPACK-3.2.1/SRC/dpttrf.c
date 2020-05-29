--- ../../../CLAPACK-3.2.1/SRC/dpttrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpttrf.c	2020-03-18 14:52:00.238152659 +0100
@@ -22,7 +22,7 @@
     /* Local variables */
     integer i__, i4;
     doublereal ei;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
