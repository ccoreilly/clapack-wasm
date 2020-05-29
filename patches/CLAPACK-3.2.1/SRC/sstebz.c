--- ../../../CLAPACK-3.2.1/SRC/sstebz.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sstebz.c	2020-03-18 14:52:00.258153501 +0100
@@ -56,7 +56,7 @@
     extern doublereal slamch_(char *);
     real safemn;
     integer idumma[1];
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer idiscu;
