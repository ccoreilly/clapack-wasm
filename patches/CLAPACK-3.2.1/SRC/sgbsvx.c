--- ../../../CLAPACK-3.2.1/SRC/sgbsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgbsvx.c	2020-03-18 14:52:00.246152995 +0100
@@ -46,7 +46,8 @@
     logical nofact;
     extern /* Subroutine */ int sgbcon_(char *, integer *, integer *, integer 
 	    *, real *, integer *, integer *, real *, real *, real *, integer *
-, integer *), xerbla_(char *, integer *);
+, integer *);
+    void xerbla_(char *, integer *);
     real bignum;
     extern doublereal slantb_(char *, char *, char *, integer *, integer *, 
 	    real *, integer *, real *);
