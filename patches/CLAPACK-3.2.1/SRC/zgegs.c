--- ../../../CLAPACK-3.2.1/SRC/zgegs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgegs.c	2020-03-18 14:52:00.258153501 +0100
@@ -48,7 +48,7 @@
 , integer *, doublereal *, doublereal *, doublereal *, integer *);
     logical ilascl, ilbscl;
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern doublereal zlange_(char *, integer *, integer *, doublecomplex *, 
