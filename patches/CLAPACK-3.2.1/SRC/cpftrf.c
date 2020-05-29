--- ../../../CLAPACK-3.2.1/SRC/cpftrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpftrf.c	2020-03-18 14:52:00.210151478 +0100
@@ -34,7 +34,8 @@
     logical lower;
     extern /* Subroutine */ int ctrsm_(char *, char *, char *, char *, 
 	    integer *, integer *, complex *, complex *, integer *, complex *, 
-	    integer *), xerbla_(char *, 
+	    integer *);
+    void xerbla_(char *, 
 	    integer *);
     logical nisodd;
     extern /* Subroutine */ int cpotrf_(char *, integer *, complex *, integer 
