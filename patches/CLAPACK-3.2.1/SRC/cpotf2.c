--- ../../../CLAPACK-3.2.1/SRC/cpotf2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpotf2.c	2020-03-18 14:52:00.214151646 +0100
@@ -40,7 +40,8 @@
 , integer *);
     logical upper;
     extern /* Subroutine */ int clacgv_(integer *, complex *, integer *), 
-	    csscal_(integer *, real *, complex *, integer *), xerbla_(char *, 
+	    csscal_(integer *, real *, complex *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     extern logical sisnan_(real *);
 
