--- ../../../CLAPACK-3.2.1/SRC/sgttrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgttrs.c	2020-03-18 14:52:00.250153164 +0100
@@ -28,7 +28,8 @@
     /* Local variables */
     integer j, jb, nb;
     extern /* Subroutine */ int sgtts2_(integer *, integer *, integer *, real 
-	    *, real *, real *, real *, integer *, real *, integer *), xerbla_(
+	    *, real *, real *, real *, integer *, real *, integer *);
+    void xerbla_(
 	    char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
