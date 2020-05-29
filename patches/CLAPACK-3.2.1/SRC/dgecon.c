--- ../../../CLAPACK-3.2.1/SRC/dgecon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgecon.c	2020-03-18 14:52:00.222151984 +0100
@@ -38,7 +38,7 @@
 	    integer *, doublereal *, integer *, integer *);
     extern doublereal dlamch_(char *);
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal ainvnm;
     extern /* Subroutine */ int dlatrs_(char *, char *, char *, char *, 
 	    integer *, doublereal *, integer *, doublereal *, doublereal *, 
