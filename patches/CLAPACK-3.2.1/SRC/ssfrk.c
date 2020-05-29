--- ../../../CLAPACK-3.2.1/SRC/ssfrk.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssfrk.c	2020-03-18 14:52:00.254153333 +0100
@@ -30,7 +30,8 @@
     integer nrowa;
     logical lower;
     extern /* Subroutine */ int ssyrk_(char *, char *, integer *, integer *, 
-	    real *, real *, integer *, real *, real *, integer *), xerbla_(char *, integer *);
+	    real *, real *, integer *, real *, real *, integer *);
+    void xerbla_(char *, integer *);
     logical nisodd, notrans;
 
 
