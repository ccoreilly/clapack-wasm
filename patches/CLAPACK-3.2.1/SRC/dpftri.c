--- ../../../CLAPACK-3.2.1/SRC/dpftri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpftri.c	2020-03-18 14:52:00.238152659 +0100
@@ -33,7 +33,8 @@
     logical lower;
     extern /* Subroutine */ int dsyrk_(char *, char *, integer *, integer *, 
 	    doublereal *, doublereal *, integer *, doublereal *, doublereal *, 
-	     integer *), xerbla_(char *, integer *);
+	     integer *);
+    void xerbla_(char *, integer *);
     logical nisodd;
     extern /* Subroutine */ int dlauum_(char *, integer *, doublereal *, 
 	    integer *, integer *), dtftri_(char *, char *, char *, 
