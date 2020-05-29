--- ../../../CLAPACK-3.2.1/SRC/ztptrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztptrs.c	2020-03-18 14:52:00.270154007 +0100
@@ -29,7 +29,8 @@
     extern logical lsame_(char *, char *);
     logical upper;
     extern /* Subroutine */ int ztpsv_(char *, char *, char *, integer *, 
-	    doublecomplex *, doublecomplex *, integer *), xerbla_(char *, integer *);
+	    doublecomplex *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
     logical nounit;
 
 
