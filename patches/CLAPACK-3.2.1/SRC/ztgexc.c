--- ../../../CLAPACK-3.2.1/SRC/ztgexc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztgexc.c	2020-03-18 14:52:00.270154007 +0100
@@ -27,7 +27,8 @@
     extern /* Subroutine */ int ztgex2_(logical *, logical *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, integer *, integer *, 
-	     integer *), xerbla_(char *, integer *);
+	     integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
