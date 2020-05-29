--- ../../../CLAPACK-3.2.1/SRC/slalsd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slalsd.c	2020-03-18 14:52:00.250153164 +0100
@@ -57,8 +57,9 @@
     extern /* Subroutine */ int slasda_(integer *, integer *, integer *, 
 	    integer *, real *, real *, real *, integer *, real *, integer *, 
 	    real *, real *, real *, real *, integer *, integer *, integer *, 
-	    integer *, real *, real *, real *, real *, integer *, integer *), 
-	    xerbla_(char *, integer *), slalsa_(integer *, integer *, 
+	    integer *, real *, real *, real *, real *, integer *, integer *);
+	void xerbla_(char *, integer *);
+    int slalsa_(integer *, integer *, 
 	    integer *, integer *, real *, integer *, real *, integer *, real *
 , integer *, real *, integer *, real *, real *, real *, real *, 
 	    integer *, integer *, integer *, integer *, real *, real *, real *
