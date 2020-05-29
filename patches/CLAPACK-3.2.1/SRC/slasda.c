--- ../../../CLAPACK-3.2.1/SRC/slasda.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slasda.c	2020-03-18 14:52:00.254153333 +0100
@@ -50,7 +50,8 @@
 , real *, real *, integer *, real *, real *, real *, integer *, 
 	    integer *);
     integer nwork1, nwork2;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slasdq_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slasdq_(
 	    char *, integer *, integer *, integer *, integer *, integer *, 
 	    real *, real *, real *, integer *, real *, integer *, real *, 
 	    integer *, real *, integer *), slasdt_(integer *, integer 
