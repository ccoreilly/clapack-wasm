--- ../../../CLAPACK-3.2.1/SRC/cgelsd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgelsd.c	2020-03-18 14:52:00.186150466 +0100
@@ -55,7 +55,8 @@
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
 	    *, integer *, complex *, integer *), claset_(char *, 
-	    integer *, integer *, complex *, complex *, complex *, integer *), xerbla_(char *, integer *);
+	    integer *, integer *, complex *, complex *, complex *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     real bignum;
