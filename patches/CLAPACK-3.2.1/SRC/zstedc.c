--- ../../../CLAPACK-3.2.1/SRC/zstedc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zstedc.c	2020-03-18 14:52:00.266153839 +0100
@@ -54,7 +54,8 @@
 	    doublereal *, doublereal *, doublereal *, integer *, doublereal *, 
 	     integer *, integer *, integer *, integer *), dlaset_(
 	    char *, integer *, integer *, doublereal *, doublereal *, 
-	    doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer finish;
