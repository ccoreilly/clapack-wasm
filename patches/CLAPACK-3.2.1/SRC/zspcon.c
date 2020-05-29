--- ../../../CLAPACK-3.2.1/SRC/zspcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zspcon.c	2020-03-18 14:52:00.266153839 +0100
@@ -30,7 +30,8 @@
     integer isave[3];
     logical upper;
     extern /* Subroutine */ int zlacn2_(integer *, doublecomplex *, 
-	    doublecomplex *, doublereal *, integer *, integer *), xerbla_(
+	    doublecomplex *, doublereal *, integer *, integer *);
+    void xerbla_(
 	    char *, integer *);
     doublereal ainvnm;
     extern /* Subroutine */ int zsptrs_(char *, integer *, integer *, 
