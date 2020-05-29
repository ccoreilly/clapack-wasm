--- ../../../CLAPACK-3.2.1/SRC/zgeesx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zgeesx.c	2020-03-18 14:52:00.258153501 +0100
@@ -49,7 +49,8 @@
 	    integer *, integer *, doublereal *, integer *, doublecomplex *, 
 	    integer *, integer *), zgebal_(char *, integer *, 
 	    doublecomplex *, integer *, integer *, integer *, doublereal *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern doublereal zlange_(char *, integer *, integer *, doublecomplex *, 
