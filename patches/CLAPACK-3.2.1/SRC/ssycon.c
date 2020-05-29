--- ../../../CLAPACK-3.2.1/SRC/ssycon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssycon.c	2020-03-18 14:52:00.258153501 +0100
@@ -30,7 +30,8 @@
     integer isave[3];
     logical upper;
     extern /* Subroutine */ int slacn2_(integer *, real *, real *, integer *, 
-	    real *, integer *, integer *), xerbla_(char *, integer *);
+	    real *, integer *, integer *);
+    void xerbla_(char *, integer *);
     real ainvnm;
     extern /* Subroutine */ int ssytrs_(char *, integer *, integer *, real *, 
 	    integer *, integer *, real *, integer *, integer *);
