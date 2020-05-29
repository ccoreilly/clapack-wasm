--- ../../../CLAPACK-3.2.1/SRC/slarzt.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slarzt.c	2020-03-18 14:52:00.254153333 +0100
@@ -30,7 +30,8 @@
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int sgemv_(char *, integer *, integer *, real *, 
 	    real *, integer *, real *, integer *, real *, real *, integer *), strmv_(char *, char *, char *, integer *, real *, 
-	    integer *, real *, integer *), xerbla_(
+	    integer *, real *, integer *);
+    void xerbla_(
 	    char *, integer *);
 
 
