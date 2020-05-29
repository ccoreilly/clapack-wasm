--- ../../../CLAPACK-3.2.1/SRC/ssyrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssyrfs.c	2020-03-18 14:52:00.258153501 +0100
@@ -47,7 +47,7 @@
 );
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real lstres;
     extern /* Subroutine */ int ssytrs_(char *, integer *, integer *, real *, 
 	    integer *, integer *, real *, integer *, integer *);
