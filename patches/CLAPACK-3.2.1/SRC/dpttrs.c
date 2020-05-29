--- ../../../CLAPACK-3.2.1/SRC/dpttrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpttrs.c	2020-03-18 14:52:00.238152659 +0100
@@ -27,7 +27,8 @@
     /* Local variables */
     integer j, jb, nb;
     extern /* Subroutine */ int dptts2_(integer *, integer *, doublereal *, 
-	    doublereal *, doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
