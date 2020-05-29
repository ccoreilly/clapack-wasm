--- ../../../CLAPACK-3.2.1/SRC/cupgtr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cupgtr.c	2020-03-18 14:52:00.222151984 +0100
@@ -27,7 +27,8 @@
     extern /* Subroutine */ int cung2l_(integer *, integer *, integer *, 
 	    complex *, integer *, complex *, complex *, integer *), cung2r_(
 	    integer *, integer *, integer *, complex *, integer *, complex *, 
-	    complex *, integer *), xerbla_(char *, integer *);
+	    complex *, integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
