--- ../../../CLAPACK-3.2.1/SRC/cggqrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cggqrf.c	2020-03-18 14:52:00.190150635 +0100
@@ -30,7 +30,8 @@
     extern /* Subroutine */ int cgeqrf_(integer *, integer *, complex *, 
 	    integer *, complex *, complex *, integer *, integer *), cgerqf_(
 	    integer *, integer *, complex *, integer *, complex *, complex *, 
-	    integer *, integer *), xerbla_(char *, integer *);
+	    integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int cunmqr_(char *, char *, integer *, integer *, 
