--- ../../../CLAPACK-3.2.1/SRC/sspgv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sspgv.c	2020-03-18 14:52:00.258153501 +0100
@@ -34,7 +34,9 @@
     logical wantz;
     extern /* Subroutine */ int stpmv_(char *, char *, char *, integer *, 
 	    real *, real *, integer *), stpsv_(char *, 
-	     char *, char *, integer *, real *, real *, integer *), xerbla_(char *, integer *), spptrf_(char 
+	     char *, char *, integer *, real *, real *, integer *);
+    void xerbla_(char *, integer *);
+    int spptrf_(char 
 	    *, integer *, real *, integer *), sspgst_(integer *, char 
 	    *, integer *, real *, real *, integer *);
 
