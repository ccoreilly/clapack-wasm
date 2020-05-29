--- ../../../CLAPACK-3.2.1/SRC/slasq1.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slasq1.c	2020-03-18 14:52:00.254153333 +0100
@@ -41,7 +41,8 @@
 	    integer *), slasq2_(integer *, real *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slascl_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slascl_(
 	    char *, integer *, integer *, real *, real *, integer *, integer *
 , real *, integer *, integer *), slasrt_(char *, integer *
 , real *, integer *);
