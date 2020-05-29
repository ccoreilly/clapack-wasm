--- ../../../CLAPACK-3.2.1/SRC/dpotrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpotrf.c	2020-03-18 14:52:00.238152659 +0100
@@ -39,7 +39,8 @@
     extern /* Subroutine */ int dsyrk_(char *, char *, integer *, integer *, 
 	    doublereal *, doublereal *, integer *, doublereal *, doublereal *, 
 	     integer *), dpotf2_(char *, integer *, 
-	    doublereal *, integer *, integer *), xerbla_(char *, 
+	    doublereal *, integer *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
