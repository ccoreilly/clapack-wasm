--- ../../../CLAPACK-3.2.1/SRC/clalsd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/clalsd.c	2020-03-18 14:52:00.202151141 +0100
@@ -73,8 +73,10 @@
 	    integer *, real *, real *, real *, real *, integer *, integer *), 
 	    clacpy_(char *, integer *, integer *, complex *, integer *, 
 	    complex *, integer *), claset_(char *, integer *, integer 
-	    *, complex *, complex *, complex *, integer *), xerbla_(
-	    char *, integer *), slascl_(char *, integer *, integer *, 
+	    *, complex *, complex *, complex *, integer *);
+    void xerbla_(
+	    char *, integer *);
+    int slascl_(char *, integer *, integer *, 
 	    real *, real *, integer *, integer *, real *, integer *, integer *
 );
     extern integer isamax_(integer *, real *, integer *);
