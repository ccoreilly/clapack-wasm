--- ../../../CLAPACK-3.2.1/SRC/clals0.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/clals0.c	2020-03-18 14:52:00.202151141 +0100
@@ -54,7 +54,8 @@
     extern /* Subroutine */ int clascl_(char *, integer *, integer *, real *, 
 	    real *, integer *, integer *, complex *, integer *, integer *), csscal_(integer *, real *, complex *, integer *), 
 	    clacpy_(char *, integer *, integer *, complex *, integer *, 
-	    complex *, integer *), xerbla_(char *, integer *);
+	    complex *, integer *);
+    void xerbla_(char *, integer *);
     real dsigjp;
 
 
