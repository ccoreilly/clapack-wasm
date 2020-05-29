--- ../../../CLAPACK-3.2.1/SRC/sgebrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgebrd.c	2020-03-18 14:52:00.246152995 +0100
@@ -40,7 +40,8 @@
     extern /* Subroutine */ int sgebd2_(integer *, integer *, real *, integer 
 	    *, real *, real *, real *, real *, real *, integer *), slabrd_(
 	    integer *, integer *, integer *, real *, integer *, real *, real *
-, real *, real *, real *, integer *, real *, integer *), xerbla_(
+, real *, real *, real *, integer *, real *, integer *);
+    void xerbla_(
 	    char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
