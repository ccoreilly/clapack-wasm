--- ../../../CLAPACK-3.2.1/SRC/dla_porcond.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dla_porcond.c	2020-03-18 14:52:00.226152152 +0100
@@ -33,7 +33,8 @@
     extern logical lsame_(char *, char *);
     integer isave[3];
     extern /* Subroutine */ int dlacn2_(integer *, doublereal *, doublereal *, 
-	     integer *, doublereal *, integer *, integer *), xerbla_(char *, 
+	     integer *, doublereal *, integer *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     doublereal ainvnm;
     extern /* Subroutine */ int dpotrs_(char *, integer *, integer *, 
