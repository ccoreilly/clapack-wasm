--- ../../../CLAPACK-3.2.1/SRC/dgbtrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgbtrs.c	2020-03-18 14:52:00.222151984 +0100
@@ -39,7 +39,7 @@
 	    char *, char *, integer *, integer *, doublereal *, integer *, 
 	    doublereal *, integer *);
     logical lnoti;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical notran;
 
 
