--- ../../../CLAPACK-3.2.1/SRC/cgegs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgegs.c	2020-03-18 14:52:00.186150466 +0100
@@ -59,7 +59,7 @@
 	    *, integer *, complex *, integer *), claset_(char *, 
 	    integer *, integer *, complex *, complex *, complex *, integer *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     real bignum;
