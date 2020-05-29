--- ../../../CLAPACK-3.2.1/SRC/slasd1.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slasd1.c	2020-03-18 14:52:00.254153333 +0100
@@ -41,7 +41,8 @@
 , integer *, real *, integer *, integer *, integer *, real *, 
 	    integer *);
     integer isigma;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slascl_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slascl_(
 	    char *, integer *, integer *, real *, real *, integer *, integer *
 , real *, integer *, integer *), slamrg_(integer *, 
 	    integer *, real *, integer *, integer *, integer *);
