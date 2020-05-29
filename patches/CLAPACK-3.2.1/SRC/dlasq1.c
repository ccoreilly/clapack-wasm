--- ../../../CLAPACK-3.2.1/SRC/dlasq1.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlasq1.c	2020-03-18 14:52:00.234152490 +0100
@@ -46,7 +46,8 @@
 	    doublereal *, doublereal *, integer *, integer *, doublereal *, 
 	    integer *, integer *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dlasrt_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dlasrt_(
 	    char *, integer *, doublereal *, integer *);
 
 
