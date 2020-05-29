--- ../../../CLAPACK-3.2.1/SRC/cgetri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgetri.c	2020-03-18 14:52:00.190150635 +0100
@@ -41,7 +41,7 @@
 	    integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer ldwork;
     extern /* Subroutine */ int ctrtri_(char *, char *, integer *, complex *, 
 	    integer *, integer *);
