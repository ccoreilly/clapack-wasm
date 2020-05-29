--- ../../../CLAPACK-3.2.1/SRC/zunmqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zunmqr.c	2020-03-18 14:52:00.270154007 +0100
@@ -32,7 +32,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer i__;
@@ -43,7 +43,8 @@
     integer nbmin, iinfo;
     extern /* Subroutine */ int zunm2r_(char *, char *, integer *, integer *, 
 	    integer *, doublecomplex *, integer *, doublecomplex *, 
-	    doublecomplex *, integer *, doublecomplex *, integer *), xerbla_(char *, integer *);
+	    doublecomplex *, integer *, doublecomplex *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int zlarfb_(char *, char *, char *, char *, 
