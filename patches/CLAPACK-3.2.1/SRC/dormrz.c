--- ../../../CLAPACK-3.2.1/SRC/dormrz.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dormrz.c	2020-03-18 14:52:00.238152659 +0100
@@ -32,7 +32,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer i__;
@@ -43,8 +43,8 @@
     integer nbmin, iinfo;
     extern /* Subroutine */ int dormr3_(char *, char *, integer *, integer *, 
 	    integer *, integer *, doublereal *, integer *, doublereal *, 
-	    doublereal *, integer *, doublereal *, integer *),
-	     xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int dlarzb_(char *, char *, char *, char *, 
