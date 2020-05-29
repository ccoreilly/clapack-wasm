--- ../../../CLAPACK-3.2.1/SRC/dtrsen.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtrsen.c	2020-03-18 14:52:00.246152995 +0100
@@ -47,8 +47,8 @@
     extern doublereal dlange_(char *, integer *, integer *, doublereal *, 
 	    integer *, doublereal *);
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     logical wantbh;
     extern /* Subroutine */ int dtrexc_(char *, integer *, doublereal *, 
 	    integer *, doublereal *, integer *, integer *, integer *, 
