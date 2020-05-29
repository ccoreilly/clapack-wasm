--- ../../../CLAPACK-3.2.1/SRC/dgglse.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgglse.c	2020-03-18 14:52:00.226152152 +0100
@@ -39,7 +39,8 @@
 	    *, doublereal *, integer *), dggrqf_(
 	    integer *, integer *, integer *, doublereal *, integer *, 
 	    doublereal *, doublereal *, integer *, doublereal *, doublereal *, 
-	     integer *, integer *), xerbla_(char *, integer *);
+	     integer *, integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer lwkmin;
