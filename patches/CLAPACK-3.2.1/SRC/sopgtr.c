--- ../../../CLAPACK-3.2.1/SRC/sopgtr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sopgtr.c	2020-03-18 14:52:00.254153333 +0100
@@ -27,7 +27,8 @@
     extern /* Subroutine */ int sorg2l_(integer *, integer *, integer *, real 
 	    *, integer *, real *, real *, integer *), sorg2r_(integer *, 
 	    integer *, integer *, real *, integer *, real *, real *, integer *
-), xerbla_(char *, integer *);
+);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
