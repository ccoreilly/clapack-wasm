--- ../../../CLAPACK-3.2.1/SRC/cpstrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpstrf.c	2020-03-18 14:52:00.214151646 +0100
@@ -55,7 +55,8 @@
 	    clacgv_(integer *, complex *, integer *);
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
-	    *), xerbla_(char *, integer *);
+	    *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern logical sisnan_(real *);
