--- ../../../CLAPACK-3.2.1/SRC/sggrqf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sggrqf.c	2020-03-18 14:52:00.250153164 +0100
@@ -27,7 +27,7 @@
 
     /* Local variables */
     integer nb, nb1, nb2, nb3, lopt;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int sgeqrf_(integer *, integer *, real *, integer 
