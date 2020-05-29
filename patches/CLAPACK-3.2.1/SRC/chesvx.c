--- ../../../CLAPACK-3.2.1/SRC/chesvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chesvx.c	2020-03-18 14:52:00.194150804 +0100
@@ -47,7 +47,8 @@
 	    integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), chetrs_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  chetrs_(
 	    char *, integer *, integer *, complex *, integer *, integer *, 
 	    complex *, integer *, integer *);
     integer lwkopt;
