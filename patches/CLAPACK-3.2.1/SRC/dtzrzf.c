--- ../../../CLAPACK-3.2.1/SRC/dtzrzf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtzrzf.c	2020-03-18 14:52:00.246152995 +0100
@@ -28,7 +28,8 @@
 
     /* Local variables */
     integer i__, m1, ib, nb, ki, kk, mu, nx, iws, nbmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dlarzb_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dlarzb_(
 	    char *, char *, char *, char *, integer *, integer *, integer *, 
 	    integer *, doublereal *, integer *, doublereal *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *);
