--- ../../../CLAPACK-3.2.1/SRC/sppcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sppcon.c	2020-03-18 14:52:00.254153333 +0100
@@ -36,7 +36,7 @@
     real scalel;
     extern doublereal slamch_(char *);
     real scaleu;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
     real ainvnm;
     char normin[1];
