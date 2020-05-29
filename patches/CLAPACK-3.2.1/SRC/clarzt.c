--- ../../../CLAPACK-3.2.1/SRC/clarzt.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/clarzt.c	2020-03-18 14:52:00.210151478 +0100
@@ -32,7 +32,8 @@
 , integer *);
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int ctrmv_(char *, char *, char *, integer *, 
-	    complex *, integer *, complex *, integer *), clacgv_(integer *, complex *, integer *), xerbla_(char *, 
+	    complex *, integer *, complex *, integer *), clacgv_(integer *, complex *, integer *);
+    void xerbla_(char *, 
 	     integer *);
 
 
