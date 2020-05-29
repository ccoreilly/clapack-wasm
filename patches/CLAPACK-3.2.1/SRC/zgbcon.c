--- ../../../CLAPACK-3.2.1/SRC/zgbcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgbcon.c	2020-03-18 14:52:00.258153501 +0100
@@ -45,7 +45,7 @@
 	    integer *, doublecomplex *, doublecomplex *, doublereal *, 
 	    integer *, integer *);
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal ainvnm;
     extern integer izamax_(integer *, doublecomplex *, integer *);
     logical onenrm;
