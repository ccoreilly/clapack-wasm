--- ../../../CLAPACK-3.2.1/SRC/dgebd2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgebd2.c	2020-03-18 14:52:00.222151984 +0100
@@ -29,7 +29,8 @@
     extern /* Subroutine */ int dlarf_(char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, doublereal *, integer *, 
 	    doublereal *), dlarfg_(integer *, doublereal *, 
-	    doublereal *, integer *, doublereal *), xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
