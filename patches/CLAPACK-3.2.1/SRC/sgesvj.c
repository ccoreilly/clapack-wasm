--- ../../../CLAPACK-3.2.1/SRC/sgesvj.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgesvj.c	2020-03-18 14:52:00.246152995 +0100
@@ -71,7 +71,7 @@
 , real *, integer *, real *, integer *, real *, real *, real *, 
 	    integer *, real *, integer *, integer *);
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer ijblsk, swband;
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
 	    real *, integer *, integer *, real *, integer *, integer *);
