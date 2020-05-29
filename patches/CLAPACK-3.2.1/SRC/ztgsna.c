--- ../../../CLAPACK-3.2.1/SRC/ztgsna.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztgsna.c	2020-03-18 14:52:00.270154007 +0100
@@ -58,7 +58,7 @@
     doublecomplex dummy1[1];
     extern doublereal dznrm2_(integer *, doublecomplex *, integer *), dlamch_(
 	    char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     logical wantbh, wantdf, somcon;
     extern /* Subroutine */ int zlacpy_(char *, integer *, integer *, 
