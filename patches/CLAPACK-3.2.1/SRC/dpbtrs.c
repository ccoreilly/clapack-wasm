--- ../../../CLAPACK-3.2.1/SRC/dpbtrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpbtrs.c	2020-03-18 14:52:00.238152659 +0100
@@ -30,7 +30,7 @@
     extern /* Subroutine */ int dtbsv_(char *, char *, char *, integer *, 
 	    integer *, doublereal *, integer *, doublereal *, integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
