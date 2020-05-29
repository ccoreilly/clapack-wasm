--- ../../../CLAPACK-3.2.1/SRC/clasr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/clasr.c	2020-03-18 14:52:00.210151478 +0100
@@ -25,7 +25,7 @@
     complex temp;
     extern logical lsame_(char *, char *);
     real ctemp, stemp;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK auxiliary routine (version 3.2) -- */
