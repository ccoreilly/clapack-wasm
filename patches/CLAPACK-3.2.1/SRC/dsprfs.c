--- ../../../CLAPACK-3.2.1/SRC/dsprfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsprfs.c	2020-03-18 14:52:00.242152827 +0100
@@ -51,7 +51,7 @@
 	     integer *, doublereal *, integer *, integer *);
     extern doublereal dlamch_(char *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal lstres;
     extern /* Subroutine */ int dsptrs_(char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *, integer *);
