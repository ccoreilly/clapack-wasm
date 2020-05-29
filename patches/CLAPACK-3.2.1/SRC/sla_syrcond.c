--- ../../../CLAPACK-3.2.1/SRC/sla_syrcond.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sla_syrcond.c	2020-03-18 14:52:00.250153164 +0100
@@ -35,7 +35,7 @@
     extern /* Subroutine */ int slacn2_(integer *, real *, real *, integer *, 
 	    real *, integer *, integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real ainvnm;
     char normin[1];
     real smlnum;
