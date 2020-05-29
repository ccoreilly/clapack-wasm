--- ../../../CLAPACK-3.2.1/SRC/ztrtri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ztrtri.c	2020-03-18 14:52:00.270154007 +0100
@@ -30,7 +30,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer j, jb, nb, nn;
@@ -42,7 +42,8 @@
 	    ztrsm_(char *, char *, char *, char *, integer *, integer *, 
 	    doublecomplex *, doublecomplex *, integer *, doublecomplex *, 
 	    integer *), ztrti2_(char *, char *
-, integer *, doublecomplex *, integer *, integer *), xerbla_(char *, integer *);
+, integer *, doublecomplex *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     logical nounit;
