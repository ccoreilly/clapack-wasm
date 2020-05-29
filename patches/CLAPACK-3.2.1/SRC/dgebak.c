--- ../../../CLAPACK-3.2.1/SRC/dgebak.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgebak.c	2020-03-18 14:52:00.222151984 +0100
@@ -30,7 +30,7 @@
     extern /* Subroutine */ int dswap_(integer *, doublereal *, integer *, 
 	    doublereal *, integer *);
     logical leftv;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical rightv;
 
 
