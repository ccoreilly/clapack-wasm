--- ../../../CLAPACK-3.2.1/SRC/sgeqp3.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgeqp3.c	2020-03-18 14:52:00.246152995 +0100
@@ -32,7 +32,8 @@
     integer nbmin, minmn, minws;
     extern /* Subroutine */ int sswap_(integer *, real *, integer *, real *, 
 	    integer *), slaqp2_(integer *, integer *, integer *, real *, 
-	    integer *, integer *, real *, real *, real *, real *), xerbla_(
+	    integer *, integer *, real *, real *, real *, real *);
+    void xerbla_(
 	    char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
