--- ../../../CLAPACK-3.2.1/SRC/ztrsen.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztrsen.c	2020-03-18 14:52:00.270154007 +0100
@@ -38,7 +38,8 @@
     logical wantq, wants;
     doublereal rnorm, rwork[1];
     extern /* Subroutine */ int zlacn2_(integer *, doublecomplex *, 
-	    doublecomplex *, doublereal *, integer *, integer *), xerbla_(
+	    doublecomplex *, doublereal *, integer *, integer *);
+    void xerbla_(
 	    char *, integer *);
     extern doublereal zlange_(char *, integer *, integer *, doublecomplex *, 
 	    integer *, doublereal *);
