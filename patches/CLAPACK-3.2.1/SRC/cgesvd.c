--- ../../../CLAPACK-3.2.1/SRC/cgesvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgesvd.c	2020-03-18 14:52:00.190150635 +0100
@@ -35,7 +35,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
     double sqrt(doublereal);
 
     /* Local variables */
@@ -68,8 +68,10 @@
 	    *, integer *, complex *, integer *), claset_(char *, 
 	    integer *, integer *, complex *, complex *, complex *, integer *), cbdsqr_(char *, integer *, integer *, integer *, integer 
 	    *, real *, real *, complex *, integer *, complex *, integer *, 
-	    complex *, integer *, real *, integer *), xerbla_(char *, 
-	    integer *), cungbr_(char *, integer *, integer *, integer 
+	    complex *, integer *, real *, integer *);
+    void xerbla_(char *, 
+	    integer *);
+    int cungbr_(char *, integer *, integer *, integer 
 	    *, complex *, integer *, complex *, complex *, integer *, integer 
 	    *);
     real bignum;
