--- ../../../CLAPACK-3.2.1/SRC/ctrevc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctrevc.c	2020-03-18 14:52:00.218151815 +0100
@@ -52,7 +52,9 @@
     extern integer icamax_(integer *, complex *, integer *);
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
-	    *), xerbla_(char *, integer *), clatrs_(char *, char *, 
+	    *);
+    void xerbla_(char *, integer *);
+    int clatrs_(char *, char *, 
 	    char *, char *, integer *, complex *, integer *, complex *, real *
 , real *, integer *);
     extern doublereal scasum_(integer *, complex *, integer *);
