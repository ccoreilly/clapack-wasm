--- ../../../CLAPACK-3.2.1/SRC/chseqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chseqr.c	2020-03-18 14:52:00.198150972 +0100
@@ -34,7 +34,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     complex hl[2401]	/* was [49][49] */;
@@ -53,7 +53,8 @@
 	    integer *, integer *), clacpy_(char *, integer *, integer *, 
 	    complex *, integer *, complex *, integer *), claset_(char 
 	    *, integer *, integer *, complex *, complex *, complex *, integer 
-	    *), xerbla_(char *, integer *);
+	    *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     logical lquery;
