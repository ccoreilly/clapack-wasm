--- ../../../CLAPACK-3.2.1/SRC/chesv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chesv.c	2020-03-18 14:52:00.194150804 +0100
@@ -29,7 +29,8 @@
     integer nb;
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int chetrf_(char *, integer *, complex *, integer 
-	    *, integer *, complex *, integer *, integer *), xerbla_(
+	    *, integer *, complex *, integer *, integer *);
+    void xerbla_(
 	    char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
