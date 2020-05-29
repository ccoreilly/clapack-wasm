--- ../../../CLAPACK-3.2.1/SRC/cggbak.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cggbak.c	2020-03-18 14:52:00.190150635 +0100
@@ -27,7 +27,8 @@
 	    complex *, integer *);
     logical leftv;
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
-	    *), xerbla_(char *, integer *);
+	    *);
+    void xerbla_(char *, integer *);
     logical rightv;
 
 
