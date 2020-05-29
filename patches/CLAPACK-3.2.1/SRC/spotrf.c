--- ../../../CLAPACK-3.2.1/SRC/spotrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spotrf.c	2020-03-18 14:52:00.254153333 +0100
@@ -38,7 +38,8 @@
 ), ssyrk_(char *, char *, integer 
 	    *, integer *, real *, real *, integer *, real *, real *, integer *
 ), spotf2_(char *, integer *, real *, integer *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
