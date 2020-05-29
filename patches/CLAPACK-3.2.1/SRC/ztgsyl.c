--- ../../../CLAPACK-3.2.1/SRC/ztgsyl.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztgsyl.c	2020-03-18 14:52:00.270154007 +0100
@@ -57,7 +57,7 @@
 	    doublecomplex *, integer *, doublecomplex *, integer *, 
 	    doublereal *, doublereal *, doublereal *, integer *);
     doublereal scaloc;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer iround;
