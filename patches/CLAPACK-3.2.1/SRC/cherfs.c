--- ../../../CLAPACK-3.2.1/SRC/cherfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cherfs.c	2020-03-18 14:52:00.194150804 +0100
@@ -53,7 +53,8 @@
 	    *, integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), chetrs_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  chetrs_(
 	    char *, integer *, integer *, complex *, integer *, integer *, 
 	    complex *, integer *, integer *);
     real lstres;
