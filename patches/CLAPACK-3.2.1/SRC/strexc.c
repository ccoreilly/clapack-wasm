--- ../../../CLAPACK-3.2.1/SRC/strexc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/strexc.c	2020-03-18 14:52:00.258153501 +0100
@@ -29,7 +29,8 @@
     integer nbf, nbl, here;
     extern logical lsame_(char *, char *);
     logical wantq;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slaexc_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slaexc_(
 	    logical *, integer *, real *, integer *, real *, integer *, 
 	    integer *, integer *, integer *, real *, integer *);
     integer nbnext;
