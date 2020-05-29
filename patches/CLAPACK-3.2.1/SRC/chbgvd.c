--- ../../../CLAPACK-3.2.1/SRC/chbgvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chbgvd.c	2020-03-18 14:52:00.194150804 +0100
@@ -48,8 +48,9 @@
 	    chbgst_(char *, char *, integer *, integer *, integer *, complex *
 , integer *, complex *, integer *, complex *, integer *, complex *
 , real *, integer *), clacpy_(char *, integer *, 
-	    integer *, complex *, integer *, complex *, integer *), 
-	    xerbla_(char *, integer *), cpbstf_(char *, integer *, 
+	    integer *, complex *, integer *, complex *, integer *);
+	void xerbla_(char *, integer *);
+    void cpbstf_(char *, integer *,
 	    integer *, complex *, integer *, integer *);
     integer indwrk, liwmin;
     extern /* Subroutine */ int ssterf_(integer *, real *, real *, integer *);
