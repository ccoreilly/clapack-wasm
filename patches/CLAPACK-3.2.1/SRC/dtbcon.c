--- ../../../CLAPACK-3.2.1/SRC/dtbcon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtbcon.c	2020-03-18 14:52:00.242152827 +0100
@@ -43,7 +43,8 @@
 	    doublereal *, integer *, doublereal *);
     extern /* Subroutine */ int dlatbs_(char *, char *, char *, char *, 
 	    integer *, integer *, doublereal *, integer *, doublereal *, 
-	    doublereal *, doublereal *, integer *), xerbla_(char *, integer *);
+	    doublereal *, doublereal *, integer *);
+    void xerbla_(char *, integer *);
     doublereal ainvnm;
     logical onenrm;
     char normin[1];
