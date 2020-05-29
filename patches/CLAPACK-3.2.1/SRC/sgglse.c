--- ../../../CLAPACK-3.2.1/SRC/sgglse.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgglse.c	2020-03-18 14:52:00.250153164 +0100
@@ -33,7 +33,8 @@
 	    real *, integer *, real *, integer *, real *, real *, integer *), scopy_(integer *, real *, integer *, real *, integer *), 
 	    saxpy_(integer *, real *, real *, integer *, real *, integer *), 
 	    strmv_(char *, char *, char *, integer *, real *, integer *, real 
-	    *, integer *), xerbla_(char *, integer *);
+	    *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int sggrqf_(integer *, integer *, integer *, real 
