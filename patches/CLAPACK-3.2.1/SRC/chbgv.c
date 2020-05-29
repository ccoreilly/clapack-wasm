--- ../../../CLAPACK-3.2.1/SRC/chbgv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chbgv.c	2020-03-18 14:52:00.194150804 +0100
@@ -31,7 +31,9 @@
 	    complex *, integer *, real *, real *, complex *, integer *, 
 	    complex *, integer *), chbgst_(char *, char *, 
 	    integer *, integer *, integer *, complex *, integer *, complex *, 
-	    integer *, complex *, integer *, complex *, real *, integer *), xerbla_(char *, integer *), cpbstf_(char 
+	    integer *, complex *, integer *, complex *, real *, integer *);
+    void xerbla_(char *, integer *);
+    int cpbstf_(char 
 	    *, integer *, integer *, complex *, integer *, integer *);
     integer indwrk;
     extern /* Subroutine */ int csteqr_(char *, integer *, real *, real *, 
