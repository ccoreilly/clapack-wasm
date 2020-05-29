--- ../../../CLAPACK-3.2.1/SRC/dgbrfsx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgbrfsx.c	2020-03-18 14:52:00.222151984 +0100
@@ -64,7 +64,8 @@
 	    doublereal *, integer *, doublereal *), dlamch_(char *);
     extern /* Subroutine */ int dgbcon_(char *, integer *, integer *, integer 
 	    *, doublereal *, integer *, integer *, doublereal *, doublereal *, 
-	     doublereal *, integer *, integer *), xerbla_(char *, 
+	     doublereal *, integer *, integer *);
+    void xerbla_(char *, 
 	    integer *);
     logical colequ, notran, rowequ;
     extern integer ilaprec_(char *);
