--- ../../../CLAPACK-3.2.1/SRC/cgbsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgbsv.c	2020-03-18 14:52:00.182150297 +0100
@@ -22,8 +22,9 @@
 
     /* Local variables */
     extern /* Subroutine */ int cgbtrf_(integer *, integer *, integer *, 
-	    integer *, complex *, integer *, integer *, integer *), xerbla_(
-	    char *, integer *), cgbtrs_(char *, integer *, integer *, 
+	    integer *, complex *, integer *, integer *, integer *);
+    void xerbla_(char *, integer *);
+    int cgbtrs_(char *, integer *, integer *, 
 	    integer *, integer *, complex *, integer *, integer *, complex *, 
 	    integer *, integer *);
 
