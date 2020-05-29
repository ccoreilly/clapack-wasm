--- ../../../CLAPACK-3.2.1/SRC/cgetrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgetrs.c	2020-03-18 14:52:00.190150635 +0100
@@ -30,8 +30,9 @@
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int ctrsm_(char *, char *, char *, char *, 
 	    integer *, integer *, complex *, complex *, integer *, complex *, 
-	    integer *), xerbla_(char *, 
-	    integer *), claswp_(integer *, complex *, integer *, 
+	    integer *);
+    void xerbla_(char *, integer *);
+    int claswp_(integer *, complex *, integer *, 
 	    integer *, integer *, integer *, integer *);
     logical notran;
 
