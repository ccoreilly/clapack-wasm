--- ../../../CLAPACK-3.2.1/SRC/cungtr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cungtr.c	2020-03-18 14:52:00.218151815 +0100
@@ -29,7 +29,7 @@
     extern logical lsame_(char *, char *);
     integer iinfo;
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int cungql_(integer *, integer *, integer *, 
