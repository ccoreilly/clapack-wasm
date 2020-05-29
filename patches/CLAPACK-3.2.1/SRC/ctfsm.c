--- ../../../CLAPACK-3.2.1/SRC/ctfsm.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctfsm.c	2020-03-18 14:52:00.214151646 +0100
@@ -36,7 +36,8 @@
     logical lower;
     extern /* Subroutine */ int ctrsm_(char *, char *, char *, char *, 
 	    integer *, integer *, complex *, complex *, integer *, complex *, 
-	    integer *), xerbla_(char *, 
+	    integer *);
+    void xerbla_(char *, 
 	    integer *);
     logical misodd, nisodd, notrans;
 
