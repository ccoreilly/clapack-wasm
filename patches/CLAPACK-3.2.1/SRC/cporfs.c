--- ../../../CLAPACK-3.2.1/SRC/cporfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cporfs.c	2020-03-18 14:52:00.210151478 +0100
@@ -53,7 +53,8 @@
 	    *, integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), cpotrs_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  cpotrs_(
 	    char *, integer *, integer *, complex *, integer *, complex *, 
 	    integer *, integer *);
     real lstres;
