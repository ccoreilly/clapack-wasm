--- ../../../CLAPACK-3.2.1/SRC/cgeqlf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgeqlf.c	2020-03-18 14:52:00.190150635 +0100
@@ -34,7 +34,8 @@
 	    integer *, complex *, integer *, complex *, integer *, complex *, 
 	    integer *), clarft_(char *, char *
 , integer *, integer *, complex *, integer *, complex *, complex *
-, integer *), xerbla_(char *, integer *);
+, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwork, lwkopt;
