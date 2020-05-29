--- ../../../CLAPACK-3.2.1/SRC/dpftrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpftrf.c	2020-03-18 14:52:00.238152659 +0100
@@ -33,8 +33,8 @@
 	    integer *, integer *, doublereal *, doublereal *, integer *, 
 	    doublereal *, integer *), dsyrk_(
 	    char *, char *, integer *, integer *, doublereal *, doublereal *, 
-	    integer *, doublereal *, doublereal *, integer *),
-	     xerbla_(char *, integer *);
+	    integer *, doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     logical nisodd;
     extern /* Subroutine */ int dpotrf_(char *, integer *, doublereal *, 
 	    integer *, integer *);
