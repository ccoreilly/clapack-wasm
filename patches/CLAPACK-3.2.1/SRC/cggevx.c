--- ../../../CLAPACK-3.2.1/SRC/cggevx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cggevx.c	2020-03-18 14:52:00.190150635 +0100
@@ -84,7 +84,8 @@
 	    integer *, integer *);
     integer ijobvl;
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
-	    real *, integer *, integer *, real *, integer *, integer *), xerbla_(char *, integer *);
+	    real *, integer *, integer *, real *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern doublereal slamch_(char *);
