--- ../../../CLAPACK-3.2.1/SRC/cungql.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cungql.c	2020-03-18 14:52:00.218151815 +0100
@@ -35,7 +35,8 @@
 	    complex *, integer *, complex *, integer *, complex *, integer *, 
 	    complex *, integer *), clarft_(
 	    char *, char *, integer *, integer *, complex *, integer *, 
-	    complex *, complex *, integer *), xerbla_(char *, 
+	    complex *, complex *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
