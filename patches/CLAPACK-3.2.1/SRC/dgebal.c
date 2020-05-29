--- ../../../CLAPACK-3.2.1/SRC/dgebal.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgebal.c	2020-03-18 14:52:00.222151984 +0100
@@ -37,7 +37,7 @@
     doublereal sfmin1, sfmin2, sfmax1, sfmax2;
     extern doublereal dlamch_(char *);
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical noconv;
 
 
