--- ../../../CLAPACK-3.2.1/SRC/sgerq2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgerq2.c	2020-03-18 14:52:00.246152995 +0100
@@ -23,8 +23,10 @@
     integer i__, k;
     real aii;
     extern /* Subroutine */ int slarf_(char *, integer *, integer *, real *, 
-	    integer *, real *, real *, integer *, real *), xerbla_(
-	    char *, integer *), slarfp_(integer *, real *, real *, 
+	    integer *, real *, real *, integer *, real *);
+    void xerbla_(
+	    char *, integer *);
+    int slarfp_(integer *, real *, real *, 
 	    integer *, real *);
 
 
