--- ../../../CLAPACK-3.2.1/SRC/slasq2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slasq2.c	2020-03-18 14:52:00.254153333 +0100
@@ -55,7 +55,8 @@
     extern doublereal slamch_(char *);
     integer iwhila, iwhilb;
     real oldemn, safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slasrt_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slasrt_(
 	    char *, integer *, real *, integer *);
 
 
