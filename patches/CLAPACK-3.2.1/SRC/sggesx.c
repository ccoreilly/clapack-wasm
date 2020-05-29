--- ../../../CLAPACK-3.2.1/SRC/sggesx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sggesx.c	2020-03-18 14:52:00.250153164 +0100
@@ -62,7 +62,7 @@
 	    integer *, real *, integer *, real *, integer *, real *, integer *
 , real *, integer *, integer *);
     real safmax;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
 	    real *, integer *, integer *, real *, integer *, integer *);
