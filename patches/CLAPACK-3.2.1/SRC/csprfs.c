--- ../../../CLAPACK-3.2.1/SRC/csprfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/csprfs.c	2020-03-18 14:52:00.214151646 +0100
@@ -53,7 +53,7 @@
 	    *, integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real lstres;
     extern /* Subroutine */ int csptrs_(char *, integer *, integer *, complex 
 	    *, integer *, complex *, integer *, integer *);
