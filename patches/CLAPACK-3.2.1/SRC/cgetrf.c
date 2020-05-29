--- ../../../CLAPACK-3.2.1/SRC/cgetrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgetrf.c	2020-03-18 14:52:00.190150635 +0100
@@ -35,8 +35,8 @@
     extern /* Subroutine */ int ctrsm_(char *, char *, char *, char *, 
 	    integer *, integer *, complex *, complex *, integer *, complex *, 
 	    integer *), cgetf2_(integer *, 
-	    integer *, complex *, integer *, integer *, integer *), xerbla_(
-	    char *, integer *);
+	    integer *, complex *, integer *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int claswp_(integer *, complex *, integer *, 
