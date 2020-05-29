--- ../../../CLAPACK-3.2.1/SRC/stzrzf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stzrzf.c	2020-03-18 14:52:00.258153501 +0100
@@ -28,7 +28,7 @@
 
     /* Local variables */
     integer i__, m1, ib, nb, ki, kk, mu, nx, iws, nbmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int slarzb_(char *, char *, char *, char *, 
