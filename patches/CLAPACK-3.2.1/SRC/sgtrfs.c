--- ../../../CLAPACK-3.2.1/SRC/sgtrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgtrfs.c	2020-03-18 14:52:00.250153164 +0100
@@ -43,7 +43,8 @@
 	    integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slagtm_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slagtm_(
 	    char *, integer *, integer *, real *, real *, real *, real *, 
 	    real *, integer *, real *, real *, integer *);
     logical notran;
