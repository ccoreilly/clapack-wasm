--- ../../../CLAPACK-3.2.1/SRC/dlaed7.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlaed7.c	2020-03-18 14:52:00.230152321 +0100
@@ -53,7 +53,8 @@
 	    ;
     integer idlmda;
     extern /* Subroutine */ int dlamrg_(integer *, integer *, doublereal *, 
-	    integer *, integer *, integer *), xerbla_(char *, integer *);
+	    integer *, integer *, integer *);
+    void xerbla_(char *, integer *);
     integer coltyp;
 
 
