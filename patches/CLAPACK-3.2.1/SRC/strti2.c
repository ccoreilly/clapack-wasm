--- ../../../CLAPACK-3.2.1/SRC/strti2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/strti2.c	2020-03-18 14:52:00.258153501 +0100
@@ -30,8 +30,8 @@
     extern /* Subroutine */ int sscal_(integer *, real *, real *, integer *);
     logical upper;
     extern /* Subroutine */ int strmv_(char *, char *, char *, integer *, 
-	    real *, integer *, real *, integer *), 
-	    xerbla_(char *, integer *);
+	    real *, integer *, real *, integer *);
+	void xerbla_(char *, integer *);
     logical nounit;
 
 
