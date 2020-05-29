--- ../../../CLAPACK-3.2.1/SRC/slasr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slasr.c	2020-03-18 14:52:00.254153333 +0100
@@ -24,7 +24,7 @@
     real temp;
     extern logical lsame_(char *, char *);
     real ctemp, stemp;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK auxiliary routine (version 3.2) -- */
