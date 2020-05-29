--- ../../../CLAPACK-3.2.1/SRC/cggev.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cggev.c	2020-03-18 14:52:00.190150635 +0100
@@ -66,7 +66,8 @@
 	    *, integer *, complex *, integer *), claset_(char *, 
 	    integer *, integer *, complex *, complex *, complex *, integer *), ctgevc_(char *, char *, logical *, integer *, complex *, 
 	    integer *, complex *, integer *, complex *, integer *, complex *, 
-	    integer *, integer *, integer *, complex *, real *, integer *), xerbla_(char *, integer *);
+	    integer *, integer *, integer *, complex *, real *, integer *);
+    void xerbla_(char *, integer *);
     logical ldumma[1];
     char chtemp[1];
     real bignum;
