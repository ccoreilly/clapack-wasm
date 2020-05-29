--- ../../../CLAPACK-3.2.1/SRC/dsbgst.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsbgst.c	2020-03-18 14:52:00.238152659 +0100
@@ -50,8 +50,10 @@
 	     doublereal *, integer *, doublereal *, doublereal *, integer *), 
 	    dlaset_(char *, integer *, integer *, doublereal *, doublereal *, 
 	    doublereal *, integer *), dlartg_(doublereal *, 
-	    doublereal *, doublereal *, doublereal *, doublereal *), xerbla_(
-	    char *, integer *), dlargv_(integer *, doublereal *, 
+	    doublereal *, doublereal *, doublereal *, doublereal *);
+    void xerbla_(
+	    char *, integer *);
+    int dlargv_(integer *, doublereal *, 
 	    integer *, doublereal *, integer *, doublereal *, integer *);
     logical update;
     extern /* Subroutine */ int dlartv_(integer *, doublereal *, integer *, 
