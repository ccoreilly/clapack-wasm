--- ../../../CLAPACK-3.2.1/SRC/zhgeqz.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhgeqz.c	2020-03-18 14:52:00.262153670 +0100
@@ -72,7 +72,7 @@
     extern doublereal dlamch_(char *);
     doublecomplex signbc;
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublecomplex eshift;
     logical ilschr;
     integer icompq, ilastm;
