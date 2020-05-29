--- ../../../CLAPACK-3.2.1/SRC/stgsy2.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/stgsy2.c	2020-03-18 14:52:00.258153501 +0100
@@ -52,8 +52,10 @@
 	    integer *, integer *);
     real scaloc;
     extern /* Subroutine */ int slatdf_(integer *, integer *, real *, integer 
-	    *, real *, real *, real *, integer *, integer *), xerbla_(char *, 
-	    integer *), slaset_(char *, integer *, integer *, real *, 
+	    *, real *, real *, real *, integer *, integer *);
+    void xerbla_(char *, 
+	    integer *);
+    int slaset_(char *, integer *, integer *, real *, 
 	    real *, real *, integer *);
     logical notran;
 
