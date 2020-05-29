--- ../../../CLAPACK-3.2.1/BLAS/WRAP/cblas.h	2010-04-27 19:45:15.000000000 +0200
+++ CLAPACK-3.2.1///BLAS/WRAP/cblas.h	2020-03-18 14:52:00.174149960 +0100
@@ -1,17 +1,21 @@
 #ifndef CBLAS_H
 #define CBLAS_H
-
 #include <stddef.h>
 
-#define CBLAS_INDEX size_t 
+/*
+ * Enumerated and derived types
+ */
+#define CBLAS_INDEX size_t  /* this may vary between platforms */
 
-enum CBLAS_ORDER 	{CblasRowMajor=101, CblasColMajor=102};
-enum CBLAS_TRANSPOSE 	{CblasNoTrans=111, CblasTrans=112, CblasConjTrans=113};
-enum CBLAS_UPLO		{CblasUpper=121, CblasLower=122};
-enum CBLAS_DIAG		{CblasNonUnit=131, CblasUnit=132};
-enum CBLAS_SIDE		{CblasLeft=141, CblasRight=142};
+enum CBLAS_ORDER {CblasRowMajor=101, CblasColMajor=102};
+enum CBLAS_TRANSPOSE {CblasNoTrans=111, CblasTrans=112, CblasConjTrans=113};
+enum CBLAS_UPLO {CblasUpper=121, CblasLower=122};
+enum CBLAS_DIAG {CblasNonUnit=131, CblasUnit=132};
+enum CBLAS_SIDE {CblasLeft=141, CblasRight=142};
 
-int cblas_errprn(int ierr, int info, char *form, ...);
+#ifdef __cplusplus
+extern "C" {
+#endif
 
 /*
  * ===========================================================================
@@ -26,6 +30,7 @@
                   const float  *Y, const int incY);
 double cblas_ddot(const int N, const double *X, const int incX,
                   const double *Y, const int incY);
+
 /*
  * Functions having prefixes Z and C only
  */
@@ -33,12 +38,13 @@
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
@@ -64,73 +70,63 @@
 CBLAS_INDEX cblas_icamax(const int N, const void   *X, const int incX);
 CBLAS_INDEX cblas_izamax(const int N, const void   *X, const int incX);
 
-
-/*
- * ===========================================================================
- * Prototypes for level 0 BLAS routines
- * ===========================================================================
- */
-void cblas_srotg(float a, float b, float c, float s);
-void cblas_crotg(complex a, complex b, complex c, float s);
-void cblas_drotg(double a, double b, double c, double s);
-void cblas_zrotg(doublecomplex a, doublecomplex b, doublecomplex c, double s);
-
-
 /*
  * ===========================================================================
  * Prototypes for level 1 BLAS routines
  * ===========================================================================
  */
 
-/*
+/* 
  * Routines with standard 4 prefixes (s, d, c, z)
  */
-void cblas_sswap(const int N, float *X, const int incX,
+void cblas_sswap(const int N, float *X, const int incX, 
                  float *Y, const int incY);
-void cblas_scopy(const int N, const float *X, const int incX,
+void cblas_scopy(const int N, const float *X, const int incX, 
                  float *Y, const int incY);
 void cblas_saxpy(const int N, const float alpha, const float *X,
                  const int incX, float *Y, const int incY);
 
-void cblas_dswap(const int N, double *X, const int incX,
+void cblas_dswap(const int N, double *X, const int incX, 
                  double *Y, const int incY);
-void cblas_dcopy(const int N, const double *X, const int incX,
+void cblas_dcopy(const int N, const double *X, const int incX, 
                  double *Y, const int incY);
 void cblas_daxpy(const int N, const double alpha, const double *X,
                  const int incX, double *Y, const int incY);
 
-void cblas_cswap(const int N, void *X, const int incX,
+void cblas_cswap(const int N, void *X, const int incX, 
                  void *Y, const int incY);
-void cblas_ccopy(const int N, const void *X, const int incX,
+void cblas_ccopy(const int N, const void *X, const int incX, 
                  void *Y, const int incY);
 void cblas_caxpy(const int N, const void *alpha, const void *X,
                  const int incX, void *Y, const int incY);
 
-void cblas_zswap(const int N, void *X, const int incX,
+void cblas_zswap(const int N, void *X, const int incX, 
                  void *Y, const int incY);
-void cblas_zcopy(const int N, const void *X, const int incX,
+void cblas_zcopy(const int N, const void *X, const int incX, 
                  void *Y, const int incY);
 void cblas_zaxpy(const int N, const void *alpha, const void *X,
                  const int incX, void *Y, const int incY);
 
 
-/*
+/* 
  * Routines with S and D prefix only
  */
+void cblas_srotg(float *a, float *b, float *c, float *s);
 void cblas_srotmg(float *d1, float *d2, float *b1, const float b2, float *P);
 void cblas_srot(const int N, float *X, const int incX,
                 float *Y, const int incY, const float c, const float s);
 void cblas_srotm(const int N, float *X, const int incX,
                 float *Y, const int incY, const float *P);
 
+void cblas_drotg(double *a, double *b, double *c, double *s);
 void cblas_drotmg(double *d1, double *d2, double *b1, const double b2, double *P);
 void cblas_drot(const int N, double *X, const int incX,
-                double *Y, const int incY, const double c, const double s);
+                double *Y, const int incY, const double c, const double  s);
 void cblas_drotm(const int N, double *X, const int incX,
                 double *Y, const int incY, const double *P);
 
 
-/*
+/* 
  * Routines with S D C Z CS and ZD prefixes
  */
 void cblas_sscal(const int N, const float alpha, float *X, const int incX);
@@ -146,266 +142,266 @@
  * ===========================================================================
  */
 
-/*
+/* 
  * Routines with standard 4 prefixes (S, D, C, Z)
  */
-void cblas_sgemv(const enum CBLAS_ORDER Order,
+void cblas_sgemv(const enum CBLAS_ORDER order,
                  const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                  const float alpha, const float *A, const int lda,
                  const float *X, const int incX, const float beta,
                  float *Y, const int incY);
-void cblas_sgbmv(const enum CBLAS_ORDER Order,
+void cblas_sgbmv(const enum CBLAS_ORDER order,
                  const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                  const int KL, const int KU, const float alpha,
                  const float *A, const int lda, const float *X,
                  const int incX, const float beta, float *Y, const int incY);
-void cblas_strmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_strmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
-                 const int N, const float *A, const int lda,
+                 const int N, const float *A, const int lda, 
                  float *X, const int incX);
-void cblas_stbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_stbmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
-                 const int N, const int K, const float *A, const int lda,
+                 const int N, const int K, const float *A, const int lda, 
                  float *X, const int incX);
-void cblas_stpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_stpmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const float *Ap, float *X, const int incX);
-void cblas_strsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_strsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const float *A, const int lda, float *X,
                  const int incX);
-void cblas_stbsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_stbsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const int K, const float *A, const int lda,
                  float *X, const int incX);
-void cblas_stpsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_stpsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const float *Ap, float *X, const int incX);
 
-void cblas_dgemv(const enum CBLAS_ORDER Order,
+void cblas_dgemv(const enum CBLAS_ORDER order,
                  const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                  const double alpha, const double *A, const int lda,
                  const double *X, const int incX, const double beta,
                  double *Y, const int incY);
-void cblas_dgbmv(const enum CBLAS_ORDER Order,
+void cblas_dgbmv(const enum CBLAS_ORDER order,
                  const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                  const int KL, const int KU, const double alpha,
                  const double *A, const int lda, const double *X,
                  const int incX, const double beta, double *Y, const int incY);
-void cblas_dtrmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dtrmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
-                 const int N, const double *A, const int lda,
+                 const int N, const double *A, const int lda, 
                  double *X, const int incX);
-void cblas_dtbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dtbmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
-                 const int N, const int K, const double *A, const int lda,
+                 const int N, const int K, const double *A, const int lda, 
                  double *X, const int incX);
-void cblas_dtpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dtpmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const double *Ap, double *X, const int incX);
-void cblas_dtrsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dtrsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const double *A, const int lda, double *X,
                  const int incX);
-void cblas_dtbsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dtbsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const int K, const double *A, const int lda,
                  double *X, const int incX);
-void cblas_dtpsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dtpsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const double *Ap, double *X, const int incX);
 
-void cblas_cgemv(const enum CBLAS_ORDER Order,
+void cblas_cgemv(const enum CBLAS_ORDER order,
                  const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                  const void *alpha, const void *A, const int lda,
                  const void *X, const int incX, const void *beta,
                  void *Y, const int incY);
-void cblas_cgbmv(const enum CBLAS_ORDER Order,
+void cblas_cgbmv(const enum CBLAS_ORDER order,
                  const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                  const int KL, const int KU, const void *alpha,
                  const void *A, const int lda, const void *X,
                  const int incX, const void *beta, void *Y, const int incY);
-void cblas_ctrmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ctrmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
-                 const int N, const void *A, const int lda,
+                 const int N, const void *A, const int lda, 
                  void *X, const int incX);
-void cblas_ctbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ctbmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
-                 const int N, const int K, const void *A, const int lda,
+                 const int N, const int K, const void *A, const int lda, 
                  void *X, const int incX);
-void cblas_ctpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ctpmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const void *Ap, void *X, const int incX);
-void cblas_ctrsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ctrsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const void *A, const int lda, void *X,
                  const int incX);
-void cblas_ctbsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ctbsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const int K, const void *A, const int lda,
                  void *X, const int incX);
-void cblas_ctpsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ctpsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const void *Ap, void *X, const int incX);
 
-void cblas_zgemv(const enum CBLAS_ORDER Order,
+void cblas_zgemv(const enum CBLAS_ORDER order,
                  const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                  const void *alpha, const void *A, const int lda,
                  const void *X, const int incX, const void *beta,
                  void *Y, const int incY);
-void cblas_zgbmv(const enum CBLAS_ORDER Order,
+void cblas_zgbmv(const enum CBLAS_ORDER order,
                  const enum CBLAS_TRANSPOSE TransA, const int M, const int N,
                  const int KL, const int KU, const void *alpha,
                  const void *A, const int lda, const void *X,
                  const int incX, const void *beta, void *Y, const int incY);
-void cblas_ztrmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ztrmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
-                 const int N, const void *A, const int lda,
+                 const int N, const void *A, const int lda, 
                  void *X, const int incX);
-void cblas_ztbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ztbmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
-                 const int N, const int K, const void *A, const int lda,
+                 const int N, const int K, const void *A, const int lda, 
                  void *X, const int incX);
-void cblas_ztpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ztpmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const void *Ap, void *X, const int incX);
-void cblas_ztrsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ztrsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const void *A, const int lda, void *X,
                  const int incX);
-void cblas_ztbsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ztbsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const int K, const void *A, const int lda,
                  void *X, const int incX);
-void cblas_ztpsv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ztpsv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const enum CBLAS_TRANSPOSE TransA, const enum CBLAS_DIAG Diag,
                  const int N, const void *Ap, void *X, const int incX);
 
 
-/*
+/* 
  * Routines with S and D prefixes only
  */
-void cblas_ssymv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ssymv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const float alpha, const float *A,
                  const int lda, const float *X, const int incX,
                  const float beta, float *Y, const int incY);
-void cblas_ssbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ssbmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const int K, const float alpha, const float *A,
                  const int lda, const float *X, const int incX,
                  const float beta, float *Y, const int incY);
-void cblas_sspmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_sspmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const float alpha, const float *Ap,
                  const float *X, const int incX,
                  const float beta, float *Y, const int incY);
-void cblas_sger(const enum CBLAS_ORDER Order, const int M, const int N,
+void cblas_sger(const enum CBLAS_ORDER order, const int M, const int N,
                 const float alpha, const float *X, const int incX,
                 const float *Y, const int incY, float *A, const int lda);
-void cblas_ssyr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ssyr(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const float alpha, const float *X,
                 const int incX, float *A, const int lda);
-void cblas_sspr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_sspr(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const float alpha, const float *X,
                 const int incX, float *Ap);
-void cblas_ssyr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_ssyr2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const float alpha, const float *X,
                 const int incX, const float *Y, const int incY, float *A,
                 const int lda);
-void cblas_sspr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_sspr2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const float alpha, const float *X,
                 const int incX, const float *Y, const int incY, float *A);
 
-void cblas_dsymv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dsymv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const double alpha, const double *A,
                  const int lda, const double *X, const int incX,
                  const double beta, double *Y, const int incY);
-void cblas_dsbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dsbmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const int K, const double alpha, const double *A,
                  const int lda, const double *X, const int incX,
                  const double beta, double *Y, const int incY);
-void cblas_dspmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dspmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const double alpha, const double *Ap,
                  const double *X, const int incX,
                  const double beta, double *Y, const int incY);
-void cblas_dger(const enum CBLAS_ORDER Order, const int M, const int N,
+void cblas_dger(const enum CBLAS_ORDER order, const int M, const int N,
                 const double alpha, const double *X, const int incX,
                 const double *Y, const int incY, double *A, const int lda);
-void cblas_dsyr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dsyr(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const double alpha, const double *X,
                 const int incX, double *A, const int lda);
-void cblas_dspr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dspr(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const double alpha, const double *X,
                 const int incX, double *Ap);
-void cblas_dsyr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dsyr2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const double alpha, const double *X,
                 const int incX, const double *Y, const int incY, double *A,
                 const int lda);
-void cblas_dspr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_dspr2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const double alpha, const double *X,
                 const int incX, const double *Y, const int incY, double *A);
 
 
-/*
+/* 
  * Routines with C and Z prefixes only
  */
-void cblas_chemv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_chemv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const void *alpha, const void *A,
                  const int lda, const void *X, const int incX,
                  const void *beta, void *Y, const int incY);
-void cblas_chbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_chbmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const int K, const void *alpha, const void *A,
                  const int lda, const void *X, const int incX,
                  const void *beta, void *Y, const int incY);
-void cblas_chpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_chpmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const void *alpha, const void *Ap,
                  const void *X, const int incX,
                  const void *beta, void *Y, const int incY);
-void cblas_cgeru(const enum CBLAS_ORDER Order, const int M, const int N,
+void cblas_cgeru(const enum CBLAS_ORDER order, const int M, const int N,
                  const void *alpha, const void *X, const int incX,
                  const void *Y, const int incY, void *A, const int lda);
-void cblas_cgerc(const enum CBLAS_ORDER Order, const int M, const int N,
+void cblas_cgerc(const enum CBLAS_ORDER order, const int M, const int N,
                  const void *alpha, const void *X, const int incX,
                  const void *Y, const int incY, void *A, const int lda);
-void cblas_cher(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_cher(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const float alpha, const void *X, const int incX,
                 void *A, const int lda);
-void cblas_chpr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_chpr(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const float alpha, const void *X,
                 const int incX, void *A);
-void cblas_cher2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo, const int N,
+void cblas_cher2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo, const int N,
                 const void *alpha, const void *X, const int incX,
                 const void *Y, const int incY, void *A, const int lda);
-void cblas_chpr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo, const int N,
+void cblas_chpr2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo, const int N,
                 const void *alpha, const void *X, const int incX,
                 const void *Y, const int incY, void *Ap);
 
-void cblas_zhemv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_zhemv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const void *alpha, const void *A,
                  const int lda, const void *X, const int incX,
                  const void *beta, void *Y, const int incY);
-void cblas_zhbmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_zhbmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const int K, const void *alpha, const void *A,
                  const int lda, const void *X, const int incX,
                  const void *beta, void *Y, const int incY);
-void cblas_zhpmv(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_zhpmv(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                  const int N, const void *alpha, const void *Ap,
                  const void *X, const int incX,
                  const void *beta, void *Y, const int incY);
-void cblas_zgeru(const enum CBLAS_ORDER Order, const int M, const int N,
+void cblas_zgeru(const enum CBLAS_ORDER order, const int M, const int N,
                  const void *alpha, const void *X, const int incX,
                  const void *Y, const int incY, void *A, const int lda);
-void cblas_zgerc(const enum CBLAS_ORDER Order, const int M, const int N,
+void cblas_zgerc(const enum CBLAS_ORDER order, const int M, const int N,
                  const void *alpha, const void *X, const int incX,
                  const void *Y, const int incY, void *A, const int lda);
-void cblas_zher(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_zher(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const double alpha, const void *X, const int incX,
                 void *A, const int lda);
-void cblas_zhpr(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo,
+void cblas_zhpr(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
                 const int N, const double alpha, const void *X,
                 const int incX, void *A);
-void cblas_zher2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo, const int N,
+void cblas_zher2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo, const int N,
                 const void *alpha, const void *X, const int incX,
                 const void *Y, const int incY, void *A, const int lda);
-void cblas_zhpr2(const enum CBLAS_ORDER Order, const enum CBLAS_UPLO Uplo, const int N,
+void cblas_zhpr2(const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo, const int N,
                 const void *alpha, const void *X, const int incX,
                 const void *Y, const int incY, void *Ap);
 
@@ -415,7 +411,7 @@
  * ===========================================================================
  */
 
-/*
+/* 
  * Routines with standard 4 prefixes (S, D, C, Z)
  */
 void cblas_sgemm(const enum CBLAS_ORDER Order, const enum CBLAS_TRANSPOSE TransA,
@@ -539,7 +535,7 @@
                  void *B, const int ldb);
 
 
-/*
+/* 
  * Routines with prefixes C and Z only
  */
 void cblas_chemm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
@@ -556,6 +552,7 @@
                   const void *alpha, const void *A, const int lda,
                   const void *B, const int ldb, const float beta,
                   void *C, const int ldc);
+
 void cblas_zhemm(const enum CBLAS_ORDER Order, const enum CBLAS_SIDE Side,
                  const enum CBLAS_UPLO Uplo, const int M, const int N,
                  const void *alpha, const void *A, const int lda,
@@ -571,7 +568,9 @@
                   const void *B, const int ldb, const double beta,
                   void *C, const int ldc);
 
-int cblas_errprn(int ierr, int info, char *form, ...);
-
+void cblas_xerbla(int p, const char *rout, const char *form, ...);
 
+#ifdef __cplusplus
+}
+#endif
 #endif
