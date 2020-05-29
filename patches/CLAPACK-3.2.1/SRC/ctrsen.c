--- ../../../CLAPACK-3.2.1/SRC/ctrsen.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctrsen.c	2020-03-18 14:52:00.218151815 +0100
@@ -43,7 +43,8 @@
     extern doublereal clange_(char *, integer *, integer *, complex *, 
 	    integer *, real *);
     extern /* Subroutine */ int clacpy_(char *, integer *, integer *, complex 
-	    *, integer *, complex *, integer *), xerbla_(char *, 
+	    *, integer *, complex *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     logical wantbh;
     extern /* Subroutine */ int ctrexc_(char *, integer *, complex *, integer 
