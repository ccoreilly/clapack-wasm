--- ../../../CLAPACK-3.2.1/SRC/dggbal.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dggbal.c	2020-03-18 14:52:00.226152152 +0100
@@ -61,7 +61,7 @@
     extern doublereal dlamch_(char *);
     doublereal pgamma;
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer lsfmin, lsfmax;
 
 
