--- ../../../CLAPACK-3.2.1/SRC/dgesv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgesv.c	2020-03-18 14:52:00.222151984 +0100
@@ -21,7 +21,9 @@
 
     /* Local variables */
     extern /* Subroutine */ int dgetrf_(integer *, integer *, doublereal *, 
-	    integer *, integer *, integer *), xerbla_(char *, integer *), dgetrs_(char *, integer *, integer *, doublereal *, 
+	    integer *, integer *, integer *);
+    void xerbla_(char *, integer *);
+    int dgetrs_(char *, integer *, integer *, doublereal *, 
 	    integer *, integer *, doublereal *, integer *, integer *);
 
 
