--- ../../../to_patch/CBLAS/include/cblas_f77.h	2020-05-25 12:23:51.697508874 +0200
+++ .//include/cblas_f77.h	2020-03-18 14:52:00.342157043 +0100
@@ -698,4 +698,12 @@
 }
 #endif
 
+#ifndef doublecomplex
+   typedef struct { double r, i; } doublecomplex;
+#endif
+
+#ifndef complex
+   typedef struct { float r, i; } complex;
+#endif
+
 #endif /*  CBLAS_F77_H */
