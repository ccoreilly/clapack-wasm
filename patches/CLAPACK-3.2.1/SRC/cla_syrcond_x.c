--- ../../../CLAPACK-3.2.1/SRC/cla_syrcond_x.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cla_syrcond_x.c	2020-03-18 14:52:00.202151141 +0100
@@ -39,7 +39,8 @@
     integer isave[3];
     real anorm;
     extern /* Subroutine */ int clacn2_(integer *, complex *, complex *, real 
-	    *, integer *, integer *), xerbla_(char *, integer *);
+	    *, integer *, integer *);
+    void xerbla_(char *, integer *);
     real ainvnm;
     extern /* Subroutine */ int csytrs_(char *, integer *, integer *, complex 
 	    *, integer *, integer *, complex *, integer *, integer *);
