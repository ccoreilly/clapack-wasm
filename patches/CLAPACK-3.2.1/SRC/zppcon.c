--- ../../../CLAPACK-3.2.1/SRC/zppcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zppcon.c	2020-03-18 14:52:00.266153839 +0100
@@ -38,7 +38,7 @@
 	    doublecomplex *, doublereal *, integer *, integer *);
     extern doublereal dlamch_(char *);
     doublereal scalel, scaleu;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal ainvnm;
     extern integer izamax_(integer *, doublecomplex *, integer *);
     extern /* Subroutine */ int zdrscl_(integer *, doublereal *, 
