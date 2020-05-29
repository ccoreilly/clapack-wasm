--- ../../../CLAPACK-3.2.1/SRC/ztgsen.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztgsen.c	2020-03-18 14:52:00.270154007 +0100
@@ -50,7 +50,7 @@
     logical wantd1, wantd2;
     extern doublereal dlamch_(char *);
     doublereal dscale, rdscal, safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer liwmin;
     extern /* Subroutine */ int zlacpy_(char *, integer *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, integer *), 
