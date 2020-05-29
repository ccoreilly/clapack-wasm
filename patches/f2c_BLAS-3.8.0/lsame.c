--- ../../../wasm-clapack/f2c_BLAS-3.8.0/lsame.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///lsame.c	2020-05-25 14:56:39.623788362 +0200
@@ -65,7 +65,7 @@
 /* > \ingroup aux_blas */
 
 /*  ===================================================================== */
-logical lsame_(char *ca, char *cb, ftnlen ca_len, ftnlen cb_len)
+logical lsame_(char *ca, char *cb)
 {
     /* System generated locals */
     logical ret_val;
