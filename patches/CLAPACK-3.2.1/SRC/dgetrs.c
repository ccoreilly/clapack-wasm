--- ../../../CLAPACK-3.2.1/SRC/dgetrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgetrs.c	2020-03-18 14:52:00.226152152 +0100
@@ -30,8 +30,10 @@
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int dtrsm_(char *, char *, char *, char *, 
 	    integer *, integer *, doublereal *, doublereal *, integer *, 
-	    doublereal *, integer *), xerbla_(
-	    char *, integer *), dlaswp_(integer *, doublereal *, 
+	    doublereal *, integer *);
+    void xerbla_(
+	    char *, integer *);
+    int dlaswp_(integer *, doublereal *, 
 	    integer *, integer *, integer *, integer *, integer *);
     logical notran;
 
