--- ../../../CLAPACK-3.2.1/SRC/sporfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sporfsx.c	2020-03-18 14:52:00.254153333 +0100
@@ -55,7 +55,8 @@
     real anorm;
     logical rcequ;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), spocon_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  spocon_(
 	    char *, integer *, real *, integer *, real *, real *, real *, 
 	    integer *, integer *);
     extern doublereal slansy_(char *, char *, integer *, real *, integer *, 
