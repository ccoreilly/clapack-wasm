--- ../../../CLAPACK-3.2.1/SRC/cgeqp3.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgeqp3.c	2020-03-18 14:52:00.190150635 +0100
@@ -37,8 +37,8 @@
 	    complex *);
     extern doublereal scnrm2_(integer *, complex *, integer *);
     extern /* Subroutine */ int cgeqrf_(integer *, integer *, complex *, 
-	    integer *, complex *, complex *, integer *, integer *), xerbla_(
-	    char *, integer *);
+	    integer *, complex *, complex *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int claqps_(integer *, integer *, integer *, 
