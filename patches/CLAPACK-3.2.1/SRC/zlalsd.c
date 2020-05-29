--- ../../../CLAPACK-3.2.1/SRC/zlalsd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zlalsd.c	2020-03-18 14:52:00.266153839 +0100
@@ -73,7 +73,8 @@
 	     integer *, doublereal *, integer *, doublereal *, integer *, 
 	    doublereal *, integer *), dlaset_(char *, integer *, 
 	    integer *, doublereal *, doublereal *, doublereal *, integer *), dlartg_(doublereal *, doublereal *, doublereal *, 
-	    doublereal *, doublereal *), xerbla_(char *, integer *);
+	    doublereal *, doublereal *);
+    void xerbla_(char *, integer *);
     integer givcol;
     extern doublereal dlanst_(char *, integer *, doublereal *, doublereal *);
     extern /* Subroutine */ int zlalsa_(integer *, integer *, integer *, 
