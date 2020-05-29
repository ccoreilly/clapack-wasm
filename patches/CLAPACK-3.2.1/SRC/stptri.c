--- ../../../CLAPACK-3.2.1/SRC/stptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stptri.c	2020-03-18 14:52:00.258153501 +0100
@@ -30,7 +30,8 @@
     extern /* Subroutine */ int sscal_(integer *, real *, real *, integer *);
     logical upper;
     extern /* Subroutine */ int stpmv_(char *, char *, char *, integer *, 
-	    real *, real *, integer *), xerbla_(char *
+	    real *, real *, integer *);
+    void xerbla_(char *
 , integer *);
     integer jclast;
     logical nounit;
