--- ../../../CLAPACK-3.2.1/SRC/zgesvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgesvd.c	2020-03-18 14:52:00.262153670 +0100
@@ -35,7 +35,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
     double sqrt(doublereal);
 
     /* Local variables */
@@ -57,8 +57,9 @@
     extern doublereal dlamch_(char *);
     extern /* Subroutine */ int dlascl_(char *, integer *, integer *, 
 	    doublereal *, doublereal *, integer *, integer *, doublereal *, 
-	    integer *, integer *), xerbla_(char *, integer *),
-	     zgebrd_(integer *, integer *, doublecomplex *, integer *, 
+	    integer *, integer *);
+    void xerbla_(char *, integer *);
+    int zgebrd_(integer *, integer *, doublecomplex *, integer *, 
 	    doublereal *, doublereal *, doublecomplex *, doublecomplex *, 
 	    doublecomplex *, integer *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
