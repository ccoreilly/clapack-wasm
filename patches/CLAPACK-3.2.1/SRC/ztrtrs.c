--- ../../../CLAPACK-3.2.1/SRC/ztrtrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztrtrs.c	2020-03-18 14:52:00.270154007 +0100
@@ -28,8 +28,8 @@
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int ztrsm_(char *, char *, char *, char *, 
 	    integer *, integer *, doublecomplex *, doublecomplex *, integer *, 
-	     doublecomplex *, integer *), 
-	    xerbla_(char *, integer *);
+	     doublecomplex *, integer *);
+	void xerbla_(char *, integer *);
     logical nounit;
 
 
