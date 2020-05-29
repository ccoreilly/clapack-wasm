--- ../../../CLAPACK-3.2.1/SRC/zgelqf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgelqf.c	2020-03-18 14:52:00.258153501 +0100
@@ -30,7 +30,8 @@
     /* Local variables */
     integer i__, k, ib, nb, nx, iws, nbmin, iinfo;
     extern /* Subroutine */ int zgelq2_(integer *, integer *, doublecomplex *, 
-	     integer *, doublecomplex *, doublecomplex *, integer *), xerbla_(
+	     integer *, doublecomplex *, doublecomplex *, integer *);
+    void xerbla_(
 	    char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
