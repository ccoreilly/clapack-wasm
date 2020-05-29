--- ../../../CLAPACK-3.2.1/SRC/dtgsy2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtgsy2.c	2020-03-18 14:52:00.242152827 +0100
@@ -60,8 +60,8 @@
 	    *, doublereal *, doublereal *, integer *, integer *);
     doublereal scaloc;
     extern /* Subroutine */ int dlaset_(char *, integer *, integer *, 
-	    doublereal *, doublereal *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublereal *, doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     logical notran;
 
 
