--- ../../../CLAPACK-3.2.1/SRC/shsein.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/shsein.c	2020-03-18 14:52:00.250153164 +0100
@@ -42,7 +42,8 @@
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int slaein_(logical *, logical *, integer *, real 
 	    *, integer *, real *, real *, real *, real *, real *, integer *, 
-	    real *, real *, real *, real *, integer *), xerbla_(char *, 
+	    real *, real *, real *, real *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     real bignum;
     extern doublereal slanhs_(char *, integer *, real *, integer *, real *);
