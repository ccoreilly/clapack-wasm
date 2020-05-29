--- ../../../CLAPACK-3.2.1/SRC/cgtcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgtcon.c	2020-03-18 14:52:00.190150635 +0100
@@ -29,7 +29,8 @@
     extern logical lsame_(char *, char *);
     integer isave[3];
     extern /* Subroutine */ int clacn2_(integer *, complex *, complex *, real 
-	    *, integer *, integer *), xerbla_(char *, integer *);
+	    *, integer *, integer *);
+    void xerbla_(char *, integer *);
     real ainvnm;
     logical onenrm;
     extern /* Subroutine */ int cgttrs_(char *, integer *, integer *, complex 
