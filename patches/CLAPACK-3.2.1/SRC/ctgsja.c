--- ../../../CLAPACK-3.2.1/SRC/ctgsja.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctgsja.c	2020-03-18 14:52:00.218151815 +0100
@@ -61,8 +61,10 @@
 	    *, integer *);
     integer kcycle;
     extern /* Subroutine */ int claset_(char *, integer *, integer *, complex 
-	    *, complex *, complex *, integer *), xerbla_(char *, 
-	    integer *), slartg_(real *, real *, real *, real *, real *
+	    *, complex *, complex *, integer *);
+    void xerbla_(char *, 
+	    integer *);
+    int slartg_(real *, real *, real *, real *, real *
 );
 
 
