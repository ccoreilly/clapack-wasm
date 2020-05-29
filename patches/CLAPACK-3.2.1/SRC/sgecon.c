--- ../../../CLAPACK-3.2.1/SRC/sgecon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgecon.c	2020-03-18 14:52:00.246152995 +0100
@@ -36,7 +36,7 @@
 	    slacn2_(integer *, real *, real *, integer *, real *, integer *, 
 	    integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
     real ainvnm;
     logical onenrm;
