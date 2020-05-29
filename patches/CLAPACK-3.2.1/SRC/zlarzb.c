--- ../../../CLAPACK-3.2.1/SRC/zlarzb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zlarzb.c	2020-03-18 14:52:00.266153839 +0100
@@ -37,8 +37,9 @@
 	    integer *), zcopy_(integer *, doublecomplex *, 
 	    integer *, doublecomplex *, integer *), ztrmm_(char *, char *, 
 	    char *, char *, integer *, integer *, doublecomplex *, 
-	    doublecomplex *, integer *, doublecomplex *, integer *), xerbla_(char *, integer *), 
-	    zlacgv_(integer *, doublecomplex *, integer *);
+	    doublecomplex *, integer *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
+    int zlacgv_(integer *, doublecomplex *, integer *);
     char transt[1];
 
 
