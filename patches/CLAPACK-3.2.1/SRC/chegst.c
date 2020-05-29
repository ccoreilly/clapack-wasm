--- ../../../CLAPACK-3.2.1/SRC/chegst.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chegst.c	2020-03-18 14:52:00.194150804 +0100
@@ -43,7 +43,8 @@
     extern /* Subroutine */ int chegs2_(integer *, char *, integer *, complex 
 	    *, integer *, complex *, integer *, integer *), cher2k_(
 	    char *, char *, integer *, integer *, complex *, complex *, 
-	    integer *, complex *, integer *, real *, complex *, integer *), xerbla_(char *, integer *);
+	    integer *, complex *, integer *, real *, complex *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
