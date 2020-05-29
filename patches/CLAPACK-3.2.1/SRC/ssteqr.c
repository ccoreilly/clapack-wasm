--- ../../../CLAPACK-3.2.1/SRC/ssteqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssteqr.c	2020-03-18 14:52:00.258153501 +0100
@@ -53,7 +53,7 @@
     integer iscale;
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real safmax;
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
 	    real *, integer *, integer *, real *, integer *, integer *);
