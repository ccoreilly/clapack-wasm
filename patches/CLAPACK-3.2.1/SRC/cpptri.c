--- ../../../CLAPACK-3.2.1/SRC/cpptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpptri.c	2020-03-18 14:52:00.214151646 +0100
@@ -39,7 +39,9 @@
 	    complex *, complex *, integer *);
     logical upper;
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
-	    *), xerbla_(char *, integer *), ctptri_(char *, char *, 
+	    *);
+    void xerbla_(char *, integer *);
+    int ctptri_(char *, char *, 
 	    integer *, complex *, integer *);
 
 
