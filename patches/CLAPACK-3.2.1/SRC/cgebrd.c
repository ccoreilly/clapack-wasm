--- ../../../CLAPACK-3.2.1/SRC/cgebrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgebrd.c	2020-03-18 14:52:00.186150466 +0100
@@ -41,7 +41,8 @@
 	    integer *, real *, real *, complex *, complex *, complex *, 
 	    integer *), clabrd_(integer *, integer *, integer *, complex *, 
 	    integer *, real *, real *, complex *, complex *, complex *, 
-	    integer *, complex *, integer *), xerbla_(char *, integer *);
+	    integer *, complex *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwrkx, ldwrky, lwkopt;
