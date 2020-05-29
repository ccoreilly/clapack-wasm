--- ../../../CLAPACK-3.2.1/SRC/sgerfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgerfsx.c	2020-03-18 14:52:00.246152995 +0100
@@ -57,7 +57,8 @@
     real anorm;
     extern doublereal slamch_(char *), slange_(char *, integer *, 
 	    integer *, real *, integer *, real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), sgecon_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  sgecon_(
 	    char *, integer *, real *, integer *, real *, real *, real *, 
 	    integer *, integer *);
     logical colequ, notran, rowequ;
