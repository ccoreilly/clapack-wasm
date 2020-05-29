--- ../../../CLAPACK-3.2.1/SRC/dsytf2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsytf2.c	2020-03-18 14:52:00.242152827 +0100
@@ -46,7 +46,7 @@
     doublereal absakk;
     extern integer idamax_(integer *, doublereal *, integer *);
     extern logical disnan_(doublereal *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal colmax, rowmax;
 
 
