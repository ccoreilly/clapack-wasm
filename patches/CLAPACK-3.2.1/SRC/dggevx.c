--- ../../../CLAPACK-3.2.1/SRC/dggevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dggevx.c	2020-03-18 14:52:00.226152152 +0100
@@ -84,7 +84,8 @@
 	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *, doublereal *, integer *, doublereal *, doublereal *, 
 	    integer *, integer *, doublereal *, integer *, integer *, integer 
-	    *), xerbla_(char *, integer *);
+	    *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ijobvr;
