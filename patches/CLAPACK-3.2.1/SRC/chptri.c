--- ../../../CLAPACK-3.2.1/SRC/chptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/chptri.c	2020-03-18 14:52:00.198150972 +0100
@@ -46,7 +46,7 @@
 	    integer *);
     integer kstep;
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer kcnext;
 
 
