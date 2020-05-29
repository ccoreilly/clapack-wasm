--- ../../../CLAPACK-3.2.1/SRC/dgghrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgghrd.c	2020-03-18 14:52:00.226152152 +0100
@@ -40,7 +40,8 @@
     extern /* Subroutine */ int dlaset_(char *, integer *, integer *, 
 	    doublereal *, doublereal *, doublereal *, integer *), 
 	    dlartg_(doublereal *, doublereal *, doublereal *, doublereal *, 
-	    doublereal *), xerbla_(char *, integer *);
+	    doublereal *);
+    void xerbla_(char *, integer *);
     integer icompq, icompz;
 
 
