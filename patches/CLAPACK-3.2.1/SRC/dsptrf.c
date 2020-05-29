--- ../../../CLAPACK-3.2.1/SRC/dsptrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsptrf.c	2020-03-18 14:52:00.242152827 +0100
@@ -47,7 +47,7 @@
     logical upper;
     doublereal absakk;
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal colmax, rowmax;
 
 
