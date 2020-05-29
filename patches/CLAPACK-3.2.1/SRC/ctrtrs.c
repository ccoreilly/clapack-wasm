--- ../../../CLAPACK-3.2.1/SRC/ctrtrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctrtrs.c	2020-03-18 14:52:00.218151815 +0100
@@ -28,7 +28,8 @@
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int ctrsm_(char *, char *, char *, char *, 
 	    integer *, integer *, complex *, complex *, integer *, complex *, 
-	    integer *), xerbla_(char *, 
+	    integer *);
+    void xerbla_(char *, 
 	    integer *);
     logical nounit;
 
