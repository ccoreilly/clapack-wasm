--- ../../../CLAPACK-3.2.1/SRC/dsytrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsytrf.c	2020-03-18 14:52:00.242152827 +0100
@@ -31,7 +31,8 @@
     integer nbmin, iinfo;
     logical upper;
     extern /* Subroutine */ int dsytf2_(char *, integer *, doublereal *, 
-	    integer *, integer *, integer *), xerbla_(char *, integer 
+	    integer *, integer *, integer *);
+    void xerbla_(char *, integer 
 	    *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
