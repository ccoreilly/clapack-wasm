--- ../../../CLAPACK-3.2.1/SRC/zgesdd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgesdd.c	2020-03-18 14:52:00.262153670 +0100
@@ -58,8 +58,9 @@
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
