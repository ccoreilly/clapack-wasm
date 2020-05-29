--- ../../../CLAPACK-3.2.1/SRC/dormr3.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dormr3.c	2020-03-18 14:52:00.238152659 +0100
@@ -26,7 +26,8 @@
     extern logical lsame_(char *, char *);
     extern /* Subroutine */ int dlarz_(char *, integer *, integer *, integer *
 , doublereal *, integer *, doublereal *, doublereal *, integer *, 
-	    doublereal *), xerbla_(char *, integer *);
+	    doublereal *);
+    void xerbla_(char *, integer *);
     logical notran;
 
 
