--- ../../../CLAPACK-3.2.1/SRC/cpptrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpptrf.c	2020-03-18 14:52:00.214151646 +0100
@@ -40,7 +40,8 @@
     logical upper;
     extern /* Subroutine */ int ctpsv_(char *, char *, char *, integer *, 
 	    complex *, complex *, integer *), csscal_(
-	    integer *, real *, complex *, integer *), xerbla_(char *, integer 
+	    integer *, real *, complex *, integer *);
+    void xerbla_(char *, integer 
 	    *);
 
 
