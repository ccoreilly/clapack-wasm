--- ../../../CLAPACK-3.2.1/SRC/spprfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spprfs.c	2020-03-18 14:52:00.254153333 +0100
@@ -46,7 +46,7 @@
 	    real *, real *, integer *, real *, integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real lstres;
     extern /* Subroutine */ int spptrs_(char *, integer *, integer *, real *, 
 	    real *, integer *, integer *);
