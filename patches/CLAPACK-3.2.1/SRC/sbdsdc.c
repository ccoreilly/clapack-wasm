--- ../../../CLAPACK-3.2.1/SRC/sbdsdc.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sbdsdc.c	2020-03-18 14:52:00.246152995 +0100
@@ -55,8 +55,8 @@
     extern /* Subroutine */ int slasda_(integer *, integer *, integer *, 
 	    integer *, real *, real *, real *, integer *, real *, integer *, 
 	    real *, real *, real *, real *, integer *, integer *, integer *, 
-	    integer *, real *, real *, real *, real *, integer *, integer *), 
-	    xerbla_(char *, integer *);
+	    integer *, real *, real *, real *, real *, integer *, integer *);
+	void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int slascl_(char *, integer *, integer *, real *, 
