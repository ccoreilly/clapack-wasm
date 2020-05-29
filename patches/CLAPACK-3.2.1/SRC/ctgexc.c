--- ../../../CLAPACK-3.2.1/SRC/ctgexc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctgexc.c	2020-03-18 14:52:00.218151815 +0100
@@ -26,7 +26,8 @@
     integer here;
     extern /* Subroutine */ int ctgex2_(logical *, logical *, integer *, 
 	    complex *, integer *, complex *, integer *, complex *, integer *, 
-	    complex *, integer *, integer *, integer *), xerbla_(char *, 
+	    complex *, integer *, integer *, integer *);
+    void xerbla_(char *, 
 	    integer *);
 
 
