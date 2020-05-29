--- ../../../CLAPACK-3.2.1/SRC/dtrsyl.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtrsyl.c	2020-03-18 14:52:00.246152995 +0100
@@ -56,7 +56,7 @@
     extern doublereal dlamch_(char *), dlange_(char *, integer *, 
 	    integer *, doublereal *, integer *, doublereal *);
     doublereal scaloc;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal bignum;
     logical notrna, notrnb;
     doublereal smlnum;
