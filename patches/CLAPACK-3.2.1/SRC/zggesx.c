--- ../../../CLAPACK-3.2.1/SRC/zggesx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zggesx.c	2020-03-18 14:52:00.262153670 +0100
@@ -56,7 +56,7 @@
 	     doublecomplex *, integer *, doublecomplex *, integer *, integer *
 , integer *, doublereal *, doublereal *, doublereal *, integer *);
     logical ilascl, ilbscl;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern doublereal zlange_(char *, integer *, integer *, doublecomplex *, 
