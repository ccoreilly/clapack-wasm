--- ../../../CLAPACK-3.2.1/SRC/spftrs.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/spftrs.c	2020-03-18 14:52:00.254153333 +0100
@@ -28,7 +28,8 @@
     extern logical lsame_(char *, char *);
     logical lower;
     extern /* Subroutine */ int stfsm_(char *, char *, char *, char *, char *, 
-	     integer *, integer *, real *, real *, real *, integer *), xerbla_(char *, integer *);
+	     integer *, integer *, real *, real *, real *, integer *);
+    void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2)                                    -- */
