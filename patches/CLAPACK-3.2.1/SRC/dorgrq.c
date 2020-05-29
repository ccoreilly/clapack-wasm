--- ../../../CLAPACK-3.2.1/SRC/dorgrq.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dorgrq.c	2020-03-18 14:52:00.238152659 +0100
@@ -34,7 +34,8 @@
 	    dlarfb_(char *, char *, char *, char *, integer *, integer *, 
 	    integer *, doublereal *, integer *, doublereal *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *), dlarft_(char *, char *, integer *, integer *, 
-	    doublereal *, integer *, doublereal *, doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwork, lwkopt;
