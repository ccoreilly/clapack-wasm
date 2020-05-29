--- ../../../CLAPACK-3.2.1/SRC/dlasd6.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlasd6.c	2020-03-18 14:52:00.234152490 +0100
@@ -49,7 +49,7 @@
 	    integer *, integer *), dlamrg_(integer *, integer *, 
 	    doublereal *, integer *, integer *, integer *);
     integer isigma;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     doublereal orgnrm;
 
 
