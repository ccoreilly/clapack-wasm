--- ../../../CLAPACK-3.2.1/SRC/sgelsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgelsx.c	2020-03-18 14:52:00.246152995 +0100
@@ -44,7 +44,7 @@
 	    slabad_(real *, real *);
     extern doublereal slamch_(char *), slange_(char *, integer *, 
 	    integer *, real *, integer *, real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
 	    real *, integer *, integer *, real *, integer *, integer *), sgeqpf_(integer *, integer *, real *, integer *, integer 
