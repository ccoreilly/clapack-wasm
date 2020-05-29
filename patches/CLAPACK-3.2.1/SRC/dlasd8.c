--- ../../../CLAPACK-3.2.1/SRC/dlasd8.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dlasd8.c	2020-03-18 14:52:00.234152490 +0100
@@ -49,8 +49,8 @@
 	    doublereal *, integer *), dlascl_(char *, integer *, integer *, 
 	    doublereal *, doublereal *, integer *, integer *, doublereal *, 
 	    integer *, integer *), dlaset_(char *, integer *, integer 
-	    *, doublereal *, doublereal *, doublereal *, integer *), 
-	    xerbla_(char *, integer *);
+	    *, doublereal *, doublereal *, doublereal *, integer *);
+	void xerbla_(char *, integer *);
     doublereal dsigjp;
 
 
