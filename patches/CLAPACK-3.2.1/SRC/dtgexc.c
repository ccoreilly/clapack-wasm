--- ../../../CLAPACK-3.2.1/SRC/dtgexc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtgexc.c	2020-03-18 14:52:00.242152827 +0100
@@ -32,7 +32,8 @@
     extern /* Subroutine */ int dtgex2_(logical *, logical *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *, doublereal *, integer *, integer *, integer *, integer 
-	    *, doublereal *, integer *, integer *), xerbla_(char *, integer *);
+	    *, doublereal *, integer *, integer *);
+    void xerbla_(char *, integer *);
     integer nbnext;
     logical lquery;
 
