--- ../../../CLAPACK-3.2.1/SRC/zla_porcond_c.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zla_porcond_c.c	2020-03-18 14:52:00.262153670 +0100
@@ -39,7 +39,8 @@
     integer isave[3];
     doublereal anorm;
     extern /* Subroutine */ int zlacn2_(integer *, doublecomplex *, 
-	    doublecomplex *, doublereal *, integer *, integer *), xerbla_(
+	    doublecomplex *, doublereal *, integer *, integer *);
+    void xerbla_(
 	    char *, integer *);
     doublereal ainvnm;
     extern /* Subroutine */ int zpotrs_(char *, integer *, integer *, 
