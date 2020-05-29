--- ../../../CLAPACK-3.2.1/SRC/ctgsen.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctgsen.c	2020-03-18 14:52:00.218151815 +0100
@@ -55,8 +55,10 @@
     real safmin;
     extern /* Subroutine */ int ctgexc_(logical *, logical *, integer *, 
 	    complex *, integer *, complex *, integer *, complex *, integer *, 
-	    complex *, integer *, integer *, integer *, integer *), xerbla_(
-	    char *, integer *), classq_(integer *, complex *, integer 
+	    complex *, integer *, integer *, integer *, integer *);
+    void xerbla_(
+	    char *, integer *);
+    int classq_(integer *, complex *, integer 
 	    *, real *, real *);
     integer liwmin;
     extern /* Subroutine */ int ctgsyl_(char *, integer *, integer *, integer 
