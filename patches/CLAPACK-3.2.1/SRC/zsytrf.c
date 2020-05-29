--- ../../../CLAPACK-3.2.1/SRC/zsytrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zsytrf.c	2020-03-18 14:52:00.266153839 +0100
@@ -32,7 +32,8 @@
     integer nbmin, iinfo;
     logical upper;
     extern /* Subroutine */ int zsytf2_(char *, integer *, doublecomplex *, 
-	    integer *, integer *, integer *), xerbla_(char *, integer 
+	    integer *, integer *, integer *);
+    void xerbla_(char *, integer 
 	    *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
