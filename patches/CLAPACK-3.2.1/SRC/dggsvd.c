--- ../../../CLAPACK-3.2.1/SRC/dggsvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dggsvd.c	2020-03-18 14:52:00.226152152 +0100
@@ -49,7 +49,8 @@
 	     integer *, doublereal *, integer *, doublereal *, integer *, 
 	    integer *);
     integer ncycle;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dggsvp_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dggsvp_(
 	    char *, char *, char *, integer *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
 	    doublereal *, integer *, integer *, doublereal *, integer *, 
