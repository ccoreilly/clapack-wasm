--- ../../../CLAPACK-3.2.1/SRC/dpocon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpocon.c	2020-03-18 14:52:00.238152659 +0100
@@ -39,7 +39,7 @@
     doublereal scalel;
     extern integer idamax_(integer *, doublereal *, integer *);
     doublereal scaleu;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal ainvnm;
     extern /* Subroutine */ int dlatrs_(char *, char *, char *, char *, 
 	    integer *, doublereal *, integer *, doublereal *, doublereal *, 
