--- ../../../CLAPACK-3.2.1/SRC/ssbtrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssbtrd.c	2020-03-18 14:52:00.254153333 +0100
@@ -39,7 +39,8 @@
     extern /* Subroutine */ int slar2v_(integer *, real *, real *, real *, 
 	    integer *, real *, real *, integer *);
     integer iqaend;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slaset_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slaset_(
 	    char *, integer *, integer *, real *, real *, real *, integer *), slartg_(real *, real *, real *, real *, real *), slargv_(
 	    integer *, real *, integer *, real *, integer *, real *, integer *
 ), slartv_(integer *, real *, integer *, real *, integer *, real *
