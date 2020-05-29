--- ../../../CLAPACK-3.2.1/SRC/dsytrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsytrd.c	2020-03-18 14:52:00.242152827 +0100
@@ -39,7 +39,8 @@
 	    *, doublereal *, integer *, doublereal *, integer *, doublereal *, 
 	     doublereal *, integer *), dlatrd_(char *, 
 	    integer *, integer *, doublereal *, integer *, doublereal *, 
-	    doublereal *, doublereal *, integer *), xerbla_(char *, 
+	    doublereal *, doublereal *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
