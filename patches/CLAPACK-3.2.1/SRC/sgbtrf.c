--- ../../../CLAPACK-3.2.1/SRC/sgbtrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgbtrf.c	2020-03-18 14:52:00.246152995 +0100
@@ -42,7 +42,8 @@
 	    integer *), sswap_(integer *, real *, integer *, real *, integer *
 ), strsm_(char *, char *, char *, char *, integer *, integer *, 
 	    real *, real *, integer *, real *, integer *), sgbtf2_(integer *, integer *, integer *, integer 
-	    *, real *, integer *, integer *, integer *), xerbla_(char *, 
+	    *, real *, integer *, integer *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *), isamax_(integer *, real *, 
