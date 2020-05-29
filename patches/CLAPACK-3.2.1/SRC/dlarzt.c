--- ../../../CLAPACK-3.2.1/SRC/dlarzt.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlarzt.c	2020-03-18 14:52:00.234152490 +0100
@@ -33,7 +33,8 @@
 	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
 	    doublereal *, doublereal *, integer *), dtrmv_(char *, 
 	    char *, char *, integer *, doublereal *, integer *, doublereal *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
