--- ../../../CLAPACK-3.2.1/SRC/cgbtrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgbtrs.c	2020-03-18 14:52:00.186150466 +0100
@@ -37,8 +37,8 @@
 	    ctbsv_(char *, char *, char *, integer *, integer *, complex *, 
 	    integer *, complex *, integer *);
     logical lnoti;
-    extern /* Subroutine */ int clacgv_(integer *, complex *, integer *), 
-	    xerbla_(char *, integer *);
+    extern /* Subroutine */ int clacgv_(integer *, complex *, integer *);
+	void xerbla_(char *, integer *);
     logical notran;
 
 
