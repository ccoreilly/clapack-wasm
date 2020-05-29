--- ../../../CLAPACK-3.2.1/SRC/sgbtf2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgbtf2.c	2020-03-18 14:52:00.246152995 +0100
@@ -30,7 +30,8 @@
     extern /* Subroutine */ int sger_(integer *, integer *, real *, real *, 
 	    integer *, real *, integer *, real *, integer *), sscal_(integer *
 , real *, real *, integer *), sswap_(integer *, real *, integer *, 
-	     real *, integer *), xerbla_(char *, integer *);
+	     real *, integer *);
+    void xerbla_(char *, integer *);
     extern integer isamax_(integer *, real *, integer *);
 
 
