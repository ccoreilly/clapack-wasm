--- ../../../CLAPACK-3.2.1/SRC/ilaenv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ilaenv.c	2020-03-18 14:52:00.246152995 +0100
@@ -28,7 +28,7 @@
     integer ret_val;
 
     /* Builtin functions */
-    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);
+    /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
     integer s_cmp(char *, char *, ftnlen, ftnlen);
 
     /* Local variables */
