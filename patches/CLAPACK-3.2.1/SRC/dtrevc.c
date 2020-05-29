--- ../../../CLAPACK-3.2.1/SRC/dtrevc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtrevc.c	2020-03-18 14:52:00.246152995 +0100
@@ -72,7 +72,7 @@
 	     dlabad_(doublereal *, doublereal *);
     extern doublereal dlamch_(char *);
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     logical rightv;
     doublereal smlnum;
