--- ../../../CLAPACK-3.2.1/SRC/dsytri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsytri.c	2020-03-18 14:52:00.242152827 +0100
@@ -43,7 +43,8 @@
     logical upper;
     extern /* Subroutine */ int dsymv_(char *, integer *, doublereal *, 
 	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
-	    doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
