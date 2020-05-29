--- ../../../CLAPACK-3.2.1/SRC/stgsja.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stgsja.c	2020-03-18 14:52:00.258153501 +0100
@@ -46,7 +46,8 @@
 	    integer *), slags2_(logical *, real *, real *, real *, real *, 
 	    real *, real *, real *, real *, real *, real *, real *, real *);
     integer kcycle;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slapll_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slapll_(
 	    integer *, real *, integer *, real *, integer *, real *), slartg_(
 	    real *, real *, real *, real *, real *), slaset_(char *, integer *
 , integer *, real *, real *, real *, integer *);
