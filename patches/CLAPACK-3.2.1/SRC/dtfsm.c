--- ../../../CLAPACK-3.2.1/SRC/dtfsm.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtfsm.c	2020-03-18 14:52:00.242152827 +0100
@@ -36,7 +36,8 @@
     logical lower;
     extern /* Subroutine */ int dtrsm_(char *, char *, char *, char *, 
 	    integer *, integer *, doublereal *, doublereal *, integer *, 
-	    doublereal *, integer *), xerbla_(
+	    doublereal *, integer *);
+    void xerbla_(
 	    char *, integer *);
     logical misodd, nisodd, notrans;
 
