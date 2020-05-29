--- ../../../CLAPACK-3.2.1/SRC/dporfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dporfs.c	2020-03-18 14:52:00.238152659 +0100
@@ -50,7 +50,8 @@
 	     doublereal *, integer *, doublereal *, integer *, integer *);
     extern doublereal dlamch_(char *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dpotrs_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dpotrs_(
 	    char *, integer *, integer *, doublereal *, integer *, doublereal 
 	    *, integer *, integer *);
     doublereal lstres;
