--- ../../../CLAPACK-3.2.1/SRC/cpteqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpteqr.c	2020-03-18 14:52:00.214151646 +0100
@@ -36,8 +36,10 @@
     integer nru;
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int claset_(char *, integer *, integer *, complex 
-	    *, complex *, complex *, integer *), xerbla_(char *, 
-	    integer *), cbdsqr_(char *, integer *, integer *, integer 
+	    *, complex *, complex *, integer *);
+    void xerbla_(char *, 
+	    integer *);
+    int cbdsqr_(char *, integer *, integer *, integer 
 	    *, integer *, real *, real *, complex *, integer *, complex *, 
 	    integer *, complex *, integer *, real *, integer *);
     integer icompz;
