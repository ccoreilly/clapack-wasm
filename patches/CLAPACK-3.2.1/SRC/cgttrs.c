--- ../../../CLAPACK-3.2.1/SRC/cgttrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgttrs.c	2020-03-18 14:52:00.194150804 +0100
@@ -29,7 +29,8 @@
     integer j, jb, nb;
     extern /* Subroutine */ int cgtts2_(integer *, integer *, integer *, 
 	    complex *, complex *, complex *, complex *, integer *, complex *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer itrans;
