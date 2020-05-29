--- ../../../CLAPACK-3.2.1/SRC/slaed1.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/slaed1.c	2020-03-18 14:52:00.250153164 +0100
@@ -35,7 +35,8 @@
 , real *, real *, integer *, integer *, real *, real *, integer *)
 	    ;
     integer idlmda;
-    extern /* Subroutine */ int xerbla_(char *, integer *), slamrg_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  slamrg_(
 	    integer *, integer *, real *, integer *, integer *, integer *);
     integer coltyp;
 
