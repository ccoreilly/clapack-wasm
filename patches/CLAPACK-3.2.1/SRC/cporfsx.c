--- ../../../CLAPACK-3.2.1/SRC/cporfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cporfsx.c	2020-03-18 14:52:00.210151478 +0100
@@ -58,7 +58,8 @@
 	    integer *, complex *, integer *, complex *, integer *, complex *, 
 	    real *, ftnlen), clanhe_(char *, char *, integer *, complex *, 
 	    integer *, real *), slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), cpocon_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  cpocon_(
 	    char *, integer *, complex *, integer *, real *, real *, complex *
 , real *, integer *);
     extern integer ilaprec_(char *);
