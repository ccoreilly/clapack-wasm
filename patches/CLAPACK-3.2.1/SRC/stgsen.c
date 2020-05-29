--- ../../../CLAPACK-3.2.1/SRC/stgsen.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stgsen.c	2020-03-18 14:52:00.258153501 +0100
@@ -53,7 +53,8 @@
     logical wantd1, wantd2;
     real dscale, rdscal;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), slacpy_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slacpy_(
 	    char *, integer *, integer *, real *, integer *, real *, integer *
 ), stgexc_(logical *, logical *, integer *, real *, 
 	    integer *, real *, integer *, real *, integer *, real *, integer *
