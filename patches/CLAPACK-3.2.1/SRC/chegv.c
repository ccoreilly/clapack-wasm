--- ../../../CLAPACK-3.2.1/SRC/chegv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chegv.c	2020-03-18 14:52:00.194150804 +0100
@@ -43,7 +43,8 @@
 	    *, integer *, complex *, integer *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), cpotrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  cpotrf_(
 	    char *, integer *, complex *, integer *, integer *);
     integer lwkopt;
     logical lquery;
