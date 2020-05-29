--- ../../../CLAPACK-3.2.1/SRC/zgeqlf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgeqlf.c	2020-03-18 14:52:00.262153670 +0100
@@ -30,7 +30,8 @@
     /* Local variables */
     integer i__, k, ib, nb, ki, kk, mu, nu, nx, iws, nbmin, iinfo;
     extern /* Subroutine */ int zgeql2_(integer *, integer *, doublecomplex *, 
-	     integer *, doublecomplex *, doublecomplex *, integer *), xerbla_(
+	     integer *, doublecomplex *, doublecomplex *, integer *);
+    void xerbla_(
 	    char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
