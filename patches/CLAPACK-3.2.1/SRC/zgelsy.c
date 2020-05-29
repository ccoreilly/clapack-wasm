--- ../../../CLAPACK-3.2.1/SRC/zgelsy.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgelsy.c	2020-03-18 14:52:00.258153501 +0100
@@ -53,7 +53,7 @@
 	    doublecomplex *, doublecomplex *, integer *, doublereal *, 
 	    integer *);
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern doublereal zlange_(char *, integer *, integer *, doublecomplex *, 
