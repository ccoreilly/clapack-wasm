--- ../../../CLAPACK-3.2.1/SRC/zlaed7.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zlaed7.c	2020-03-18 14:52:00.262153670 +0100
@@ -47,7 +47,9 @@
 	     integer *);
     integer idlmda;
     extern /* Subroutine */ int dlamrg_(integer *, integer *, doublereal *, 
-	    integer *, integer *, integer *), xerbla_(char *, integer *), zlacrm_(integer *, integer *, doublecomplex *, integer *, 
+	    integer *, integer *, integer *);
+    void xerbla_(char *, integer *);
+    int zlacrm_(integer *, integer *, doublecomplex *, integer *, 
 	     doublereal *, integer *, doublecomplex *, integer *, doublereal *
 );
     integer coltyp;
