--- ../../../CLAPACK-3.2.1/SRC/cgehrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgehrd.c	2020-03-18 14:52:00.186150466 +0100
@@ -49,7 +49,8 @@
 	    complex *, integer *, complex *, complex *, integer *, complex *, 
 	    integer *), clarfb_(char *, char *, char *, char *, integer *, 
 	    integer *, integer *, complex *, integer *, complex *, integer *, 
-	    complex *, integer *, complex *, integer *), xerbla_(char *, integer *);
+	    complex *, integer *, complex *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwork, lwkopt;
