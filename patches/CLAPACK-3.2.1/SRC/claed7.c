--- ../../../CLAPACK-3.2.1/SRC/claed7.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/claed7.c	2020-03-18 14:52:00.202151141 +0100
@@ -45,8 +45,9 @@
 , real *, integer *);
     integer idlmda;
     extern /* Subroutine */ int clacrm_(integer *, integer *, complex *, 
-	    integer *, real *, integer *, complex *, integer *, real *), 
-	    xerbla_(char *, integer *), slamrg_(integer *, integer *, 
+	    integer *, real *, integer *, complex *, integer *, real *);
+	void xerbla_(char *, integer *);
+    int slamrg_(integer *, integer *, 
 	    real *, integer *, integer *, integer *);
     integer coltyp;
 
