--- ../../../CLAPACK-3.2.1/SRC/sgetri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgetri.c	2020-03-18 14:52:00.250153164 +0100
@@ -36,7 +36,8 @@
 	    real *, integer *), sswap_(integer *, real *, integer *, 
 	    real *, integer *), strsm_(char *, char *, char *, char *, 
 	    integer *, integer *, real *, real *, integer *, real *, integer *
-), xerbla_(char *, integer *);
+);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwork, lwkopt;
