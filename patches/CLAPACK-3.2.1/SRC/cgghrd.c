--- ../../../CLAPACK-3.2.1/SRC/cgghrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgghrd.c	2020-03-18 14:52:00.190150635 +0100
@@ -43,7 +43,8 @@
     complex ctemp;
     extern /* Subroutine */ int claset_(char *, integer *, integer *, complex 
 	    *, complex *, complex *, integer *), clartg_(complex *, 
-	    complex *, real *, complex *, complex *), xerbla_(char *, integer 
+	    complex *, real *, complex *, complex *);
+    void xerbla_(char *, integer 
 	    *);
     integer icompq, icompz;
 
