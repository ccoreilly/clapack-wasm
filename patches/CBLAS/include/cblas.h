--- ../../../to_patch/CBLAS/include/cblas.h	2020-05-25 12:23:51.697508874 +0200
+++ .//include/cblas.h	2020-03-18 14:52:00.342157043 +0100
@@ -38,12 +38,13 @@
                        const void *Y, const int incY, void *dotu);
 void   cblas_cdotc_sub(const int N, const void *X, const int incX,
                        const void *Y, const int incY, void *dotc);
+void   cblas_crotg(void *a, void *b, void *c, void *s);
 
 void   cblas_zdotu_sub(const int N, const void *X, const int incX,
                        const void *Y, const int incY, void *dotu);
 void   cblas_zdotc_sub(const int N, const void *X, const int incX,
                        const void *Y, const int incY, void *dotc);
-
+void   cblas_zrotg(void *a, void *b, void *c, void *s);
 
 /*
  * Functions having prefixes S D SC DZ
