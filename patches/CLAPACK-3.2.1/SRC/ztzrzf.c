--- ../../../CLAPACK-3.2.1/SRC/ztzrzf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztzrzf.c	2020-03-18 14:52:00.270154007 +0100
@@ -29,7 +29,7 @@
 
     /* Local variables */
     integer i__, m1, ib, nb, ki, kk, mu, nx, iws, nbmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwork;
