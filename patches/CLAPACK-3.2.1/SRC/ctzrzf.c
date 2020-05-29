--- ../../../CLAPACK-3.2.1/SRC/ctzrzf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctzrzf.c	2020-03-18 14:52:00.218151815 +0100
@@ -30,7 +30,8 @@
     integer i__, m1, ib, nb, ki, kk, mu, nx, iws, nbmin;
     extern /* Subroutine */ int clarzb_(char *, char *, char *, char *, 
 	    integer *, integer *, integer *, integer *, complex *, integer *, 
-	    complex *, integer *, complex *, integer *, complex *, integer *), xerbla_(char *, integer *);
+	    complex *, integer *, complex *, integer *, complex *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int clarzt_(char *, char *, integer *, integer *, 
