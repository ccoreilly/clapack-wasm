--- ../../../CLAPACK-3.2.1/SRC/csteqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/csteqr.c	2020-03-18 14:52:00.214151646 +0100
@@ -58,7 +58,7 @@
     extern /* Subroutine */ int claset_(char *, integer *, integer *, complex 
 	    *, complex *, complex *, integer *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real safmax;
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
 	    real *, integer *, integer *, real *, integer *, integer *);
