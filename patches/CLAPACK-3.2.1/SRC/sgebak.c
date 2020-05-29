--- ../../../CLAPACK-3.2.1/SRC/sgebak.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgebak.c	2020-03-18 14:52:00.246152995 +0100
@@ -28,7 +28,8 @@
     extern /* Subroutine */ int sscal_(integer *, real *, real *, integer *);
     logical leftv;
     extern /* Subroutine */ int sswap_(integer *, real *, integer *, real *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     logical rightv;
 
 
