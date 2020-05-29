--- ../../../to_patch/CBLAS//src/cblas_crotg.c	1970-01-01 01:00:00.000000000 +0100
+++ ./src/cblas_crotg.c	2020-03-18 14:52:00.346157211 +0100
@@ -0,0 +1,10 @@
+/* Missing cblas_crotg wrapper
+ * author: Mhu
+ */
+
+#include "cblas.h"
+#include "cblas_f77.h"
+void cblas_crotg(void *a, void *b, void *c, void *s) {
+   extern void crotg_(complex *ca, complex *cb, float *C, complex *S);
+   crotg_(a, b, c, s); 
+}
