--- ../../../CLAPACK-3.2.1/SRC/strsen.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/strsen.c	2020-03-18 14:52:00.258153501 +0100
@@ -45,7 +45,7 @@
 	    real *, integer *, integer *);
     extern doublereal slange_(char *, integer *, integer *, real *, integer *, 
 	     real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical wantbh;
     extern /* Subroutine */ int slacpy_(char *, integer *, integer *, real *, 
 	    integer *, real *, integer *);
