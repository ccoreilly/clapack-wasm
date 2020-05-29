--- ../../../CLAPACK-3.2.1/SRC/ssterf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssterf.c	2020-03-18 14:52:00.258153501 +0100
@@ -45,7 +45,7 @@
     real oldgam;
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real safmax;
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
 	    real *, integer *, integer *, real *, integer *, integer *);
