--- ../../../CLAPACK-3.2.1/SRC/dgesvj.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgesvj.c	2020-03-18 14:52:00.226152152 +0100
@@ -86,8 +86,8 @@
 	    integer *, integer *);
     extern integer idamax_(integer *, doublereal *, integer *);
     extern /* Subroutine */ int dlaset_(char *, integer *, integer *, 
-	    doublereal *, doublereal *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublereal *, doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     integer ijblsk, swband, blskip;
     doublereal mxaapq;
     extern /* Subroutine */ int dlassq_(integer *, doublereal *, integer *, 
