--- ../../../CLAPACK-3.2.1/SRC/spftri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spftri.c	2020-03-18 14:52:00.254153333 +0100
@@ -32,7 +32,8 @@
 	    integer *, integer *, real *, real *, integer *, real *, integer *
 ), ssyrk_(char *, char *, integer 
 	    *, integer *, real *, real *, integer *, real *, real *, integer *
-), xerbla_(char *, integer *);
+);
+    void xerbla_(char *, integer *);
     logical nisodd;
     extern /* Subroutine */ int slauum_(char *, integer *, real *, integer *, 
 	    integer *), stftri_(char *, char *, char *, integer *, 
