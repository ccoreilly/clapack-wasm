--- ../../../CLAPACK-3.2.1/SRC/cpprfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpprfs.c	2020-03-18 14:52:00.214151646 +0100
@@ -51,7 +51,8 @@
 	    *, integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), cpptrs_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  cpptrs_(
 	    char *, integer *, integer *, complex *, complex *, integer *, 
 	    integer *);
     real lstres;
