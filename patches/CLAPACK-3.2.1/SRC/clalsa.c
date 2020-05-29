--- ../../../CLAPACK-3.2.1/SRC/clalsa.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/clalsa.c	2020-03-18 14:52:00.202151141 +0100
@@ -51,7 +51,9 @@
 	    integer *, integer *, complex *, integer *, complex *, integer *, 
 	    integer *, integer *, integer *, integer *, real *, integer *, 
 	    real *, real *, real *, real *, integer *, real *, real *, real *, 
-	     integer *), xerbla_(char *, integer *), slasdt_(integer *
+	     integer *);
+    void xerbla_(char *, integer *);
+    int slasdt_(integer *
 , integer *, integer *, integer *, integer *, integer *, integer *
 );
 
