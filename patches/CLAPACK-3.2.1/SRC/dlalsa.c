--- ../../../CLAPACK-3.2.1/SRC/dlalsa.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlalsa.c	2020-03-18 14:52:00.230152321 +0100
@@ -51,7 +51,8 @@
 	    *, integer *, doublereal *, doublereal *, doublereal *, 
 	    doublereal *, integer *, doublereal *, doublereal *, doublereal *, 
 	     integer *), dlasdt_(integer *, integer *, integer *, integer *, 
-	    integer *, integer *, integer *), xerbla_(char *, integer *);
+	    integer *, integer *, integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
