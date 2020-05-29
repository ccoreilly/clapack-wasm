--- ../../../CLAPACK-3.2.1/SRC/sormql.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sormql.c	2020-03-18 14:52:00.254153333 +0100
@@ -31,7 +31,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer i__;
@@ -44,7 +44,8 @@
 	    integer *, real *, integer *, real *, real *, integer *, real *, 
 	    integer *), slarfb_(char *, char *, char *, char *
 , integer *, integer *, integer *, real *, integer *, real *, 
-	    integer *, real *, integer *, real *, integer *), xerbla_(char *, integer *);
+	    integer *, real *, integer *, real *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int slarft_(char *, char *, integer *, integer *, 
