--- ../../../CLAPACK-3.2.1/SRC/sorml2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sorml2.c	2020-03-18 14:52:00.254153333 +0100
@@ -26,7 +26,8 @@
     logical left;
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int slarf_(char *, integer *, integer *, real *, 
-	    integer *, real *, real *, integer *, real *), xerbla_(
+	    integer *, real *, real *, integer *, real *);
+    void xerbla_(
 	    char *, integer *);
     logical notran;
 
