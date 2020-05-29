--- ../../../CLAPACK-3.2.1/SRC/dggev.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dggev.c	2020-03-18 14:52:00.226152152 +0100
@@ -74,7 +74,8 @@
 	    integer *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *, doublereal *, doublereal *, doublereal *, doublereal *, 
 	     integer *, doublereal *, integer *, doublereal *, integer *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ijobvl, iright, ijobvr;
