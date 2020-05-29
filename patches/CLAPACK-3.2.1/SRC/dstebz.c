--- ../../../CLAPACK-3.2.1/SRC/dstebz.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dstebz.c	2020-03-18 14:52:00.242152827 +0100
@@ -63,7 +63,7 @@
     integer irange, idiscl;
     doublereal safemn;
     integer idumma[1];
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer idiscu, iorder;
