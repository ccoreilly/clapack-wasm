--- ../../../CLAPACK-3.2.1/SRC/spptrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spptrf.c	2020-03-18 14:52:00.254153333 +0100
@@ -37,7 +37,8 @@
     extern /* Subroutine */ int sscal_(integer *, real *, real *, integer *);
     logical upper;
     extern /* Subroutine */ int stpsv_(char *, char *, char *, integer *, 
-	    real *, real *, integer *), xerbla_(char *
+	    real *, real *, integer *);
+    void xerbla_(char *
 , integer *);
 
 
