--- ../../../CLAPACK-3.2.1/SRC/sspgst.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sspgst.c	2020-03-18 14:52:00.258153501 +0100
@@ -43,7 +43,8 @@
 	    real *, integer *), sspmv_(char *, integer *, real *, real *, 
 	    real *, integer *, real *, real *, integer *), stpmv_(
 	    char *, char *, char *, integer *, real *, real *, integer *), stpsv_(char *, char *, char *, integer *, 
-	     real *, real *, integer *), xerbla_(char 
+	     real *, real *, integer *);
+    void xerbla_(char 
 	    *, integer *);
 
 
