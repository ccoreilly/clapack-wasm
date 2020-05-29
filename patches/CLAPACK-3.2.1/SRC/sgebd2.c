--- ../../../CLAPACK-3.2.1/SRC/sgebd2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgebd2.c	2020-03-18 14:52:00.246152995 +0100
@@ -26,8 +26,10 @@
     /* Local variables */
     integer i__;
     extern /* Subroutine */ int slarf_(char *, integer *, integer *, real *, 
-	    integer *, real *, real *, integer *, real *), xerbla_(
-	    char *, integer *), slarfg_(integer *, real *, real *, 
+	    integer *, real *, real *, integer *, real *);
+    void xerbla_(
+	    char *, integer *);
+    int slarfg_(integer *, real *, real *, 
 	    integer *, real *);
 
 
