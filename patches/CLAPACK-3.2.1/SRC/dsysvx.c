--- ../../../CLAPACK-3.2.1/SRC/dsysvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsysvx.c	2020-03-18 14:52:00.242152827 +0100
@@ -35,8 +35,8 @@
     extern doublereal dlamch_(char *);
     logical nofact;
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern doublereal dlansy_(char *, char *, integer *, doublereal *, 
