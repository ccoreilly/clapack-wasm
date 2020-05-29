--- ../../../CLAPACK-3.2.1/SRC/sggevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sggevx.c	2020-03-18 14:52:00.250153164 +0100
@@ -55,7 +55,8 @@
 	    integer *, real *, real *, real *, integer *);
     logical ilascl, ilbscl;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), sgghrd_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  sgghrd_(
 	    char *, char *, integer *, integer *, integer *, real *, integer *
 , real *, integer *, real *, integer *, real *, integer *, 
 	    integer *);
