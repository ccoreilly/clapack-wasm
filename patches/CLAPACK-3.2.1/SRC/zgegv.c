--- ../../../CLAPACK-3.2.1/SRC/zgegv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgegv.c	2020-03-18 14:52:00.258153501 +0100
@@ -56,7 +56,7 @@
 	     doublecomplex *, integer *, doublecomplex *, integer *, integer *
 , integer *, doublereal *, doublereal *, doublereal *, integer *);
     doublereal salfar, safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal safmax;
     char chtemp[1];
     logical ldumma[1];
