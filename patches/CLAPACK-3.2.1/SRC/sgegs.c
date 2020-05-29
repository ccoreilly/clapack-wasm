--- ../../../CLAPACK-3.2.1/SRC/sgegs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgegs.c	2020-03-18 14:52:00.246152995 +0100
@@ -50,7 +50,8 @@
     real safmin;
     extern /* Subroutine */ int sgghrd_(char *, char *, integer *, integer *, 
 	    integer *, real *, integer *, real *, integer *, real *, integer *
-, real *, integer *, integer *), xerbla_(char *, 
+, real *, integer *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
