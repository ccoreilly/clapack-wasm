--- ../../../CLAPACK-3.2.1/SRC/dpbtrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dpbtrf.c	2020-03-18 14:52:00.238152659 +0100
@@ -41,7 +41,8 @@
 	    integer *, doublereal *, doublereal *, integer *),
 	     dpbtf2_(char *, integer *, integer *, doublereal *, integer *, 
 	    integer *), dpotf2_(char *, integer *, doublereal *, 
-	    integer *, integer *), xerbla_(char *, integer *);
+	    integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
