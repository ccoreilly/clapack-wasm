--- ../../../CLAPACK-3.2.1/SRC/cunghr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cunghr.c	2020-03-18 14:52:00.218151815 +0100
@@ -27,7 +27,7 @@
 
     /* Local variables */
     integer i__, j, nb, nh, iinfo;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int cungqr_(integer *, integer *, integer *, 
