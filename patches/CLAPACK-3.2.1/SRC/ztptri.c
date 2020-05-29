--- ../../../CLAPACK-3.2.1/SRC/ztptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztptri.c	2020-03-18 14:52:00.270154007 +0100
@@ -36,7 +36,8 @@
 	    doublecomplex *, integer *);
     logical upper;
     extern /* Subroutine */ int ztpmv_(char *, char *, char *, integer *, 
-	    doublecomplex *, doublecomplex *, integer *), xerbla_(char *, integer *);
+	    doublecomplex *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
     integer jclast;
     logical nounit;
 
