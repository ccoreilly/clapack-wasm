--- ../../../CLAPACK-3.2.1/SRC/dlalsd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlalsd.c	2020-03-18 14:52:00.230152321 +0100
@@ -76,8 +76,8 @@
 	    doublereal *, integer *), dlacpy_(char *, integer *, 
 	    integer *, doublereal *, integer *, doublereal *, integer *), dlartg_(doublereal *, doublereal *, doublereal *, 
 	    doublereal *, doublereal *), dlaset_(char *, integer *, integer *, 
-	     doublereal *, doublereal *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	     doublereal *, doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     integer givcol;
     extern doublereal dlanst_(char *, integer *, doublereal *, doublereal *);
     extern /* Subroutine */ int dlasrt_(char *, integer *, doublereal *, 
