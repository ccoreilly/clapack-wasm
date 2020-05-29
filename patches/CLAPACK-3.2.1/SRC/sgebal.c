--- ../../../CLAPACK-3.2.1/SRC/sgebal.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgebal.c	2020-03-18 14:52:00.246152995 +0100
@@ -34,7 +34,7 @@
 	    sswap_(integer *, real *, integer *, real *, integer *);
     real sfmin1, sfmin2, sfmax1, sfmax2;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
     logical noconv;
 
