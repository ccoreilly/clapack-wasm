--- ../../../CLAPACK-3.2.1/SRC/chprfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chprfs.c	2020-03-18 14:52:00.198150972 +0100
@@ -52,7 +52,8 @@
 	    *, integer *, integer *);
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), chptrs_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  chptrs_(
 	    char *, integer *, integer *, complex *, integer *, complex *, 
 	    integer *, integer *);
     real lstres;
