--- ../../../CLAPACK-3.2.1/SRC/cgees.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgees.c	2020-03-18 14:52:00.186150466 +0100
@@ -54,8 +54,8 @@
 	    integer *, complex *, integer *, integer *);
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
-	    *, integer *, complex *, integer *), xerbla_(char *, 
-	    integer *);
+	    *, integer *, complex *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     real bignum;
