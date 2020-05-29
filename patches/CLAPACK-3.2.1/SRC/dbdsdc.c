--- ../../../CLAPACK-3.2.1/SRC/dbdsdc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dbdsdc.c	2020-03-18 14:52:00.222151984 +0100
@@ -68,7 +68,7 @@
 	    doublereal *, doublereal *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer givcol;
     extern doublereal dlanst_(char *, integer *, doublereal *, doublereal *);
     integer icompq;
