--- ../../../CLAPACK-3.2.1/SRC/cpbsvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpbsvx.c	2020-03-18 14:52:00.210151478 +0100
@@ -46,8 +46,10 @@
     extern doublereal slamch_(char *);
     logical nofact;
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
-	    *, integer *, complex *, integer *), xerbla_(char *, 
-	    integer *), cpbequ_(char *, integer *, integer *, complex 
+	    *, integer *, complex *, integer *);
+    void xerbla_(char *, 
+	    integer *);
+    int cpbequ_(char *, integer *, integer *, complex 
 	    *, integer *, real *, real *, real *, integer *), cpbrfs_(
 	    char *, integer *, integer *, integer *, complex *, integer *, 
 	    complex *, integer *, complex *, integer *, complex *, integer *, 
