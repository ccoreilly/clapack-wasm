--- ../../../CLAPACK-3.2.1/SRC/dla_syrcond.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dla_syrcond.c	2020-03-18 14:52:00.226152152 +0100
@@ -36,7 +36,7 @@
     extern /* Subroutine */ int dlacn2_(integer *, doublereal *, doublereal *, 
 	     integer *, doublereal *, integer *, integer *);
     extern doublereal dlamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal ainvnm;
     char normin[1];
     doublereal smlnum;
