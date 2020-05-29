--- ../../../CLAPACK-3.2.1/SRC/spteqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spteqr.c	2020-03-18 14:52:00.254153333 +0100
@@ -35,7 +35,8 @@
     real vt[1]	/* was [1][1] */;
     integer nru;
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), slaset_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slaset_(
 	    char *, integer *, integer *, real *, real *, real *, integer *), sbdsqr_(char *, integer *, integer *, integer *, integer 
 	    *, real *, real *, real *, integer *, real *, integer *, real *, 
 	    integer *, real *, integer *);
