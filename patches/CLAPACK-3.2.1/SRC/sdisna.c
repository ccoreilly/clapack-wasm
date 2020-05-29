--- ../../../CLAPACK-3.2.1/SRC/sdisna.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sdisna.c	2020-03-18 14:52:00.246152995 +0100
@@ -30,7 +30,7 @@
     real oldgap;
     extern doublereal slamch_(char *);
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real newgap, thresh;
 
 
