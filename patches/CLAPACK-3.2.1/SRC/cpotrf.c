--- ../../../CLAPACK-3.2.1/SRC/cpotrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpotrf.c	2020-03-18 14:52:00.214151646 +0100
@@ -41,7 +41,8 @@
 	    integer *);
     logical upper;
     extern /* Subroutine */ int cpotf2_(char *, integer *, complex *, integer 
-	    *, integer *), xerbla_(char *, integer *);
+	    *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
