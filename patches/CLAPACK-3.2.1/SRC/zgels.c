--- ../../../CLAPACK-3.2.1/SRC/zgels.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgels.c	2020-03-18 14:52:00.258153501 +0100
@@ -39,7 +39,7 @@
     doublereal rwork[1];
     extern /* Subroutine */ int dlabad_(doublereal *, doublereal *);
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer scllen;
