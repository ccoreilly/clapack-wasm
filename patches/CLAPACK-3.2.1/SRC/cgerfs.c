--- ../../../CLAPACK-3.2.1/SRC/cgerfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgerfs.c	2020-03-18 14:52:00.190150635 +0100
@@ -52,7 +52,8 @@
 	    *, integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), cgetrs_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  cgetrs_(
 	    char *, integer *, integer *, complex *, integer *, integer *, 
 	    complex *, integer *, integer *);
     logical notran;
