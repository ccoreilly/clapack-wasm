--- ../../../CLAPACK-3.2.1/SRC/dgbbrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgbbrd.c	2020-03-18 14:52:00.222151984 +0100
@@ -44,7 +44,9 @@
     extern /* Subroutine */ int dlaset_(char *, integer *, integer *, 
 	    doublereal *, doublereal *, doublereal *, integer *), 
 	    dlartg_(doublereal *, doublereal *, doublereal *, doublereal *, 
-	    doublereal *), xerbla_(char *, integer *), dlargv_(
+	    doublereal *);
+    void xerbla_(char *, integer *);
+    int dlargv_(
 	    integer *, doublereal *, integer *, doublereal *, integer *, 
 	    doublereal *, integer *), dlartv_(integer *, doublereal *, 
 	    integer *, doublereal *, integer *, doublereal *, doublereal *, 
