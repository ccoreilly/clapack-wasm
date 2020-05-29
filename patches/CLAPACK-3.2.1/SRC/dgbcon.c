--- ../../../CLAPACK-3.2.1/SRC/dgbcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgbcon.c	2020-03-18 14:52:00.222151984 +0100
@@ -46,7 +46,8 @@
     extern integer idamax_(integer *, doublereal *, integer *);
     extern /* Subroutine */ int dlatbs_(char *, char *, char *, char *, 
 	    integer *, integer *, doublereal *, integer *, doublereal *, 
-	    doublereal *, doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
     doublereal ainvnm;
     logical onenrm;
     char normin[1];
