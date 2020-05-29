--- ../../../CLAPACK-3.2.1/SRC/sggsvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sggsvd.c	2020-03-18 14:52:00.250153164 +0100
@@ -43,7 +43,8 @@
     extern doublereal slamch_(char *), slange_(char *, integer *, 
 	    integer *, real *, integer *, real *);
     integer ncycle;
-    extern /* Subroutine */ int xerbla_(char *, integer *), stgsja_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  stgsja_(
 	    char *, char *, char *, integer *, integer *, integer *, integer *
 , integer *, real *, integer *, real *, integer *, real *, real *, 
 	     real *, real *, real *, integer *, real *, integer *, real *, 
