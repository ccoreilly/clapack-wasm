--- ../../../CLAPACK-3.2.1/SRC/stgexc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stgexc.c	2020-03-18 14:52:00.258153501 +0100
@@ -32,7 +32,8 @@
     extern /* Subroutine */ int stgex2_(logical *, logical *, integer *, real 
 	    *, integer *, real *, integer *, real *, integer *, real *, 
 	    integer *, integer *, integer *, integer *, real *, integer *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     integer nbnext;
     logical lquery;
 
