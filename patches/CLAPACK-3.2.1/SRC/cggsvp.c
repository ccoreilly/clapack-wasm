--- ../../../CLAPACK-3.2.1/SRC/cggsvp.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cggsvp.c	2020-03-18 14:52:00.190150635 +0100
@@ -49,8 +49,10 @@
 	    integer *, complex *, complex *, real *, integer *), clacpy_(char 
 	    *, integer *, integer *, complex *, integer *, complex *, integer 
 	    *), claset_(char *, integer *, integer *, complex *, 
-	    complex *, complex *, integer *), xerbla_(char *, integer 
-	    *), clapmt_(logical *, integer *, integer *, complex *, 
+	    complex *, complex *, integer *);
+    void xerbla_(char *, integer 
+	    *);
+    int clapmt_(logical *, integer *, integer *, complex *, 
 	    integer *, integer *);
     logical forwrd;
 
