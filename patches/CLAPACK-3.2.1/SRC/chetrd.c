--- ../../../CLAPACK-3.2.1/SRC/chetrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chetrd.c	2020-03-18 14:52:00.198150972 +0100
@@ -38,7 +38,8 @@
 	    *, real *, real *, complex *, integer *), cher2k_(char *, 
 	    char *, integer *, integer *, complex *, complex *, integer *, 
 	    complex *, integer *, real *, complex *, integer *), clatrd_(char *, integer *, integer *, complex *, integer 
-	    *, real *, complex *, complex *, integer *), xerbla_(char 
+	    *, real *, complex *, complex *, integer *);
+    void xerbla_(char 
 	    *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
