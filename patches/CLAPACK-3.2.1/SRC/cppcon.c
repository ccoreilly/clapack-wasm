--- ../../../CLAPACK-3.2.1/SRC/cppcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cppcon.c	2020-03-18 14:52:00.214151646 +0100
@@ -39,7 +39,8 @@
     real scalel;
     extern doublereal slamch_(char *);
     real scaleu;
-    extern /* Subroutine */ int xerbla_(char *, integer *), clatps_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  clatps_(
 	    char *, char *, char *, char *, integer *, complex *, complex *, 
 	    real *, real *, integer *);
     real ainvnm;
