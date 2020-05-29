--- ../../../CLAPACK-3.2.1/SRC/zunm2l.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zunm2l.c	2020-03-18 14:52:00.270154007 +0100
@@ -36,7 +36,8 @@
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int zlarf_(char *, integer *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, doublecomplex *, 
-	    integer *, doublecomplex *), xerbla_(char *, integer *);
+	    integer *, doublecomplex *);
+    void xerbla_(char *, integer *);
     logical notran;
 
 
