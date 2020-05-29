--- ../../../CLAPACK-3.2.1/SRC/dptcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dptcon.c	2020-03-18 14:52:00.238152659 +0100
@@ -27,7 +27,7 @@
     /* Local variables */
     integer i__, ix;
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal ainvnm;
 
 
