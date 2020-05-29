--- ../../../CLAPACK-3.2.1/SRC/dggqrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dggqrf.c	2020-03-18 14:52:00.226152152 +0100
@@ -30,7 +30,8 @@
     extern /* Subroutine */ int dgeqrf_(integer *, integer *, doublereal *, 
 	    integer *, doublereal *, doublereal *, integer *, integer *), 
 	    dgerqf_(integer *, integer *, doublereal *, integer *, doublereal 
-	    *, doublereal *, integer *, integer *), xerbla_(char *, integer *);
+	    *, doublereal *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int dormqr_(char *, char *, integer *, integer *, 
