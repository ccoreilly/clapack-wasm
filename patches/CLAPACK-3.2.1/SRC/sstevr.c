--- ../../../CLAPACK-3.2.1/SRC/sstevr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sstevr.c	2020-03-18 14:52:00.258153501 +0100
@@ -54,7 +54,7 @@
     real safmin;
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     integer indisp, indiwo, liwmin;
     logical tryrac;
