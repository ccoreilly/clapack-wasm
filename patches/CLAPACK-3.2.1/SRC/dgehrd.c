--- ../../../CLAPACK-3.2.1/SRC/dgehrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgehrd.c	2020-03-18 14:52:00.222151984 +0100
@@ -50,7 +50,8 @@
 	    doublereal *, doublereal *, integer *, doublereal *, integer *), 
 	    dlarfb_(char *, char *, char *, char *, integer *, integer *, 
 	    integer *, doublereal *, integer *, doublereal *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwork, lwkopt;
