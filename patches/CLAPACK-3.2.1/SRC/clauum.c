--- ../../../CLAPACK-3.2.1/SRC/clauum.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/clauum.c	2020-03-18 14:52:00.210151478 +0100
@@ -39,7 +39,8 @@
 	    integer *);
     logical upper;
     extern /* Subroutine */ int clauu2_(char *, integer *, complex *, integer 
-	    *, integer *), xerbla_(char *, integer *);
+	    *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
