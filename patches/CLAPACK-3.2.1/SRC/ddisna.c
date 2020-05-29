--- ../../../CLAPACK-3.2.1/SRC/ddisna.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ddisna.c	2020-03-18 14:52:00.222151984 +0100
@@ -29,7 +29,7 @@
     logical right;
     extern doublereal dlamch_(char *);
     doublereal oldgap, safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal newgap, thresh;
 
 
