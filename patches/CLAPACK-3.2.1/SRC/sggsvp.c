--- ../../../CLAPACK-3.2.1/SRC/sggsvp.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sggsvp.c	2020-03-18 14:52:00.250153164 +0100
@@ -39,7 +39,9 @@
 	    integer *, integer *, real *, integer *, real *, real *, integer *
 ), sorm2r_(char *, char *, integer *, integer *, integer *, real *
 , integer *, real *, real *, integer *, real *, integer *), sormr2_(char *, char *, integer *, integer *, integer *, 
-	     real *, integer *, real *, real *, integer *, real *, integer *), xerbla_(char *, integer *), sgeqpf_(
+	     real *, integer *, real *, real *, integer *, real *, integer *);
+    void xerbla_(char *, integer *);
+    int sgeqpf_(
 	    integer *, integer *, real *, integer *, integer *, real *, real *
 , integer *), slacpy_(char *, integer *, integer *, real *, 
 	    integer *, real *, integer *), slaset_(char *, integer *, 
