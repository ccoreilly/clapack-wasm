--- ../../../CLAPACK-3.2.1/SRC/chpev.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chpev.c	2020-03-18 14:52:00.198150972 +0100
@@ -43,7 +43,7 @@
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
 	    *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     integer indtau;
     extern /* Subroutine */ int chptrd_(char *, integer *, complex *, real *, 
