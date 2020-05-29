--- ../../../wasm-clapack/f2c_BLAS-3.8.0/sspr2.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///sspr2.c	2020-05-25 14:56:39.623788362 +0200
@@ -1,13 +1,13 @@
 /* sspr2.f -- translated by f2c (version 20191129).
    You must link the resulting object file with libf2c:
-	on Microsoft Windows system, link with libf2c.lib;
-	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
-	or, if you install libf2c.a in a standard place, with -lf2c -lm
-	-- in that order, at the end of the command line, as in
-		cc *.o -lf2c -lm
-	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,
+        on Microsoft Windows system, link with libf2c.lib;
+        on Linux or Unix systems, link with .../path/to/libf2c.a -lm
+        or, if you install libf2c.a in a standard place, with -lf2c -lm
+        -- in that order, at the end of the command line, as in
+                cc *.o -lf2c -lm
+        Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,
 
-		http://www.netlib.org/f2c/libf2c.zip
+                http://www.netlib.org/f2c/libf2c.zip
 */
 
 #include "f2c.h"
@@ -33,7 +33,6 @@
 /*       REAL AP(*),X(*),Y(*) */
 /*       .. */
 
-
 /* > \par Purpose: */
 /*  ============= */
 /* > */
@@ -154,183 +153,182 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int sspr2_(char *uplo, integer *n, real *alpha, real *x, 
-	integer *incx, real *y, integer *incy, real *ap, ftnlen uplo_len)
-{
-    /* System generated locals */
-    integer i__1, i__2;
-
-    /* Local variables */
-    integer i__, j, k, kk, ix, iy, jx, jy, kx, ky, info;
-    real temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
-
-
-/*  -- Reference BLAS level2 routine (version 3.7.0) -- */
-/*  -- Reference BLAS is a software package provided by Univ. of Tennessee,    -- */
-/*  -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..-- */
-/*     December 2016 */
-
-/*     .. Scalar Arguments .. */
-/*     .. */
-/*     .. Array Arguments .. */
-/*     .. */
-
-/*  ===================================================================== */
-
-/*     .. Parameters .. */
-/*     .. */
-/*     .. Local Scalars .. */
-/*     .. */
-/*     .. External Functions .. */
-/*     .. */
-/*     .. External Subroutines .. */
-/*     .. */
-
-/*     Test the input parameters. */
-
-    /* Parameter adjustments */
-    --ap;
-    --y;
-    --x;
-
-    /* Function Body */
-    info = 0;
-    if (! lsame_(uplo, "U", (ftnlen)1, (ftnlen)1) && ! lsame_(uplo, "L", (
-	    ftnlen)1, (ftnlen)1)) {
-	info = 1;
-    } else if (*n < 0) {
-	info = 2;
-    } else if (*incx == 0) {
-	info = 5;
-    } else if (*incy == 0) {
-	info = 7;
-    }
-    if (info != 0) {
-	xerbla_("SSPR2 ", &info, (ftnlen)6);
-	return 0;
+/* Subroutine */ void sspr2_(char *uplo, integer *n, real *alpha, real *x,
+                             integer *incx, real *y, integer *incy, real *ap) {
+  /* System generated locals */
+  integer i__1, i__2;
+
+  /* Local variables */
+  integer i__, j, k, kk, ix, iy, jx, jy, kx, ky, info;
+  real temp1, temp2;
+  extern  logical lsame_(char *, char *);
+  extern /* Subroutine */ void xerbla_(char *, integer *);
+
+  /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
+  /*  -- Reference BLAS is a software package provided by Univ. of Tennessee,
+   * -- */
+  /*  -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..--
+   */
+  /*     December 2016 */
+
+  /*     .. Scalar Arguments .. */
+  /*     .. */
+  /*     .. Array Arguments .. */
+  /*     .. */
+
+  /*  ===================================================================== */
+
+  /*     .. Parameters .. */
+  /*     .. */
+  /*     .. Local Scalars .. */
+  /*     .. */
+  /*     .. External Functions .. */
+  /*     .. */
+  /*     .. External Subroutines .. */
+  /*     .. */
+
+  /*     Test the input parameters. */
+
+  /* Parameter adjustments */
+  --ap;
+  --y;
+  --x;
+
+  /* Function Body */
+  info = 0;
+  if (!lsame_(uplo, "U") &&
+      !lsame_(uplo, "L")) {
+    info = 1;
+  } else if (*n < 0) {
+    info = 2;
+  } else if (*incx == 0) {
+    info = 5;
+  } else if (*incy == 0) {
+    info = 7;
+  }
+  if (info != 0) {
+    xerbla_("SSPR2 ", &info);
+    return;
+  }
+
+  /*     Quick return if possible. */
+
+  if (*n == 0 || *alpha == 0.f) {
+    return;
+  }
+
+  /*     Set up the start points in X and Y if the increments are not both */
+  /*     unity. */
+
+  if (*incx != 1 || *incy != 1) {
+    if (*incx > 0) {
+      kx = 1;
+    } else {
+      kx = 1 - (*n - 1) * *incx;
     }
-
-/*     Quick return if possible. */
-
-    if (*n == 0 || *alpha == 0.f) {
-	return 0;
+    if (*incy > 0) {
+      ky = 1;
+    } else {
+      ky = 1 - (*n - 1) * *incy;
     }
-
-/*     Set up the start points in X and Y if the increments are not both */
-/*     unity. */
-
-    if (*incx != 1 || *incy != 1) {
-	if (*incx > 0) {
-	    kx = 1;
-	} else {
-	    kx = 1 - (*n - 1) * *incx;
-	}
-	if (*incy > 0) {
-	    ky = 1;
-	} else {
-	    ky = 1 - (*n - 1) * *incy;
-	}
-	jx = kx;
-	jy = ky;
+    jx = kx;
+    jy = ky;
+  }
+
+  /*     Start the operations. In this version the elements of the array AP */
+  /*     are accessed sequentially with one pass through AP. */
+
+  kk = 1;
+  if (lsame_(uplo, "U")) {
+
+    /*        Form  A  when upper triangle is stored in AP. */
+
+    if (*incx == 1 && *incy == 1) {
+      i__1 = *n;
+      for (j = 1; j <= i__1; ++j) {
+        if (x[j] != 0.f || y[j] != 0.f) {
+          temp1 = *alpha * y[j];
+          temp2 = *alpha * x[j];
+          k = kk;
+          i__2 = j;
+          for (i__ = 1; i__ <= i__2; ++i__) {
+            ap[k] = ap[k] + x[i__] * temp1 + y[i__] * temp2;
+            ++k;
+            /* L10: */
+          }
+        }
+        kk += j;
+        /* L20: */
+      }
+    } else {
+      i__1 = *n;
+      for (j = 1; j <= i__1; ++j) {
+        if (x[jx] != 0.f || y[jy] != 0.f) {
+          temp1 = *alpha * y[jy];
+          temp2 = *alpha * x[jx];
+          ix = kx;
+          iy = ky;
+          i__2 = kk + j - 1;
+          for (k = kk; k <= i__2; ++k) {
+            ap[k] = ap[k] + x[ix] * temp1 + y[iy] * temp2;
+            ix += *incx;
+            iy += *incy;
+            /* L30: */
+          }
+        }
+        jx += *incx;
+        jy += *incy;
+        kk += j;
+        /* L40: */
+      }
     }
+  } else {
 
-/*     Start the operations. In this version the elements of the array AP */
-/*     are accessed sequentially with one pass through AP. */
-
-    kk = 1;
-    if (lsame_(uplo, "U", (ftnlen)1, (ftnlen)1)) {
+    /*        Form  A  when lower triangle is stored in AP. */
 
-/*        Form  A  when upper triangle is stored in AP. */
-
-	if (*incx == 1 && *incy == 1) {
-	    i__1 = *n;
-	    for (j = 1; j <= i__1; ++j) {
-		if (x[j] != 0.f || y[j] != 0.f) {
-		    temp1 = *alpha * y[j];
-		    temp2 = *alpha * x[j];
-		    k = kk;
-		    i__2 = j;
-		    for (i__ = 1; i__ <= i__2; ++i__) {
-			ap[k] = ap[k] + x[i__] * temp1 + y[i__] * temp2;
-			++k;
-/* L10: */
-		    }
-		}
-		kk += j;
-/* L20: */
-	    }
-	} else {
-	    i__1 = *n;
-	    for (j = 1; j <= i__1; ++j) {
-		if (x[jx] != 0.f || y[jy] != 0.f) {
-		    temp1 = *alpha * y[jy];
-		    temp2 = *alpha * x[jx];
-		    ix = kx;
-		    iy = ky;
-		    i__2 = kk + j - 1;
-		    for (k = kk; k <= i__2; ++k) {
-			ap[k] = ap[k] + x[ix] * temp1 + y[iy] * temp2;
-			ix += *incx;
-			iy += *incy;
-/* L30: */
-		    }
-		}
-		jx += *incx;
-		jy += *incy;
-		kk += j;
-/* L40: */
-	    }
-	}
+    if (*incx == 1 && *incy == 1) {
+      i__1 = *n;
+      for (j = 1; j <= i__1; ++j) {
+        if (x[j] != 0.f || y[j] != 0.f) {
+          temp1 = *alpha * y[j];
+          temp2 = *alpha * x[j];
+          k = kk;
+          i__2 = *n;
+          for (i__ = j; i__ <= i__2; ++i__) {
+            ap[k] = ap[k] + x[i__] * temp1 + y[i__] * temp2;
+            ++k;
+            /* L50: */
+          }
+        }
+        kk = kk + *n - j + 1;
+        /* L60: */
+      }
     } else {
-
-/*        Form  A  when lower triangle is stored in AP. */
-
-	if (*incx == 1 && *incy == 1) {
-	    i__1 = *n;
-	    for (j = 1; j <= i__1; ++j) {
-		if (x[j] != 0.f || y[j] != 0.f) {
-		    temp1 = *alpha * y[j];
-		    temp2 = *alpha * x[j];
-		    k = kk;
-		    i__2 = *n;
-		    for (i__ = j; i__ <= i__2; ++i__) {
-			ap[k] = ap[k] + x[i__] * temp1 + y[i__] * temp2;
-			++k;
-/* L50: */
-		    }
-		}
-		kk = kk + *n - j + 1;
-/* L60: */
-	    }
-	} else {
-	    i__1 = *n;
-	    for (j = 1; j <= i__1; ++j) {
-		if (x[jx] != 0.f || y[jy] != 0.f) {
-		    temp1 = *alpha * y[jy];
-		    temp2 = *alpha * x[jx];
-		    ix = jx;
-		    iy = jy;
-		    i__2 = kk + *n - j;
-		    for (k = kk; k <= i__2; ++k) {
-			ap[k] = ap[k] + x[ix] * temp1 + y[iy] * temp2;
-			ix += *incx;
-			iy += *incy;
-/* L70: */
-		    }
-		}
-		jx += *incx;
-		jy += *incy;
-		kk = kk + *n - j + 1;
-/* L80: */
-	    }
-	}
+      i__1 = *n;
+      for (j = 1; j <= i__1; ++j) {
+        if (x[jx] != 0.f || y[jy] != 0.f) {
+          temp1 = *alpha * y[jy];
+          temp2 = *alpha * x[jx];
+          ix = jx;
+          iy = jy;
+          i__2 = kk + *n - j;
+          for (k = kk; k <= i__2; ++k) {
+            ap[k] = ap[k] + x[ix] * temp1 + y[iy] * temp2;
+            ix += *incx;
+            iy += *incy;
+            /* L70: */
+          }
+        }
+        jx += *incx;
+        jy += *incy;
+        kk = kk + *n - j + 1;
+        /* L80: */
+      }
     }
+  }
 
-    return 0;
+  return;
 
-/*     End of SSPR2 . */
+  /*     End of SSPR2 . */
 
 } /* sspr2_ */
-
