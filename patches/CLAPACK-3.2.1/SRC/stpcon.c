--- ../../../CLAPACK-3.2.1/SRC/stpcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stpcon.c	2020-03-18 14:52:00.258153501 +0100
@@ -36,7 +36,7 @@
     extern /* Subroutine */ int slacn2_(integer *, real *, real *, integer *, 
 	    real *, integer *, integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
     real ainvnm;
     logical onenrm;
