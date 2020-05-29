--- ../../../CLAPACK-3.2.1/SRC/dgelsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgelsx.c	2020-03-18 14:52:00.222151984 +0100
@@ -51,7 +51,8 @@
 	    integer *, integer *), dgeqpf_(integer *, integer *, 
 	    doublereal *, integer *, integer *, doublereal *, doublereal *, 
 	    integer *), dlaset_(char *, integer *, integer *, doublereal *, 
-	    doublereal *, doublereal *, integer *), xerbla_(char *, 
+	    doublereal *, doublereal *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     doublereal bignum;
     extern /* Subroutine */ int dlatzm_(char *, integer *, integer *, 
