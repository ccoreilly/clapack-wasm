--- ../../../CLAPACK-3.2.1/SRC/ssygvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssygvd.c	2020-03-18 14:52:00.258153501 +0100
@@ -38,7 +38,8 @@
     logical wantz;
     extern /* Subroutine */ int strsm_(char *, char *, char *, char *, 
 	    integer *, integer *, real *, real *, integer *, real *, integer *
-), xerbla_(char *, integer *);
+);
+    void xerbla_(char *, integer *);
     integer liwmin;
     extern /* Subroutine */ int spotrf_(char *, integer *, real *, integer *, 
 	    integer *), ssyevd_(char *, char *, integer *, real *, 
