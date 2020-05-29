--- ../../../CLAPACK-3.2.1/SRC/cpbstf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpbstf.c	2020-03-18 14:52:00.210151478 +0100
@@ -37,7 +37,8 @@
     extern logical lsame_(char *, char *);
     logical upper;
     extern /* Subroutine */ int clacgv_(integer *, complex *, integer *), 
-	    csscal_(integer *, real *, complex *, integer *), xerbla_(char *, 
+	    csscal_(integer *, real *, complex *, integer *);
+    void xerbla_(char *, 
 	    integer *);
 
 
