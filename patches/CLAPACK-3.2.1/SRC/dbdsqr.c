--- ../../../CLAPACK-3.2.1/SRC/dbdsqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dbdsqr.c	2020-03-18 14:52:00.222151984 +0100
@@ -70,7 +70,8 @@
 	    doublereal *, doublereal *, doublereal *);
     extern doublereal dlamch_(char *);
     extern /* Subroutine */ int dlartg_(doublereal *, doublereal *, 
-	    doublereal *, doublereal *, doublereal *), xerbla_(char *, 
+	    doublereal *, doublereal *, doublereal *);
+    void xerbla_(char *, 
 	    integer *);
     doublereal sminoa, thresh;
     logical rotate;
