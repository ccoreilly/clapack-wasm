--- ../../../CLAPACK-3.2.1/SRC/stgsyl.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stgsyl.c	2020-03-18 14:52:00.258153501 +0100
@@ -55,7 +55,7 @@
 , integer *, real *, integer *, real *, integer *, real *, real *, 
 	     real *, integer *, integer *, integer *);
     real scaloc;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int slacpy_(char *, integer *, integer *, real *, 
