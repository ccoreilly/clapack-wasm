--- ../../../CLAPACK-3.2.1/SRC/sgesdd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgesdd.c	2020-03-18 14:52:00.246152995 +0100
@@ -55,7 +55,7 @@
 	    real *, integer *, integer *);
     extern doublereal slamch_(char *), slange_(char *, integer *, 
 	    integer *, real *, integer *, real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     real bignum;
