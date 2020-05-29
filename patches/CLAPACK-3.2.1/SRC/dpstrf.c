--- ../../../CLAPACK-3.2.1/SRC/dpstrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpstrf.c	2020-03-18 14:52:00.238152659 +0100
@@ -54,7 +54,7 @@
 	    doublereal *, integer *);
     extern doublereal dlamch_(char *);
     extern logical disnan_(doublereal *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern integer dmaxloc_(doublereal *, integer *);
