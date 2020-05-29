--- ../../../CLAPACK-3.2.1/SRC/dlarzb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlarzb.c	2020-03-18 14:52:00.234152490 +0100
@@ -37,7 +37,8 @@
     extern /* Subroutine */ int dcopy_(integer *, doublereal *, integer *, 
 	    doublereal *, integer *), dtrmm_(char *, char *, char *, char *, 
 	    integer *, integer *, doublereal *, doublereal *, integer *, 
-	    doublereal *, integer *), xerbla_(
+	    doublereal *, integer *);
+    void xerbla_(
 	    char *, integer *);
     char transt[1];
 
