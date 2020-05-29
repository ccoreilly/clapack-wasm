--- ../../../CLAPACK-3.2.1/SRC/cgels.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgels.c	2020-03-18 14:52:00.186150466 +0100
@@ -48,7 +48,8 @@
     extern /* Subroutine */ int cgeqrf_(integer *, integer *, complex *, 
 	    integer *, complex *, complex *, integer *, integer *), claset_(
 	    char *, integer *, integer *, complex *, complex *, complex *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer scllen;
