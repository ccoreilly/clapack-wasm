--- ../../../CLAPACK-3.2.1/SRC/cgegv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgegv.c	2020-03-18 14:52:00.186150466 +0100
@@ -77,8 +77,8 @@
     extern /* Subroutine */ int chgeqz_(char *, char *, char *, integer *, 
 	    integer *, integer *, complex *, integer *, complex *, integer *, 
 	    complex *, complex *, complex *, integer *, complex *, integer *, 
-	    complex *, integer *, real *, integer *), 
-	    xerbla_(char *, integer *);
+	    complex *, integer *, real *, integer *);
+	void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ijobvl, iright;
