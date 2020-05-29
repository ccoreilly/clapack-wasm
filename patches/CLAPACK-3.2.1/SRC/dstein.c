--- ../../../CLAPACK-3.2.1/SRC/dstein.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dstein.c	2020-03-18 14:52:00.242152827 +0100
@@ -55,7 +55,8 @@
 	     doublereal *, doublereal *, doublereal *, doublereal *, integer *
 , integer *);
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), dlagts_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dlagts_(
 	    integer *, integer *, doublereal *, doublereal *, doublereal *, 
 	    doublereal *, integer *, doublereal *, doublereal *, integer *);
     integer nrmchk;
