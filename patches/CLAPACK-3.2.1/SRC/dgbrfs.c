--- ../../../CLAPACK-3.2.1/SRC/dgbrfs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgbrfs.c	2020-03-18 14:52:00.222151984 +0100
@@ -52,7 +52,8 @@
 	     integer *, doublereal *, integer *, integer *);
     extern doublereal dlamch_(char *);
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), dgbtrs_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  dgbtrs_(
 	    char *, integer *, integer *, integer *, integer *, doublereal *, 
 	    integer *, integer *, doublereal *, integer *, integer *);
     logical notran;
