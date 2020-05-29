--- ../../../CLAPACK-3.2.1/SRC/dgerqf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgerqf.c	2020-03-18 14:52:00.222151984 +0100
@@ -33,7 +33,8 @@
 	     char *, char *, char *, integer *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *, doublereal *, integer *), dlarft_(char *, char *, integer *, integer *, doublereal 
-	    *, integer *, doublereal *, doublereal *, integer *), xerbla_(char *, integer *);
+	    *, integer *, doublereal *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwork, lwkopt;
