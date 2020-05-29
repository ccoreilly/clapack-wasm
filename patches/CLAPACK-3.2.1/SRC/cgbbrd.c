--- ../../../CLAPACK-3.2.1/SRC/cgbbrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgbbrd.c	2020-03-18 14:52:00.182150297 +0100
@@ -52,8 +52,9 @@
     logical wantq;
     extern /* Subroutine */ int claset_(char *, integer *, integer *, complex 
 	    *, complex *, complex *, integer *), clartg_(complex *, 
-	    complex *, real *, complex *, complex *), xerbla_(char *, integer 
-	    *), clargv_(integer *, complex *, integer *, complex *, 
+	    complex *, real *, complex *, complex *);
+    void xerbla_(char *, integer *);
+    int clargv_(integer *, complex *, integer *, complex *, 
 	    integer *, real *, integer *), clartv_(integer *, complex *, 
 	    integer *, complex *, integer *, real *, complex *, integer *);
     logical wantpt;
