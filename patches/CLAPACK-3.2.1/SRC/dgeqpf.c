--- ../../../CLAPACK-3.2.1/SRC/dgeqpf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgeqpf.c	2020-03-18 14:52:00.222151984 +0100
@@ -47,7 +47,8 @@
     extern doublereal dlamch_(char *);
     extern integer idamax_(integer *, doublereal *, integer *);
     extern /* Subroutine */ int dlarfp_(integer *, doublereal *, doublereal *, 
-	     integer *, doublereal *), xerbla_(char *, integer *);
+	     integer *, doublereal *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK deprecated driver routine (version 3.2) -- */
