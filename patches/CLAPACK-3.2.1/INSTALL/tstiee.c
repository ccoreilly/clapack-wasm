--- ../../../CLAPACK-3.2.1/INSTALL/tstiee.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///INSTALL/tstiee.c	2020-03-18 14:52:00.182150297 +0100
@@ -9,6 +9,7 @@
 
 		http://www.netlib.org/f2c/libf2c.zip
 */
+#include <string.h>
 
 #include "f2c.h"
 #include "blaswrap.h"
@@ -159,7 +160,7 @@
     integer ret_val;
 
     /* Builtin functions */
-    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);
+    /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
     integer s_cmp(char *, char *, ftnlen, ftnlen);
 
     /* Local variables */
