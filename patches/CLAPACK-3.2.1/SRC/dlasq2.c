--- ../../../CLAPACK-3.2.1/SRC/dlasq2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlasq2.c	2020-03-18 14:52:00.234152490 +0100
@@ -60,7 +60,7 @@
     doublereal deemin;
     integer iwhila, iwhilb;
     doublereal oldemn, safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int dlasrt_(char *, integer *, doublereal *, 
