--- ../../../CLAPACK-3.2.1/SRC/slaed3.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slaed3.c	2020-03-18 14:52:00.250153164 +0100
@@ -40,7 +40,8 @@
 	    integer *, real *, integer *), slaed4_(integer *, integer *, real 
 	    *, real *, real *, real *, real *, integer *);
     extern doublereal slamc3_(real *, real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), slacpy_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slacpy_(
 	    char *, integer *, integer *, real *, integer *, real *, integer *
 ), slaset_(char *, integer *, integer *, real *, real *, 
 	    real *, integer *);
