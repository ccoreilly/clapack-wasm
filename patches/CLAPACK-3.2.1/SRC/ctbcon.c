--- ../../../CLAPACK-3.2.1/SRC/ctbcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctbcon.c	2020-03-18 14:52:00.214151646 +0100
@@ -44,7 +44,8 @@
 	    char *);
     extern /* Subroutine */ int clatbs_(char *, char *, char *, char *, 
 	    integer *, integer *, complex *, integer *, complex *, real *, 
-	    real *, integer *), xerbla_(char *
+	    real *, integer *);
+    void xerbla_(char *
 , integer *);
     real ainvnm;
     extern /* Subroutine */ int csrscl_(integer *, real *, complex *, integer 
