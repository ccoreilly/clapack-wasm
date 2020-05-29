--- ../../../CLAPACK-3.2.1/SRC/dla_geamv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dla_geamv.c	2020-03-18 14:52:00.226152152 +0100
@@ -33,7 +33,7 @@
     integer lenx, leny;
     doublereal safe1;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*     -- LAPACK routine (version 3.2)                                 -- */
