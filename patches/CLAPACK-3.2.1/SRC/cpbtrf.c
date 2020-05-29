--- ../../../CLAPACK-3.2.1/SRC/cpbtrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpbtrf.c	2020-03-18 14:52:00.210151478 +0100
@@ -42,7 +42,8 @@
 	    integer *, integer *, complex *, complex *, integer *, complex *, 
 	    integer *), cpbtf2_(char *, 
 	    integer *, integer *, complex *, integer *, integer *), 
-	    cpotf2_(char *, integer *, complex *, integer *, integer *), xerbla_(char *, integer *);
+	    cpotf2_(char *, integer *, complex *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
