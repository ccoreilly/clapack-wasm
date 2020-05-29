--- ../../../CLAPACK-3.2.1/SRC/cla_gbrcond_c.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cla_gbrcond_c.c	2020-03-18 14:52:00.198150972 +0100
@@ -38,8 +38,9 @@
     integer isave[3];
     real anorm;
     extern /* Subroutine */ int clacn2_(integer *, complex *, complex *, real 
-	    *, integer *, integer *), xerbla_(char *, integer *), 
-	    cgbtrs_(char *, integer *, integer *, integer *, integer *, 
+	    *, integer *, integer *);
+    void xerbla_(char *, integer *);
+	int cgbtrs_(char *, integer *, integer *, integer *, integer *, 
 	    complex *, integer *, integer *, complex *, integer *, integer *);
     real ainvnm;
     logical notrans;
