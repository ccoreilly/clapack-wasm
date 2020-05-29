--- ../../../CLAPACK-3.2.1/SRC/slasd0.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slasd0.c	2020-03-18 14:52:00.254153333 +0100
@@ -37,7 +37,9 @@
     integer inode, ndiml, idxqc, ndimr, itemp, sqrei;
     extern /* Subroutine */ int slasd1_(integer *, integer *, integer *, real 
 	    *, real *, real *, real *, integer *, real *, integer *, integer *
-, integer *, real *, integer *), xerbla_(char *, integer *), slasdq_(char *, integer *, integer *, integer *, integer 
+, integer *, real *, integer *);
+    void xerbla_(char *, integer *);
+    int slasdq_(char *, integer *, integer *, integer *, integer 
 	    *, integer *, real *, real *, real *, integer *, real *, integer *
 , real *, integer *, real *, integer *), slasdt_(integer *
 , integer *, integer *, integer *, integer *, integer *, integer *
