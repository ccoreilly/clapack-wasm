--- ../../../CLAPACK-3.2.1/SRC/sla_gbrcond.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sla_gbrcond.c	2020-03-18 14:52:00.250153164 +0100
@@ -33,7 +33,8 @@
     extern logical lsame_(char *, char *);
     integer isave[3];
     extern /* Subroutine */ int slacn2_(integer *, real *, real *, integer *, 
-	    real *, integer *, integer *), xerbla_(char *, integer *);
+	    real *, integer *, integer *);
+    void xerbla_(char *, integer *);
     real ainvnm;
     extern /* Subroutine */ int sgbtrs_(char *, integer *, integer *, integer 
 	    *, integer *, real *, integer *, integer *, real *, integer *, 
