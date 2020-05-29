--- ../../../CLAPACK-3.2.1/SRC/dgtsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgtsv.c	2020-03-18 14:52:00.226152152 +0100
@@ -24,7 +24,7 @@
     /* Local variables */
     integer i__, j;
     doublereal fact, temp;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
