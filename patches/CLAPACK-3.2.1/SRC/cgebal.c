--- ../../../CLAPACK-3.2.1/SRC/cgebal.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgebal.c	2020-03-18 14:52:00.186150466 +0100
@@ -39,7 +39,8 @@
     extern integer icamax_(integer *, complex *, integer *);
     extern doublereal slamch_(char *);
     extern /* Subroutine */ int csscal_(integer *, real *, complex *, integer 
-	    *), xerbla_(char *, integer *);
+	    *);
+    void xerbla_(char *, integer *);
     logical noconv;
 
 
