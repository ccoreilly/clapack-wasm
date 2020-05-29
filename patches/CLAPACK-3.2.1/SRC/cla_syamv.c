--- ../../../CLAPACK-3.2.1/SRC/cla_syamv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cla_syamv.c	2020-03-18 14:52:00.202151141 +0100
@@ -30,7 +30,7 @@
     integer iy, jx, kx, ky, info;
     real temp, safe1;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilauplo_(char *);
 
 
