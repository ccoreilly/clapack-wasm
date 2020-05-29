--- ../../../CLAPACK-3.2.1/SRC/chegs2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chegs2.c	2020-03-18 14:52:00.194150804 +0100
@@ -40,7 +40,8 @@
 	    complex *, integer *, complex *, integer *), ctrsv_(char *, char *, char *, integer *, complex *, 
 	    integer *, complex *, integer *), clacgv_(
 	    integer *, complex *, integer *), csscal_(integer *, real *, 
-	    complex *, integer *), xerbla_(char *, integer *);
+	    complex *, integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
