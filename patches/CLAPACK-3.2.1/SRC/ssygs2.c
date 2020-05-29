--- ../../../CLAPACK-3.2.1/SRC/ssygs2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssygs2.c	2020-03-18 14:52:00.258153501 +0100
@@ -38,7 +38,8 @@
 	    real *, integer *), strmv_(char *, char *, char *, integer *, 
 	    real *, integer *, real *, integer *), 
 	    strsv_(char *, char *, char *, integer *, real *, integer *, real 
-	    *, integer *), xerbla_(char *, integer *);
+	    *, integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
