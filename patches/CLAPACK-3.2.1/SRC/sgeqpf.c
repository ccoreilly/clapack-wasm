--- ../../../CLAPACK-3.2.1/SRC/sgeqpf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgeqpf.c	2020-03-18 14:52:00.246152995 +0100
@@ -43,7 +43,7 @@
 	    *, integer *, real *, integer *, real *, real *, integer *, real *
 , integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
     extern /* Subroutine */ int slarfp_(integer *, real *, real *, integer *, 
 	    real *);
