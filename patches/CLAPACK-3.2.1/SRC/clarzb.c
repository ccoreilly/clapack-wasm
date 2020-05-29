--- ../../../CLAPACK-3.2.1/SRC/clarzb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/clarzb.c	2020-03-18 14:52:00.210151478 +0100
@@ -38,7 +38,8 @@
 	    complex *, integer *), ctrmm_(char *, char *, char *, char *, 
 	    integer *, integer *, complex *, complex *, integer *, complex *, 
 	    integer *), clacgv_(integer *, 
-	    complex *, integer *), xerbla_(char *, integer *);
+	    complex *, integer *);
+    void xerbla_(char *, integer *);
     char transt[1];
 
 
