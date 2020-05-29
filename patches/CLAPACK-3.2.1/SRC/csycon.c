--- ../../../CLAPACK-3.2.1/SRC/csycon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/csycon.c	2020-03-18 14:52:00.214151646 +0100
@@ -30,7 +30,8 @@
     integer isave[3];
     logical upper;
     extern /* Subroutine */ int clacn2_(integer *, complex *, complex *, real 
-	    *, integer *, integer *), xerbla_(char *, integer *);
+	    *, integer *, integer *);
+    void xerbla_(char *, integer *);
     real ainvnm;
     extern /* Subroutine */ int csytrs_(char *, integer *, integer *, complex 
 	    *, integer *, integer *, complex *, integer *, integer *);
