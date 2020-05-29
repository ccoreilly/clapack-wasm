--- ../../../CLAPACK-3.2.1/SRC/cgeqpf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgeqpf.c	2020-03-18 14:52:00.190150635 +0100
@@ -48,7 +48,7 @@
 	    complex *, integer *), clarfp_(integer *, complex 
 	    *, complex *, integer *, complex *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
 
 
