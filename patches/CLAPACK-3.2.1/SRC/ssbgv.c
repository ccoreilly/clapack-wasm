--- ../../../CLAPACK-3.2.1/SRC/ssbgv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssbgv.c	2020-03-18 14:52:00.254153333 +0100
@@ -26,7 +26,7 @@
     extern logical lsame_(char *, char *);
     integer iinfo;
     logical upper, wantz;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer indwrk;
     extern /* Subroutine */ int spbstf_(char *, integer *, integer *, real *, 
 	    integer *, integer *), ssbtrd_(char *, char *, integer *, 
