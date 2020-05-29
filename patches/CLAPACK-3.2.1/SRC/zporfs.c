--- ../../../CLAPACK-3.2.1/SRC/zporfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zporfs.c	2020-03-18 14:52:00.266153839 +0100
@@ -53,7 +53,7 @@
 	    integer *, integer *);
     extern doublereal dlamch_(char *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal lstres;
     extern /* Subroutine */ int zpotrs_(char *, integer *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, integer *, integer *);
