--- ../../../CLAPACK-3.2.1/SRC/ssygst.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssygst.c	2020-03-18 14:52:00.258153501 +0100
@@ -41,7 +41,8 @@
 , integer *), ssygs2_(integer *, 
 	    char *, integer *, real *, integer *, real *, integer *, integer *
 ), ssyr2k_(char *, char *, integer *, integer *, real *, 
-	    real *, integer *, real *, integer *, real *, real *, integer *), xerbla_(char *, integer *);
+	    real *, integer *, real *, integer *, real *, real *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
