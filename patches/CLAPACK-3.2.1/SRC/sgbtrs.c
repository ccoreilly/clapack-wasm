--- ../../../CLAPACK-3.2.1/SRC/sgbtrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgbtrs.c	2020-03-18 14:52:00.246152995 +0100
@@ -36,8 +36,8 @@
     logical lnoti;
     extern /* Subroutine */ int sswap_(integer *, real *, integer *, real *, 
 	    integer *), stbsv_(char *, char *, char *, integer *, integer *, 
-	    real *, integer *, real *, integer *), 
-	    xerbla_(char *, integer *);
+	    real *, integer *, real *, integer *);
+	void xerbla_(char *, integer *);
     logical notran;
 
 
