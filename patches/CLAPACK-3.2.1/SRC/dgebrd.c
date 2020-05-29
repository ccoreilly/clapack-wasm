--- ../../../CLAPACK-3.2.1/SRC/dgebrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgebrd.c	2020-03-18 14:52:00.222151984 +0100
@@ -41,7 +41,8 @@
 	     doublereal *, integer *), dlabrd_(integer *, integer *, integer *
 , doublereal *, integer *, doublereal *, doublereal *, doublereal 
 	    *, doublereal *, doublereal *, integer *, doublereal *, integer *)
-	    , xerbla_(char *, integer *);
+	    ;
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer ldwrkx, ldwrky, lwkopt;
