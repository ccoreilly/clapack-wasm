--- ../../../CLAPACK-3.2.1/SRC/cstedc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cstedc.c	2020-03-18 14:52:00.214151646 +0100
@@ -53,7 +53,8 @@
 	    integer *, real *, integer *, complex *, integer *, real *);
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
-	    *, integer *, complex *, integer *), xerbla_(char *, 
+	    *, integer *, complex *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
