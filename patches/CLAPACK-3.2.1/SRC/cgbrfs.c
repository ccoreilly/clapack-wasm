--- ../../../CLAPACK-3.2.1/SRC/cgbrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgbrfs.c	2020-03-18 14:52:00.182150297 +0100
@@ -55,7 +55,8 @@
 	    *, integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), cgbtrs_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  cgbtrs_(
 	    char *, integer *, integer *, integer *, integer *, complex *, 
 	    integer *, integer *, complex *, integer *, integer *);
     logical notran;
