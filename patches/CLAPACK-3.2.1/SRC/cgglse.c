--- ../../../CLAPACK-3.2.1/SRC/cgglse.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgglse.c	2020-03-18 14:52:00.190150635 +0100
@@ -36,7 +36,8 @@
 	    integer *, complex *, integer *), ctrmv_(char *, char *, char *, 
 	    integer *, complex *, integer *, complex *, integer *), cggrqf_(integer *, integer *, integer *, complex 
 	    *, integer *, complex *, complex *, integer *, complex *, complex 
-	    *, integer *, integer *), xerbla_(char *, integer *);
+	    *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer lwkmin;
