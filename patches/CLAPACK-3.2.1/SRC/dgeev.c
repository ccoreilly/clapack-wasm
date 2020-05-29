--- ../../../CLAPACK-3.2.1/SRC/dgeev.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgeev.c	2020-03-18 14:52:00.222151984 +0100
@@ -70,7 +70,8 @@
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *), 
 	    dlartg_(doublereal *, doublereal *, doublereal *, doublereal *, 
-	    doublereal *), xerbla_(char *, integer *);
+	    doublereal *);
+    void xerbla_(char *, integer *);
     logical select[1];
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
