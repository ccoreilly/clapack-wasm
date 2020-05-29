--- ../../../CLAPACK-3.2.1/SRC/dsygst.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsygst.c	2020-03-18 14:52:00.242152827 +0100
@@ -46,7 +46,8 @@
 	    *, integer *, integer *), dsyr2k_(char *, char *, integer 
 	    *, integer *, doublereal *, doublereal *, integer *, doublereal *, 
 	     integer *, doublereal *, doublereal *, integer *)
-	    , xerbla_(char *, integer *);
+	    ;
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
