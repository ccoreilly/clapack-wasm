--- ../../../CLAPACK-3.2.1/SRC/ctrcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctrcon.c	2020-03-18 14:52:00.218151815 +0100
@@ -40,7 +40,7 @@
     real xnorm;
     extern integer icamax_(integer *, complex *, integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal clantr_(char *, char *, char *, integer *, integer *, 
 	    complex *, integer *, real *);
     real ainvnm;
