--- ../../../CLAPACK-3.2.1/SRC/cunmlq.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cunmlq.c	2020-03-18 14:52:00.218151815 +0100
@@ -31,7 +31,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer i__;
@@ -47,7 +47,8 @@
 	    integer *, complex *, integer *, complex *, integer *, complex *, 
 	    integer *), clarft_(char *, char *
 , integer *, integer *, complex *, integer *, complex *, complex *
-, integer *), xerbla_(char *, integer *);
+, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     logical notran;
