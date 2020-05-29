--- ../../../CLAPACK-3.2.1/SRC/sggev.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sggev.c	2020-03-18 14:52:00.250153164 +0100
@@ -53,7 +53,8 @@
     logical ilascl, ilbscl;
     extern doublereal slamch_(char *), slange_(char *, integer *, 
 	    integer *, real *, integer *, real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), sgghrd_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  sgghrd_(
 	    char *, char *, integer *, integer *, integer *, real *, integer *
 , real *, integer *, real *, integer *, real *, integer *, 
 	    integer *);
