--- ../../../CLAPACK-3.2.1/SRC/xerbla_array.c	2010-04-27 21:37:04.000000000 +0200
+++ CLAPACK-3.2.1///SRC/xerbla_array.c	2020-03-18 14:52:00.258153501 +0100
@@ -20,12 +20,12 @@
     integer i__1, i__2, i__3;
 
     /* Builtin functions */
-    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);
+    /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
     integer i_len(char *, ftnlen);
 
     /* Local variables */
     integer i__;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     char srname[32];
 
 
