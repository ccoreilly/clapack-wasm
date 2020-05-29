--- ../../../CLAPACK-3.2.1/SRC/ctgsna.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ctgsna.c	2020-03-18 14:52:00.218151815 +0100
@@ -62,7 +62,8 @@
 	    *, integer *, complex *, integer *), ctgexc_(logical *, 
 	    logical *, integer *, complex *, integer *, complex *, integer *, 
 	    complex *, integer *, complex *, integer *, integer *, integer *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     real bignum;
     logical wantbh, wantdf, somcon;
     extern /* Subroutine */ int ctgsyl_(char *, integer *, integer *, integer 
