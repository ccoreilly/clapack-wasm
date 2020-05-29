--- ../../../CLAPACK-3.2.1/SRC/sgegv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgegv.c	2020-03-18 14:52:00.246152995 +0100
@@ -59,7 +59,8 @@
     char chtemp[1];
     logical ldumma[1];
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
-	    real *, integer *, integer *, real *, integer *, integer *), xerbla_(char *, integer *);
+	    real *, integer *, integer *, real *, integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ijobvl, iright;
