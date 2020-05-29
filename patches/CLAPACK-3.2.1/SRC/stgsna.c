--- ../../../CLAPACK-3.2.1/SRC/stgsna.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stgsna.c	2020-03-18 14:52:00.258153501 +0100
@@ -64,7 +64,7 @@
     extern doublereal slapy2_(real *, real *);
     real dummy1[1], alphai, alphar;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical wantbh, wantdf;
     extern /* Subroutine */ int slacpy_(char *, integer *, integer *, real *, 
 	    integer *, real *, integer *), stgexc_(logical *, logical 
