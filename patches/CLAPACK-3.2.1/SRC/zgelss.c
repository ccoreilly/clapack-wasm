--- ../../../CLAPACK-3.2.1/SRC/zgelss.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgelss.c	2020-03-18 14:52:00.258153501 +0100
@@ -55,8 +55,9 @@
     extern /* Subroutine */ int dlascl_(char *, integer *, integer *, 
 	    doublereal *, doublereal *, integer *, integer *, doublereal *, 
 	    integer *, integer *), dlaset_(char *, integer *, integer 
-	    *, doublereal *, doublereal *, doublereal *, integer *), 
-	    xerbla_(char *, integer *), zgebrd_(integer *, integer *, 
+	    *, doublereal *, doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
+    int zgebrd_(integer *, integer *, 
 	    doublecomplex *, integer *, doublereal *, doublereal *, 
 	    doublecomplex *, doublecomplex *, doublecomplex *, integer *, 
 	    integer *);
