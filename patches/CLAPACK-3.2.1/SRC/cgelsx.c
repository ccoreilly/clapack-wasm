--- ../../../CLAPACK-3.2.1/SRC/cgelsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgelsx.c	2020-03-18 14:52:00.186150466 +0100
@@ -53,8 +53,8 @@
 	    integer *, complex *, complex *, real *, integer *);
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int claset_(char *, integer *, integer *, complex 
-	    *, complex *, complex *, integer *), xerbla_(char *, 
-	    integer *);
+	    *, complex *, complex *, integer *);
+    void xerbla_(char *, integer *);
     real bignum;
     extern /* Subroutine */ int clatzm_(char *, integer *, integer *, complex 
 	    *, integer *, complex *, complex *, complex *, integer *, complex 
