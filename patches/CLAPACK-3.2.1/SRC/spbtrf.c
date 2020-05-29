--- ../../../CLAPACK-3.2.1/SRC/spbtrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spbtrf.c	2020-03-18 14:52:00.254153333 +0100
@@ -39,7 +39,8 @@
 	     integer *, integer *, real *, real *, integer *, real *, real *, 
 	    integer *), spbtf2_(char *, integer *, integer *, 
 	    real *, integer *, integer *), spotf2_(char *, integer *, 
-	    real *, integer *, integer *), xerbla_(char *, integer *);
+	    real *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
