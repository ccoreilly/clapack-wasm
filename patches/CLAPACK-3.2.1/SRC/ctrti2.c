--- ../../../CLAPACK-3.2.1/SRC/ctrti2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctrti2.c	2020-03-18 14:52:00.218151815 +0100
@@ -36,7 +36,8 @@
     extern logical lsame_(char *, char *);
     logical upper;
     extern /* Subroutine */ int ctrmv_(char *, char *, char *, integer *, 
-	    complex *, integer *, complex *, integer *), xerbla_(char *, integer *);
+	    complex *, integer *, complex *, integer *);
+    void xerbla_(char *, integer *);
     logical nounit;
 
 
