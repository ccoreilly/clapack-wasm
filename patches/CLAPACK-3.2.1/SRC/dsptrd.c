--- ../../../CLAPACK-3.2.1/SRC/dsptrd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsptrd.c	2020-03-18 14:52:00.242152827 +0100
@@ -40,7 +40,8 @@
 	     doublereal *, integer *);
     logical upper;
     extern /* Subroutine */ int dlarfg_(integer *, doublereal *, doublereal *, 
-	     integer *, doublereal *), xerbla_(char *, integer *);
+	     integer *, doublereal *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
