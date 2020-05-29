--- ../../../CLAPACK-3.2.1/SRC/dgegv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgegv.c	2020-03-18 14:52:00.222151984 +0100
@@ -74,8 +74,8 @@
 	    integer *), dtgevc_(char *, char *, 
 	    logical *, integer *, doublereal *, integer *, doublereal *, 
 	    integer *, doublereal *, integer *, doublereal *, integer *, 
-	    integer *, integer *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    integer *, integer *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     integer ijobvl, iright;
     logical ilimit;
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
