--- ../../../CLAPACK-3.2.1/SRC/stfsm.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stfsm.c	2020-03-18 14:52:00.258153501 +0100
@@ -35,7 +35,8 @@
     logical lower;
     extern /* Subroutine */ int strsm_(char *, char *, char *, char *, 
 	    integer *, integer *, real *, real *, integer *, real *, integer *
-), xerbla_(char *, integer *);
+);
+    void xerbla_(char *, integer *);
     logical misodd, nisodd, notrans;
 
 
