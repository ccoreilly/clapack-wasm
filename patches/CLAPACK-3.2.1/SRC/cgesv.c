--- ../../../CLAPACK-3.2.1/SRC/cgesv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgesv.c	2020-03-18 14:52:00.190150635 +0100
@@ -21,7 +21,9 @@
 
     /* Local variables */
     extern /* Subroutine */ int cgetrf_(integer *, integer *, complex *, 
-	    integer *, integer *, integer *), xerbla_(char *, integer *), cgetrs_(char *, integer *, integer *, complex *, integer 
+	    integer *, integer *, integer *);
+    void xerbla_(char *, integer *);
+    int cgetrs_(char *, integer *, integer *, complex *, integer 
 	    *, integer *, complex *, integer *, integer *);
 
 
