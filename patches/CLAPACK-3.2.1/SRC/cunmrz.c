--- ../../../CLAPACK-3.2.1/SRC/cunmrz.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cunmrz.c	2020-03-18 14:52:00.222151984 +0100
@@ -32,7 +32,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer i__;
@@ -49,7 +49,8 @@
 , complex *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), clarzt_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  clarzt_(
 	    char *, char *, integer *, integer *, complex *, integer *, 
 	    complex *, complex *, integer *);
     logical notran;
