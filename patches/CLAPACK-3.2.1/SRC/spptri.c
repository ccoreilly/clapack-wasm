--- ../../../CLAPACK-3.2.1/SRC/spptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spptri.c	2020-03-18 14:52:00.254153333 +0100
@@ -34,8 +34,10 @@
     extern /* Subroutine */ int sscal_(integer *, real *, real *, integer *);
     logical upper;
     extern /* Subroutine */ int stpmv_(char *, char *, char *, integer *, 
-	    real *, real *, integer *), xerbla_(char *
-, integer *), stptri_(char *, char *, integer *, real *, 
+	    real *, real *, integer *);
+    void xerbla_(char *
+, integer *);
+    int stptri_(char *, char *, integer *, real *, 
 	    integer *);
 
 
