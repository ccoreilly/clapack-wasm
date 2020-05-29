--- ../../../CLAPACK-3.2.1/SRC/slaeda.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slaeda.c	2020-03-18 14:52:00.250153164 +0100
@@ -38,8 +38,8 @@
 	    integer *, real *, real *);
     integer bsiz1, bsiz2, psiz1, psiz2, zptr1;
     extern /* Subroutine */ int sgemv_(char *, integer *, integer *, real *, 
-	    real *, integer *, real *, integer *, real *, real *, integer *), scopy_(integer *, real *, integer *, real *, integer *), 
-	    xerbla_(char *, integer *);
+	    real *, integer *, real *, integer *, real *, real *, integer *), scopy_(integer *, real *, integer *, real *, integer *);
+	void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
