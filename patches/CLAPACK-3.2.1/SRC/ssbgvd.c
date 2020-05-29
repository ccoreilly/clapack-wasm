--- ../../../CLAPACK-3.2.1/SRC/ssbgvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssbgvd.c	2020-03-18 14:52:00.254153333 +0100
@@ -37,7 +37,8 @@
     integer lwmin;
     logical upper, wantz;
     integer indwk2, llwrk2;
-    extern /* Subroutine */ int xerbla_(char *, integer *), sstedc_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  sstedc_(
 	    char *, integer *, real *, real *, real *, integer *, real *, 
 	    integer *, integer *, integer *, integer *), slacpy_(char 
 	    *, integer *, integer *, real *, integer *, real *, integer *);
