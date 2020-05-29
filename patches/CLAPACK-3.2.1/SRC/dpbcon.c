--- ../../../CLAPACK-3.2.1/SRC/dpbcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpbcon.c	2020-03-18 14:52:00.238152659 +0100
@@ -42,7 +42,7 @@
 	    integer *, integer *, doublereal *, integer *, doublereal *, 
 	    doublereal *, doublereal *, integer *);
     doublereal scaleu;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal ainvnm;
     char normin[1];
     doublereal smlnum;
