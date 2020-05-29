--- ../../../CLAPACK-3.2.1/SRC/ctrexc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctrexc.c	2020-03-18 14:52:00.218151815 +0100
@@ -37,7 +37,8 @@
     extern logical lsame_(char *, char *);
     logical wantq;
     extern /* Subroutine */ int clartg_(complex *, complex *, real *, complex 
-	    *, complex *), xerbla_(char *, integer *);
+	    *, complex *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
