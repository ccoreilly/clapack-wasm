--- ../../../to_patch/CBLAS//src/cblas_zrotg.c	1970-01-01 01:00:00.000000000 +0100
+++ ./src/cblas_zrotg.c	2020-03-18 14:52:00.350157380 +0100
@@ -0,0 +1,10 @@
+/* Missing cblas_crotg wrapper
+ * author: Mhu
+ */
+
+#include "cblas.h"
+#include "cblas_f77.h"
+void cblas_zrotg(void *a, void *b, void *c, void *s) {
+   extern void zrotg_(complex *ca, complex *cb, float *C, complex *S);
+   zrotg_(a, b, c, s); 
+}
