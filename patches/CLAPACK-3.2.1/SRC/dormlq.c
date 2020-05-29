--- ../../../CLAPACK-3.2.1/SRC/dormlq.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dormlq.c	2020-03-18 14:52:00.238152659 +0100
@@ -31,7 +31,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer i__;
@@ -46,7 +46,8 @@
 	    *, char *, char *, char *, integer *, integer *, integer *, 
 	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *, doublereal *, integer *), dlarft_(char *, char *, integer *, integer *, doublereal 
-	    *, integer *, doublereal *, doublereal *, integer *), xerbla_(char *, integer *);
+	    *, integer *, doublereal *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     logical notran;
