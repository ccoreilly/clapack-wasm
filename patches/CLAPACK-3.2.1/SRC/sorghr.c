--- ../../../CLAPACK-3.2.1/SRC/sorghr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sorghr.c	2020-03-18 14:52:00.254153333 +0100
@@ -26,7 +26,7 @@
 
     /* Local variables */
     integer i__, j, nb, nh, iinfo;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int sorgqr_(integer *, integer *, integer *, real 
