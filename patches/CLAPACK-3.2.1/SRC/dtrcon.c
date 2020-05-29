--- ../../../CLAPACK-3.2.1/SRC/dtrcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtrcon.c	2020-03-18 14:52:00.246152995 +0100
@@ -39,7 +39,7 @@
 	     integer *, doublereal *, integer *, integer *);
     extern doublereal dlamch_(char *);
     extern integer idamax_(integer *, doublereal *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern doublereal dlantr_(char *, char *, char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *);
     doublereal ainvnm;
