--- ../../../CLAPACK-3.2.1/SRC/dtgsna.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtgsna.c	2020-03-18 14:52:00.242152827 +0100
@@ -68,8 +68,9 @@
     extern doublereal dlamch_(char *);
     doublereal alphai, alphar;
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *), dtgexc_(logical *, logical *, 
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
+    int dtgexc_(logical *, logical *, 
 	    integer *, doublereal *, integer *, doublereal *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *, integer *, 
 	    integer *, doublereal *, integer *, integer *);
