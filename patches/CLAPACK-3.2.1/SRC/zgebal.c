--- ../../../CLAPACK-3.2.1/SRC/zgebal.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgebal.c	2020-03-18 14:52:00.258153501 +0100
@@ -37,7 +37,8 @@
 	    doublecomplex *, integer *);
     doublereal sfmin1, sfmin2, sfmax1, sfmax2;
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), zdscal_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zdscal_(
 	    integer *, doublereal *, doublecomplex *, integer *);
     extern integer izamax_(integer *, doublecomplex *, integer *);
     logical noconv;
