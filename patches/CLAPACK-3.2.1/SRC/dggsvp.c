--- ../../../CLAPACK-3.2.1/SRC/dggsvp.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dggsvp.c	2020-03-18 14:52:00.226152152 +0100
@@ -47,7 +47,9 @@
 	    integer *, integer *, doublereal *, doublereal *, integer *), 
 	    dlacpy_(char *, integer *, integer *, doublereal *, integer *, 
 	    doublereal *, integer *), dlaset_(char *, integer *, 
-	    integer *, doublereal *, doublereal *, doublereal *, integer *), xerbla_(char *, integer *), dlapmt_(logical *, 
+	    integer *, doublereal *, doublereal *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
+    int dlapmt_(logical *, 
 	    integer *, integer *, doublereal *, integer *, integer *);
     logical forwrd;
 
