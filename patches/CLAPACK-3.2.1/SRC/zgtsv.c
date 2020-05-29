--- ../../../CLAPACK-3.2.1/SRC/zgtsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgtsv.c	2020-03-18 14:52:00.262153670 +0100
@@ -29,7 +29,7 @@
     /* Local variables */
     integer j, k;
     doublecomplex temp, mult;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
