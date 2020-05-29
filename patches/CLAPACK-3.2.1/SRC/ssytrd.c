--- ../../../CLAPACK-3.2.1/SRC/ssytrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssytrd.c	2020-03-18 14:52:00.258153501 +0100
@@ -37,7 +37,8 @@
     extern /* Subroutine */ int ssytd2_(char *, integer *, real *, integer *, 
 	    real *, real *, real *, integer *), ssyr2k_(char *, char *
 , integer *, integer *, real *, real *, integer *, real *, 
-	    integer *, real *, real *, integer *), xerbla_(
+	    integer *, real *, real *, integer *);
+    void xerbla_(
 	    char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
