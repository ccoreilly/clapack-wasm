--- ../../../CLAPACK-3.2.1/SRC/zptcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zptcon.c	2020-03-18 14:52:00.266153839 +0100
@@ -31,7 +31,7 @@
     /* Local variables */
     integer i__, ix;
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal ainvnm;
 
 
