--- ../../../CLAPACK-3.2.1/SRC/zposvxx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zposvxx.c	2020-03-18 14:52:00.266153839 +0100
@@ -37,7 +37,7 @@
     logical equil, rcequ;
     extern doublereal dlamch_(char *);
     logical nofact;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     extern /* Subroutine */ int zlaqhe_(char *, integer *, doublecomplex *, 
 	    integer *, doublereal *, doublereal *, doublereal *, char *);
