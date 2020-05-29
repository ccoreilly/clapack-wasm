--- ../../../CLAPACK-3.2.1/SRC/dsycon.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsycon.c	2020-03-18 14:52:00.242152827 +0100
@@ -30,7 +30,8 @@
     integer isave[3];
     logical upper;
     extern /* Subroutine */ int dlacn2_(integer *, doublereal *, doublereal *, 
-	     integer *, doublereal *, integer *, integer *), xerbla_(char *, 
+	     integer *, doublereal *, integer *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     doublereal ainvnm;
     extern /* Subroutine */ int dsytrs_(char *, integer *, integer *, 
