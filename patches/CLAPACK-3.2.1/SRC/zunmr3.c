--- ../../../CLAPACK-3.2.1/SRC/zunmr3.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zunmr3.c	2020-03-18 14:52:00.270154007 +0100
@@ -32,7 +32,8 @@
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int zlarz_(char *, integer *, integer *, integer *
 , doublecomplex *, integer *, doublecomplex *, doublecomplex *, 
-	    integer *, doublecomplex *), xerbla_(char *, integer *);
+	    integer *, doublecomplex *);
+    void xerbla_(char *, integer *);
     logical notran;
 
 
