--- ../../../CLAPACK-3.2.1/SRC/dsygvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsygvd.c	2020-03-18 14:52:00.242152827 +0100
@@ -39,7 +39,8 @@
 	    integer *, integer *, doublereal *, doublereal *, integer *, 
 	    doublereal *, integer *);
     logical upper, wantz;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dpotrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dpotrf_(
 	    char *, integer *, doublereal *, integer *, integer *);
     integer liwmin;
     extern /* Subroutine */ int dsyevd_(char *, char *, integer *, doublereal 
