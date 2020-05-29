--- ../../../CLAPACK-3.2.1/SRC/zpttrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zpttrs.c	2020-03-18 14:52:00.266153839 +0100
@@ -29,8 +29,8 @@
     integer j, jb, nb, iuplo;
     logical upper;
     extern /* Subroutine */ int zptts2_(integer *, integer *, integer *, 
-	    doublereal *, doublecomplex *, doublecomplex *, integer *), 
-	    xerbla_(char *, integer *);
+	    doublereal *, doublecomplex *, doublecomplex *, integer *);
+	void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
