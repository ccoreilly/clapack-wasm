--- ../../../CLAPACK-3.2.1/SRC/dgttrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgttrs.c	2020-03-18 14:52:00.226152152 +0100
@@ -29,7 +29,8 @@
     integer j, jb, nb;
     extern /* Subroutine */ int dgtts2_(integer *, integer *, integer *, 
 	    doublereal *, doublereal *, doublereal *, doublereal *, integer *, 
-	     doublereal *, integer *), xerbla_(char *, integer *);
+	     doublereal *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer itrans;
