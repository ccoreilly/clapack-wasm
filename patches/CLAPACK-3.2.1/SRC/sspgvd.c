--- ../../../CLAPACK-3.2.1/SRC/sspgvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sspgvd.c	2020-03-18 14:52:00.258153501 +0100
@@ -33,7 +33,8 @@
     logical upper, wantz;
     extern /* Subroutine */ int stpmv_(char *, char *, char *, integer *, 
 	    real *, real *, integer *), stpsv_(char *, 
-	     char *, char *, integer *, real *, real *, integer *), xerbla_(char *, integer *);
+	     char *, char *, integer *, real *, real *, integer *);
+    void xerbla_(char *, integer *);
     integer liwmin;
     extern /* Subroutine */ int sspevd_(char *, char *, integer *, real *, 
 	    real *, real *, integer *, real *, integer *, integer *, integer *
