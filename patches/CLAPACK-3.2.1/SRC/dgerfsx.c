--- ../../../CLAPACK-3.2.1/SRC/dgerfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgerfsx.c	2020-03-18 14:52:00.222151984 +0100
@@ -62,7 +62,8 @@
 	    integer *, doublereal *, integer *, doublereal *);
     extern /* Subroutine */ int dgecon_(char *, integer *, doublereal *, 
 	    integer *, doublereal *, doublereal *, doublereal *, integer *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     logical colequ, notran, rowequ;
     extern integer ilaprec_(char *);
     integer ithresh, n_norms__;
