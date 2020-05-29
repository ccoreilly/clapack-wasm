--- ../../../CLAPACK-3.2.1/SRC/dtgsja.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtgsja.c	2020-03-18 14:52:00.242152827 +0100
@@ -55,7 +55,8 @@
     extern /* Subroutine */ int dlartg_(doublereal *, doublereal *, 
 	    doublereal *, doublereal *, doublereal *), dlaset_(char *, 
 	    integer *, integer *, doublereal *, doublereal *, doublereal *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
