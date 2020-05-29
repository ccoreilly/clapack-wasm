--- ../../../CLAPACK-3.2.1/SRC/chpgvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chpgvd.c	2020-03-18 14:52:00.198150972 +0100
@@ -39,8 +39,9 @@
     logical wantz;
     extern /* Subroutine */ int chpevd_(char *, char *, integer *, complex *, 
 	    real *, complex *, integer *, complex *, integer *, real *, 
-	    integer *, integer *, integer *, integer *), 
-	    xerbla_(char *, integer *), chpgst_(integer *, char *, 
+	    integer *, integer *, integer *, integer *);
+	void xerbla_(char *, integer *);
+    int chpgst_(integer *, char *, 
 	    integer *, complex *, complex *, integer *), cpptrf_(char 
 	    *, integer *, complex *, integer *);
     integer liwmin, lrwmin;
