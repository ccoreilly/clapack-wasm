--- ../../../CLAPACK-3.2.1/SRC/zggrqf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zggrqf.c	2020-03-18 14:52:00.262153670 +0100
@@ -28,7 +28,7 @@
 
     /* Local variables */
     integer nb, nb1, nb2, nb3, lopt;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int zgeqrf_(integer *, integer *, doublecomplex *, 
