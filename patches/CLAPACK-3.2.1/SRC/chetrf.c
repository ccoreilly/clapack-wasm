--- ../../../CLAPACK-3.2.1/SRC/chetrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chetrf.c	2020-03-18 14:52:00.198150972 +0100
@@ -33,7 +33,8 @@
     extern /* Subroutine */ int chetf2_(char *, integer *, complex *, integer 
 	    *, integer *, integer *), clahef_(char *, integer *, 
 	    integer *, integer *, complex *, integer *, integer *, complex *, 
-	    integer *, integer *), xerbla_(char *, integer *);
+	    integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwork, lwkopt;
