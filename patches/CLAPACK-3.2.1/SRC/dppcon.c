--- ../../../CLAPACK-3.2.1/SRC/dppcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dppcon.c	2020-03-18 14:52:00.238152659 +0100
@@ -39,7 +39,8 @@
     doublereal scalel;
     extern integer idamax_(integer *, doublereal *, integer *);
     doublereal scaleu;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dlatps_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dlatps_(
 	    char *, char *, char *, char *, integer *, doublereal *, 
 	    doublereal *, doublereal *, doublereal *, integer *);
     doublereal ainvnm;
