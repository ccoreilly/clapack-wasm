--- ../../../CLAPACK-3.2.1/SRC/slasdq.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slasdq.c	2020-03-18 14:52:00.254153333 +0100
@@ -37,7 +37,9 @@
 	    integer *, real *, real *, real *, integer *);
     integer iuplo;
     extern /* Subroutine */ int sswap_(integer *, real *, integer *, real *, 
-	    integer *), xerbla_(char *, integer *), slartg_(real *, 
+	    integer *);
+    void xerbla_(char *, integer *);
+    int slartg_(real *, 
 	    real *, real *, real *, real *);
     logical rotate;
     extern /* Subroutine */ int sbdsqr_(char *, integer *, integer *, integer 
