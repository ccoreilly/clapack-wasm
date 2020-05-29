--- ../../../CLAPACK-3.2.1/SRC/chegvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chegvd.c	2020-03-18 14:52:00.194150804 +0100
@@ -45,7 +45,9 @@
 	    integer *, real *, complex *, integer *, real *, integer *, 
 	    integer *, integer *, integer *), chegst_(integer 
 	    *, char *, integer *, complex *, integer *, complex *, integer *, 
-	    integer *), xerbla_(char *, integer *), cpotrf_(
+	    integer *);
+    void xerbla_(char *, integer *);
+    int cpotrf_(
 	    char *, integer *, complex *, integer *, integer *);
     integer liwmin, lrwmin;
     logical lquery;
