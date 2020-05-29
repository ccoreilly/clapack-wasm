--- ../../../CLAPACK-3.2.1/SRC/sspcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sspcon.c	2020-03-18 14:52:00.254153333 +0100
@@ -29,7 +29,8 @@
     integer isave[3];
     logical upper;
     extern /* Subroutine */ int slacn2_(integer *, real *, real *, integer *, 
-	    real *, integer *, integer *), xerbla_(char *, integer *);
+	    real *, integer *, integer *);
+    void xerbla_(char *, integer *);
     real ainvnm;
     extern /* Subroutine */ int ssptrs_(char *, integer *, integer *, real *, 
 	    integer *, real *, integer *, integer *);
