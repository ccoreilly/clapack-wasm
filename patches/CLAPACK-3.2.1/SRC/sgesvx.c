--- ../../../CLAPACK-3.2.1/SRC/sgesvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgesvx.c	2020-03-18 14:52:00.246152995 +0100
@@ -36,8 +36,9 @@
 	    integer *, real *, integer *, real *);
     logical nofact;
     extern /* Subroutine */ int slaqge_(integer *, integer *, real *, integer 
-	    *, real *, real *, real *, real *, real *, char *), 
-	    xerbla_(char *, integer *), sgecon_(char *, integer *, 
+	    *, real *, real *, real *, real *, real *, char *);
+	void xerbla_(char *, integer *);
+    int sgecon_(char *, integer *, 
 	    real *, integer *, real *, real *, real *, integer *, integer *);
     real bignum;
     integer infequ;
