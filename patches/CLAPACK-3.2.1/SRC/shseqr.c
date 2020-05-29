--- ../../../CLAPACK-3.2.1/SRC/shseqr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/shseqr.c	2020-03-18 14:52:00.250153164 +0100
@@ -32,7 +32,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer i__;
@@ -44,8 +44,8 @@
     logical wantt, wantz;
     extern /* Subroutine */ int slaqr0_(logical *, logical *, integer *, 
 	    integer *, integer *, real *, integer *, real *, real *, integer *
-, integer *, real *, integer *, real *, integer *, integer *), 
-	    xerbla_(char *, integer *);
+, integer *, real *, integer *, real *, integer *, integer *);
+	void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int slahqr_(logical *, logical *, integer *, 
