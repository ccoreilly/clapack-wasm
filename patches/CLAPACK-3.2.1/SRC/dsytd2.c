--- ../../../CLAPACK-3.2.1/SRC/dsytd2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsytd2.c	2020-03-18 14:52:00.242152827 +0100
@@ -41,7 +41,8 @@
     extern /* Subroutine */ int dsymv_(char *, integer *, doublereal *, 
 	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
 	    doublereal *, integer *), dlarfg_(integer *, doublereal *, 
-	     doublereal *, integer *, doublereal *), xerbla_(char *, integer *
+	     doublereal *, integer *, doublereal *);
+    void xerbla_(char *, integer *
 );
 
 
