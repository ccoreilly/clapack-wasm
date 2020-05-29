--- ../../../CLAPACK-3.2.1/SRC/ssptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssptri.c	2020-03-18 14:52:00.258153501 +0100
@@ -40,7 +40,8 @@
     extern /* Subroutine */ int scopy_(integer *, real *, integer *, real *, 
 	    integer *), sswap_(integer *, real *, integer *, real *, integer *
 ), sspmv_(char *, integer *, real *, real *, real *, integer *, 
-	    real *, real *, integer *), xerbla_(char *, integer *);
+	    real *, real *, integer *);
+    void xerbla_(char *, integer *);
     integer kcnext;
 
 
