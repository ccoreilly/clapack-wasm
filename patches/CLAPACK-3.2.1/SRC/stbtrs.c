--- ../../../CLAPACK-3.2.1/SRC/stbtrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stbtrs.c	2020-03-18 14:52:00.258153501 +0100
@@ -29,7 +29,8 @@
     extern logical lsame_(char *, char *);
     logical upper;
     extern /* Subroutine */ int stbsv_(char *, char *, char *, integer *, 
-	    integer *, real *, integer *, real *, integer *), xerbla_(char *, integer *);
+	    integer *, real *, integer *, real *, integer *);
+    void xerbla_(char *, integer *);
     logical nounit;
 
 
