--- ../../../CLAPACK-3.2.1/SRC/ztrsyl.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztrsyl.c	2020-03-18 14:52:00.270154007 +0100
@@ -49,7 +49,7 @@
     extern /* Subroutine */ int dlabad_(doublereal *, doublereal *);
     extern doublereal dlamch_(char *);
     doublereal scaloc;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal zlange_(char *, integer *, integer *, doublecomplex *, 
 	    integer *, doublereal *);
     doublereal bignum;
