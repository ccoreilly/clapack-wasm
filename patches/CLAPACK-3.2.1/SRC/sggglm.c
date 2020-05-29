--- ../../../CLAPACK-3.2.1/SRC/sggglm.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sggglm.c	2020-03-18 14:52:00.250153164 +0100
@@ -30,8 +30,8 @@
     /* Local variables */
     integer i__, nb, np, nb1, nb2, nb3, nb4, lopt;
     extern /* Subroutine */ int sgemv_(char *, integer *, integer *, real *, 
-	    real *, integer *, real *, integer *, real *, real *, integer *), scopy_(integer *, real *, integer *, real *, integer *), 
-	    xerbla_(char *, integer *);
+	    real *, integer *, real *, integer *, real *, real *, integer *), scopy_(integer *, real *, integer *, real *, integer *);
+	void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int sggqrf_(integer *, integer *, integer *, real 
