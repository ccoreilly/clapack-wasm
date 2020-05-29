--- ../../../CLAPACK-3.2.1/SRC/dlasd2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlasd2.c	2020-03-18 14:52:00.234152490 +0100
@@ -49,7 +49,8 @@
     extern /* Subroutine */ int dlamrg_(integer *, integer *, doublereal *, 
 	    integer *, integer *, integer *), dlacpy_(char *, integer *, 
 	    integer *, doublereal *, integer *, doublereal *, integer *), dlaset_(char *, integer *, integer *, doublereal *, 
-	    doublereal *, doublereal *, integer *), xerbla_(char *, 
+	    doublereal *, doublereal *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     doublereal hlftol;
 
