--- ../../../CLAPACK-3.2.1/SRC/dgejsv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgejsv.c	2020-03-18 14:52:00.222151984 +0100
@@ -83,7 +83,8 @@
     extern /* Subroutine */ int dlacpy_(char *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *), 
 	    dlaset_(char *, integer *, integer *, doublereal *, doublereal *, 
-	    doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, integer *);
+    void xerbla_(char *, integer *);
     logical noscal;
     extern /* Subroutine */ int dpocon_(char *, integer *, doublereal *, 
 	    integer *, doublereal *, doublereal *, doublereal *, integer *, 
