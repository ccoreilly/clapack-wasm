--- ../../../CLAPACK-3.2.1/SRC/slaed7.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slaed7.c	2020-03-18 14:52:00.250153164 +0100
@@ -50,7 +50,8 @@
 	    integer *, integer *, integer *, real *, real *, integer *, real *
 , real *, integer *);
     integer idlmda;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slamrg_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slamrg_(
 	    integer *, integer *, real *, integer *, integer *, integer *);
     integer coltyp;
 
