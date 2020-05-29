--- ../../../CLAPACK-3.2.1/SRC/cpbcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cpbcon.c	2020-03-18 14:52:00.210151478 +0100
@@ -43,7 +43,7 @@
 	    integer *, integer *, complex *, integer *, complex *, real *, 
 	    real *, integer *);
     real scaleu;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real ainvnm;
     extern /* Subroutine */ int csrscl_(integer *, real *, complex *, integer 
 	    *);
