--- ../../../CLAPACK-3.2.1/SRC/cpocon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpocon.c	2020-03-18 14:52:00.210151478 +0100
@@ -39,7 +39,7 @@
     real scalel;
     extern doublereal slamch_(char *);
     real scaleu;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real ainvnm;
     extern /* Subroutine */ int clatrs_(char *, char *, char *, char *, 
 	    integer *, complex *, integer *, complex *, real *, real *, 
