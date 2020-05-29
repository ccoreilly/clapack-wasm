--- ../../../CLAPACK-3.2.1/SRC/chptrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chptrf.c	2020-03-18 14:52:00.198150972 +0100
@@ -56,7 +56,8 @@
     real absakk;
     extern integer icamax_(integer *, complex *, integer *);
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
-	    *), xerbla_(char *, integer *);
+	    *);
+    void xerbla_(char *, integer *);
     real colmax, rowmax;
 
 
