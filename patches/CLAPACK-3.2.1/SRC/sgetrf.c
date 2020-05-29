--- ../../../CLAPACK-3.2.1/SRC/sgetrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgetrf.c	2020-03-18 14:52:00.250153164 +0100
@@ -33,7 +33,8 @@
 	    real *, integer *), strsm_(char *, char *, char *, 
 	     char *, integer *, integer *, real *, real *, integer *, real *, 
 	    integer *), sgetf2_(integer *, 
-	    integer *, real *, integer *, integer *, integer *), xerbla_(char 
+	    integer *, real *, integer *, integer *, integer *);
+    void xerbla_(char 
 	    *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
