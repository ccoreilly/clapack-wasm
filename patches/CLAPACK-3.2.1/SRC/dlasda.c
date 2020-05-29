--- ../../../CLAPACK-3.2.1/SRC/dlasda.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlasda.c	2020-03-18 14:52:00.234152490 +0100
@@ -60,7 +60,8 @@
 	    doublereal *, integer *), dlasdt_(integer *, integer *, 
 	    integer *, integer *, integer *, integer *, integer *), dlaset_(
 	    char *, integer *, integer *, doublereal *, doublereal *, 
-	    doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, integer *);
+    void xerbla_(char *, integer *);
     integer smlszp;
 
 
