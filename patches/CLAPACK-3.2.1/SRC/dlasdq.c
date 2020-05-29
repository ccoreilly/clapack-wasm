--- ../../../CLAPACK-3.2.1/SRC/dlasdq.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlasdq.c	2020-03-18 14:52:00.234152490 +0100
@@ -38,8 +38,10 @@
 , doublereal *, integer *);
     integer iuplo;
     extern /* Subroutine */ int dlartg_(doublereal *, doublereal *, 
-	    doublereal *, doublereal *, doublereal *), xerbla_(char *, 
-	    integer *), dbdsqr_(char *, integer *, integer *, integer 
+	    doublereal *, doublereal *, doublereal *);
+    void xerbla_(char *, 
+	    integer *);
+    int dbdsqr_(char *, integer *, integer *, integer 
 	    *, integer *, doublereal *, doublereal *, doublereal *, integer *, 
 	     doublereal *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *);
