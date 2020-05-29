--- ../../../CLAPACK-3.2.1/SRC/ssygv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssygv.c	2020-03-18 14:52:00.258153501 +0100
@@ -38,7 +38,8 @@
     extern /* Subroutine */ int strsm_(char *, char *, char *, char *, 
 	    integer *, integer *, real *, real *, integer *, real *, integer *
 ), ssyev_(char *, char *, integer 
-	    *, real *, integer *, real *, real *, integer *, integer *), xerbla_(char *, integer *);
+	    *, real *, integer *, real *, real *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer lwkmin;
