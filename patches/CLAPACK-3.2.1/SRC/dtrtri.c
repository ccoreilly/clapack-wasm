--- ../../../CLAPACK-3.2.1/SRC/dtrtri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtrtri.c	2020-03-18 14:52:00.246152995 +0100
@@ -30,7 +30,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer j, jb, nb, nn;
@@ -42,7 +42,8 @@
 , doublereal *, integer *, doublereal *, integer *);
     logical upper;
     extern /* Subroutine */ int dtrti2_(char *, char *, integer *, doublereal 
-	    *, integer *, integer *), xerbla_(char *, integer 
+	    *, integer *, integer *);
+    void xerbla_(char *, integer 
 	    *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
