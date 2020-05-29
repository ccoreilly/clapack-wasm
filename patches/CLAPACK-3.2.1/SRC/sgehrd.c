--- ../../../CLAPACK-3.2.1/SRC/sgehrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgehrd.c	2020-03-18 14:52:00.246152995 +0100
@@ -46,7 +46,8 @@
 	    real *, real *, integer *, real *, integer *), slarfb_(char *, 
 	    char *, char *, char *, integer *, integer *, integer *, real *, 
 	    integer *, real *, integer *, real *, integer *, real *, integer *
-), xerbla_(char *, integer *);
+);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwork, lwkopt;
