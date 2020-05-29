--- ../../../CLAPACK-3.2.1/SRC/ztgevc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztgevc.c	2020-03-18 14:52:00.270154007 +0100
@@ -70,7 +70,7 @@
     extern doublereal dlamch_(char *);
     doublecomplex salpha;
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     logical ilcomp;
     extern /* Double Complex */ VOID zladiv_(doublecomplex *, doublecomplex *, 
