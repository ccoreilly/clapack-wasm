--- ../../../CLAPACK-3.2.1/SRC/cunmhr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cunmhr.c	2020-03-18 14:52:00.218151815 +0100
@@ -30,14 +30,14 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer i1, i2, nb, mi, nh, ni, nq, nw;
     logical left;
     extern logical lsame_(char *, char *);
     integer iinfo;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int cunmqr_(char *, char *, integer *, integer *, 
