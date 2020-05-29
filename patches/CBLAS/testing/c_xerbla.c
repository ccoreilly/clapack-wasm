--- ../../../to_patch/CBLAS/testing/c_xerbla.c	2020-05-25 12:23:51.725510023 +0200
+++ .//testing/c_xerbla.c	2020-03-18 14:52:00.354157549 +0100
@@ -1,7 +1,7 @@
 #include <stdio.h>
-#include <ctype.h>
 #include <stdarg.h>
 #include <string.h>
+// #include <ctype.h>
 #include "cblas.h"
 #include "cblas_test.h"
 
@@ -84,6 +84,13 @@
    } else cblas_lerr = FAILED;
 }
 
+
+int tolower(int c) {
+    if (c < 91 && c > 65)
+        return c + 32;
+    return c;
+}
+
 #ifdef F77_Char
 void F77_xerbla(F77_Char F77_srname, void *vinfo)
 #else
