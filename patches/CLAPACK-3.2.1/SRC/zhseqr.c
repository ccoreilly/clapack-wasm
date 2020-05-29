--- ../../../CLAPACK-3.2.1/SRC/zhseqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhseqr.c	2020-03-18 14:52:00.262153670 +0100
@@ -35,7 +35,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     doublecomplex hl[2401]	/* was [49][49] */;
@@ -48,7 +48,8 @@
 	    doublecomplex *, integer *), zlaqr0_(logical *, logical *, 
 	    integer *, integer *, integer *, doublecomplex *, integer *, 
 	    doublecomplex *, integer *, integer *, doublecomplex *, integer *, 
-	     doublecomplex *, integer *, integer *), xerbla_(char *, integer *
+	     doublecomplex *, integer *, integer *);
+    void xerbla_(char *, integer *
 );
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
