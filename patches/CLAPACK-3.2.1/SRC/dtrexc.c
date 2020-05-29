--- ../../../CLAPACK-3.2.1/SRC/dtrexc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtrexc.c	2020-03-18 14:52:00.246152995 +0100
@@ -31,7 +31,8 @@
     logical wantq;
     extern /* Subroutine */ int dlaexc_(logical *, integer *, doublereal *, 
 	    integer *, doublereal *, integer *, integer *, integer *, integer 
-	    *, doublereal *, integer *), xerbla_(char *, integer *);
+	    *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
     integer nbnext;
 
 
