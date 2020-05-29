--- ../../../CLAPACK-3.2.1/SRC/dtgsyl.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtgsyl.c	2020-03-18 14:52:00.246152995 +0100
@@ -61,7 +61,7 @@
 	    doublereal *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer iround;
     logical notran;
     integer isolve;
