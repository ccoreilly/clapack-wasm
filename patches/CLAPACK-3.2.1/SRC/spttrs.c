--- ../../../CLAPACK-3.2.1/SRC/spttrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spttrs.c	2020-03-18 14:52:00.254153333 +0100
@@ -27,7 +27,8 @@
     /* Local variables */
     integer j, jb, nb;
     extern /* Subroutine */ int sptts2_(integer *, integer *, real *, real *, 
-	    real *, integer *), xerbla_(char *, integer *);
+	    real *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
