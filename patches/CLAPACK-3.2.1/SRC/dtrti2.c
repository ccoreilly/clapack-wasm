--- ../../../CLAPACK-3.2.1/SRC/dtrti2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtrti2.c	2020-03-18 14:52:00.246152995 +0100
@@ -31,7 +31,8 @@
     extern logical lsame_(char *, char *);
     logical upper;
     extern /* Subroutine */ int dtrmv_(char *, char *, char *, integer *, 
-	    doublereal *, integer *, doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, integer *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
     logical nounit;
 
 
