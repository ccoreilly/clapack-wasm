--- ../../../CLAPACK-3.2.1/SRC/chbgvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chbgvx.c	2020-03-18 14:52:00.194150804 +0100
@@ -59,7 +59,9 @@
 	    integer *, complex *, integer *, complex *, integer *, complex *, 
 	    integer *, complex *, real *, integer *), clacpy_(
 	    char *, integer *, integer *, complex *, integer *, complex *, 
-	    integer *), xerbla_(char *, integer *), cpbstf_(
+	    integer *);
+    void xerbla_(char *, integer *);
+    int cpbstf_(
 	    char *, integer *, integer *, complex *, integer *, integer *);
     integer indiwk, indisp;
     extern /* Subroutine */ int cstein_(integer *, real *, real *, integer *, 
