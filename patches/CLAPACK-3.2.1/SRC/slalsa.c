--- ../../../CLAPACK-3.2.1/SRC/slalsa.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slalsa.c	2020-03-18 14:52:00.250153164 +0100
@@ -47,8 +47,9 @@
 	    integer *), slals0_(integer *, integer *, integer *, integer *, 
 	    integer *, real *, integer *, real *, integer *, integer *, 
 	    integer *, integer *, integer *, real *, integer *, real *, real *
-, real *, real *, integer *, real *, real *, real *, integer *), 
-	    xerbla_(char *, integer *), slasdt_(integer *, integer *, 
+, real *, real *, integer *, real *, real *, real *, integer *);
+	void xerbla_(char *, integer *);
+    int slasdt_(integer *, integer *, 
 	    integer *, integer *, integer *, integer *, integer *);
 
 
