--- ../../../CLAPACK-3.2.1/SRC/sgees.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgees.c	2020-03-18 14:52:00.246152995 +0100
@@ -53,7 +53,8 @@
     extern doublereal slamch_(char *), slange_(char *, integer *, 
 	    integer *, real *, integer *, real *);
     extern /* Subroutine */ int sgehrd_(integer *, integer *, integer *, real 
-	    *, integer *, real *, real *, integer *, integer *), xerbla_(char 
+	    *, integer *, real *, real *, integer *, integer *);
+    void xerbla_(char 
 	    *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
