--- ../../../CLAPACK-3.2.1/SRC/cpttrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpttrf.c	2020-03-18 14:52:00.214151646 +0100
@@ -26,7 +26,7 @@
     real f, g;
     integer i__, i4;
     real eii, eir;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
