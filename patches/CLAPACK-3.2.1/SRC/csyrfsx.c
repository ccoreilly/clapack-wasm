--- ../../../CLAPACK-3.2.1/SRC/csyrfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/csyrfsx.c	2020-03-18 14:52:00.214151646 +0100
@@ -57,7 +57,7 @@
 	    complex *, real *, ftnlen), cla_syrcond_x__(char *, integer *, 
 	    complex *, integer *, complex *, integer *, integer *, complex *, 
 	    integer *, complex *, real *, ftnlen), slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal clansy_(char *, char *, integer *, complex *, integer *, 
 	     real *);
     extern /* Subroutine */ int csycon_(char *, integer *, complex *, integer 
