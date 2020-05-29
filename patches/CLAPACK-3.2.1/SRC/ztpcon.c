--- ../../../CLAPACK-3.2.1/SRC/ztpcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztpcon.c	2020-03-18 14:52:00.270154007 +0100
@@ -39,7 +39,7 @@
     extern /* Subroutine */ int zlacn2_(integer *, doublecomplex *, 
 	    doublecomplex *, doublereal *, integer *, integer *);
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal ainvnm;
     extern integer izamax_(integer *, doublecomplex *, integer *);
     logical onenrm;
