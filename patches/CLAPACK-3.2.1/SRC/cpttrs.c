--- ../../../CLAPACK-3.2.1/SRC/cpttrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpttrs.c	2020-03-18 14:52:00.214151646 +0100
@@ -28,7 +28,8 @@
     integer j, jb, nb, iuplo;
     logical upper;
     extern /* Subroutine */ int cptts2_(integer *, integer *, integer *, real 
-	    *, complex *, complex *, integer *), xerbla_(char *, integer *);
+	    *, complex *, complex *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
