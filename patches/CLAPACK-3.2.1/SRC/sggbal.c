--- ../../../CLAPACK-3.2.1/SRC/sggbal.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sggbal.c	2020-03-18 14:52:00.250153164 +0100
@@ -56,7 +56,7 @@
 	    real *, integer *);
     real pgamma;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
     integer lsfmin, lsfmax;
 
