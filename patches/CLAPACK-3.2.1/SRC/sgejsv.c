--- ../../../CLAPACK-3.2.1/SRC/sgejsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgejsv.c	2020-03-18 14:52:00.246152995 +0100
@@ -68,7 +68,7 @@
     real aatmin;
     extern doublereal slamch_(char *);
     real aatmax;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical noscal;
     extern /* Subroutine */ int sgelqf_(integer *, integer *, real *, integer 
 	    *, real *, real *, integer *, integer *);
