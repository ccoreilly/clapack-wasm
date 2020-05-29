--- ../../../CLAPACK-3.2.1/SRC/slasd8.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slasd8.c	2020-03-18 14:52:00.254153333 +0100
@@ -43,7 +43,8 @@
 	    integer *);
     extern doublereal slamc3_(real *, real *);
     extern /* Subroutine */ int slasd4_(integer *, integer *, real *, real *, 
-	    real *, real *, real *, real *, integer *), xerbla_(char *, 
+	    real *, real *, real *, real *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     real dsigjp;
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
