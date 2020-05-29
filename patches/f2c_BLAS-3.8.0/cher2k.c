--- ../../../wasm-clapack/f2c_BLAS-3.8.0/cher2k.c	2020-05-25 14:11:58.209372837 +0200
+++ f2c_BLAS-3.8.0///cher2k.c	2020-05-25 14:56:39.619788197 +0200
@@ -1,13 +1,13 @@
 /* cher2k.f -- translated by f2c (version 20191129).
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
@@ -34,7 +34,6 @@
 /*       COMPLEX A(LDA,*),B(LDB,*),C(LDC,*) */
 /*       .. */
 
-
 /* > \par Purpose: */
 /*  ============= */
 /* > */
@@ -209,538 +208,485 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int cher2k_(char *uplo, char *trans, integer *n, integer *k, 
-	complex *alpha, complex *a, integer *lda, complex *b, integer *ldb, 
-	real *beta, complex *c__, integer *ldc, ftnlen uplo_len, ftnlen 
-	trans_len)
-{
-    /* System generated locals */
-    integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2, 
-	    i__3, i__4, i__5, i__6, i__7;
-    real r__1;
-    complex q__1, q__2, q__3, q__4, q__5, q__6;
-
-    /* Builtin functions */
-    void r_cnjg(complex *, complex *);
-
-    /* Local variables */
-    integer i__, j, l, info;
-    complex temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
-    integer nrowa;
-    logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
-
-
-/*  -- Reference BLAS level3 routine (version 3.7.0) -- */
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
-/*     .. External Functions .. */
-/*     .. */
-/*     .. External Subroutines .. */
-/*     .. */
-/*     .. Intrinsic Functions .. */
-/*     .. */
-/*     .. Local Scalars .. */
-/*     .. */
-/*     .. Parameters .. */
-/*     .. */
-
-/*     Test the input parameters. */
-
-    /* Parameter adjustments */
-    a_dim1 = *lda;
-    a_offset = 1 + a_dim1;
-    a -= a_offset;
-    b_dim1 = *ldb;
-    b_offset = 1 + b_dim1;
-    b -= b_offset;
-    c_dim1 = *ldc;
-    c_offset = 1 + c_dim1;
-    c__ -= c_offset;
-
-    /* Function Body */
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
-	nrowa = *n;
+/* Subroutine */ void cher2k_(char *uplo, char *trans, integer *n, integer *k,
+                              complex *alpha, complex *a, integer *lda,
+                              complex *b, integer *ldb, real *beta, complex *c__,
+                              integer *ldc) {
+  /* System generated locals */
+  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2,
+      i__3, i__4, i__5, i__6, i__7;
+  real r__1;
+  complex q__1, q__2, q__3, q__4, q__5, q__6;
+
+  /* Builtin functions */
+  void r_cnjg(complex *, complex *);
+
+  /* Local variables */
+  integer i__, j, l, info;
+  complex temp1, temp2;
+  extern  logical lsame_(char *, char *);
+  integer nrowa;
+  logical upper;
+  extern /* Subroutine */ void xerbla_(char *, integer *);
+
+  /*  -- Reference BLAS level3 routine (version 3.7.0) -- */
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
+  /*     .. External Functions .. */
+  /*     .. */
+  /*     .. External Subroutines .. */
+  /*     .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. */
+  /*     .. Local Scalars .. */
+  /*     .. */
+  /*     .. Parameters .. */
+  /*     .. */
+
+  /*     Test the input parameters. */
+
+  /* Parameter adjustments */
+  a_dim1 = *lda;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+  b_dim1 = *ldb;
+  b_offset = 1 + b_dim1;
+  b -= b_offset;
+  c_dim1 = *ldc;
+  c_offset = 1 + c_dim1;
+  c__ -= c_offset;
+
+  /* Function Body */
+  if (lsame_(trans, "N")) {
+    nrowa = *n;
+  } else {
+    nrowa = *k;
+  }
+  upper = lsame_(uplo, "U");
+
+  info = 0;
+  if (!upper && !lsame_(uplo, "L")) {
+    info = 1;
+  } else if (!lsame_(trans, "N") &&
+             !lsame_(trans, "C")) {
+    info = 2;
+  } else if (*n < 0) {
+    info = 3;
+  } else if (*k < 0) {
+    info = 4;
+  } else if (*lda < max(1, nrowa)) {
+    info = 7;
+  } else if (*ldb < max(1, nrowa)) {
+    info = 9;
+  } else if (*ldc < max(1, *n)) {
+    info = 12;
+  }
+  if (info != 0) {
+    xerbla_("CHER2K", &info);
+    return;
+  }
+
+  /*     Quick return if possible. */
+
+  if (*n == 0 ||
+      (alpha->r == 0.f && alpha->i == 0.f || *k == 0) && *beta == 1.f) {
+    return;
+  }
+
+  /*     And when  alpha.eq.zero. */
+
+  if (alpha->r == 0.f && alpha->i == 0.f) {
+    if (upper) {
+      if (*beta == 0.f) {
+        i__1 = *n;
+        for (j = 1; j <= i__1; ++j) {
+          i__2 = j;
+          for (i__ = 1; i__ <= i__2; ++i__) {
+            i__3 = i__ + j * c_dim1;
+            c__[i__3].r = 0.f, c__[i__3].i = 0.f;
+            /* L10: */
+          }
+          /* L20: */
+        }
+      } else {
+        i__1 = *n;
+        for (j = 1; j <= i__1; ++j) {
+          i__2 = j - 1;
+          for (i__ = 1; i__ <= i__2; ++i__) {
+            i__3 = i__ + j * c_dim1;
+            i__4 = i__ + j * c_dim1;
+            q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[i__4].i;
+            c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
+            /* L30: */
+          }
+          i__2 = j + j * c_dim1;
+          i__3 = j + j * c_dim1;
+          r__1 = *beta * c__[i__3].r;
+          c__[i__2].r = r__1, c__[i__2].i = 0.f;
+          /* L40: */
+        }
+      }
     } else {
-	nrowa = *k;
+      if (*beta == 0.f) {
+        i__1 = *n;
+        for (j = 1; j <= i__1; ++j) {
+          i__2 = *n;
+          for (i__ = j; i__ <= i__2; ++i__) {
+            i__3 = i__ + j * c_dim1;
+            c__[i__3].r = 0.f, c__[i__3].i = 0.f;
+            /* L50: */
+          }
+          /* L60: */
+        }
+      } else {
+        i__1 = *n;
+        for (j = 1; j <= i__1; ++j) {
+          i__2 = j + j * c_dim1;
+          i__3 = j + j * c_dim1;
+          r__1 = *beta * c__[i__3].r;
+          c__[i__2].r = r__1, c__[i__2].i = 0.f;
+          i__2 = *n;
+          for (i__ = j + 1; i__ <= i__2; ++i__) {
+            i__3 = i__ + j * c_dim1;
+            i__4 = i__ + j * c_dim1;
+            q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[i__4].i;
+            c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
+            /* L70: */
+          }
+          /* L80: */
+        }
+      }
     }
-    upper = lsame_(uplo, "U", (ftnlen)1, (ftnlen)1);
+    return;
+  }
 
-    info = 0;
-    if (! upper && ! lsame_(uplo, "L", (ftnlen)1, (ftnlen)1)) {
-	info = 1;
-    } else if (! lsame_(trans, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, 
-	    "C", (ftnlen)1, (ftnlen)1)) {
-	info = 2;
-    } else if (*n < 0) {
-	info = 3;
-    } else if (*k < 0) {
-	info = 4;
-    } else if (*lda < max(1,nrowa)) {
-	info = 7;
-    } else if (*ldb < max(1,nrowa)) {
-	info = 9;
-    } else if (*ldc < max(1,*n)) {
-	info = 12;
-    }
-    if (info != 0) {
-	xerbla_("CHER2K", &info, (ftnlen)6);
-	return 0;
-    }
+  /*     Start the operations. */
 
-/*     Quick return if possible. */
-
-    if (*n == 0 || (alpha->r == 0.f && alpha->i == 0.f || *k == 0) && *beta ==
-	     1.f) {
-	return 0;
-    }
+  if (lsame_(trans, "N")) {
 
-/*     And when  alpha.eq.zero. */
-
-    if (alpha->r == 0.f && alpha->i == 0.f) {
-	if (upper) {
-	    if (*beta == 0.f) {
-		i__1 = *n;
-		for (j = 1; j <= i__1; ++j) {
-		    i__2 = j;
-		    for (i__ = 1; i__ <= i__2; ++i__) {
-			i__3 = i__ + j * c_dim1;
-			c__[i__3].r = 0.f, c__[i__3].i = 0.f;
-/* L10: */
-		    }
-/* L20: */
-		}
-	    } else {
-		i__1 = *n;
-		for (j = 1; j <= i__1; ++j) {
-		    i__2 = j - 1;
-		    for (i__ = 1; i__ <= i__2; ++i__) {
-			i__3 = i__ + j * c_dim1;
-			i__4 = i__ + j * c_dim1;
-			q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[
-				i__4].i;
-			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
-/* L30: */
-		    }
-		    i__2 = j + j * c_dim1;
-		    i__3 = j + j * c_dim1;
-		    r__1 = *beta * c__[i__3].r;
-		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
-/* L40: */
-		}
-	    }
-	} else {
-	    if (*beta == 0.f) {
-		i__1 = *n;
-		for (j = 1; j <= i__1; ++j) {
-		    i__2 = *n;
-		    for (i__ = j; i__ <= i__2; ++i__) {
-			i__3 = i__ + j * c_dim1;
-			c__[i__3].r = 0.f, c__[i__3].i = 0.f;
-/* L50: */
-		    }
-/* L60: */
-		}
-	    } else {
-		i__1 = *n;
-		for (j = 1; j <= i__1; ++j) {
-		    i__2 = j + j * c_dim1;
-		    i__3 = j + j * c_dim1;
-		    r__1 = *beta * c__[i__3].r;
-		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
-		    i__2 = *n;
-		    for (i__ = j + 1; i__ <= i__2; ++i__) {
-			i__3 = i__ + j * c_dim1;
-			i__4 = i__ + j * c_dim1;
-			q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[
-				i__4].i;
-			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
-/* L70: */
-		    }
-/* L80: */
-		}
-	    }
-	}
-	return 0;
+    /*        Form  C := alpha*A*B**H + conjg( alpha )*B*A**H + */
+    /*                   C. */
+
+    if (upper) {
+      i__1 = *n;
+      for (j = 1; j <= i__1; ++j) {
+        if (*beta == 0.f) {
+          i__2 = j;
+          for (i__ = 1; i__ <= i__2; ++i__) {
+            i__3 = i__ + j * c_dim1;
+            c__[i__3].r = 0.f, c__[i__3].i = 0.f;
+            /* L90: */
+          }
+        } else if (*beta != 1.f) {
+          i__2 = j - 1;
+          for (i__ = 1; i__ <= i__2; ++i__) {
+            i__3 = i__ + j * c_dim1;
+            i__4 = i__ + j * c_dim1;
+            q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[i__4].i;
+            c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
+            /* L100: */
+          }
+          i__2 = j + j * c_dim1;
+          i__3 = j + j * c_dim1;
+          r__1 = *beta * c__[i__3].r;
+          c__[i__2].r = r__1, c__[i__2].i = 0.f;
+        } else {
+          i__2 = j + j * c_dim1;
+          i__3 = j + j * c_dim1;
+          r__1 = c__[i__3].r;
+          c__[i__2].r = r__1, c__[i__2].i = 0.f;
+        }
+        i__2 = *k;
+        for (l = 1; l <= i__2; ++l) {
+          i__3 = j + l * a_dim1;
+          i__4 = j + l * b_dim1;
+          if (a[i__3].r != 0.f || a[i__3].i != 0.f ||
+              (b[i__4].r != 0.f || b[i__4].i != 0.f)) {
+            r_cnjg(&q__2, &b[j + l * b_dim1]);
+            q__1.r = alpha->r * q__2.r - alpha->i * q__2.i,
+            q__1.i = alpha->r * q__2.i + alpha->i * q__2.r;
+            temp1.r = q__1.r, temp1.i = q__1.i;
+            i__3 = j + l * a_dim1;
+            q__2.r = alpha->r * a[i__3].r - alpha->i * a[i__3].i,
+            q__2.i = alpha->r * a[i__3].i + alpha->i * a[i__3].r;
+            r_cnjg(&q__1, &q__2);
+            temp2.r = q__1.r, temp2.i = q__1.i;
+            i__3 = j - 1;
+            for (i__ = 1; i__ <= i__3; ++i__) {
+              i__4 = i__ + j * c_dim1;
+              i__5 = i__ + j * c_dim1;
+              i__6 = i__ + l * a_dim1;
+              q__3.r = a[i__6].r * temp1.r - a[i__6].i * temp1.i,
+              q__3.i = a[i__6].r * temp1.i + a[i__6].i * temp1.r;
+              q__2.r = c__[i__5].r + q__3.r, q__2.i = c__[i__5].i + q__3.i;
+              i__7 = i__ + l * b_dim1;
+              q__4.r = b[i__7].r * temp2.r - b[i__7].i * temp2.i,
+              q__4.i = b[i__7].r * temp2.i + b[i__7].i * temp2.r;
+              q__1.r = q__2.r + q__4.r, q__1.i = q__2.i + q__4.i;
+              c__[i__4].r = q__1.r, c__[i__4].i = q__1.i;
+              /* L110: */
+            }
+            i__3 = j + j * c_dim1;
+            i__4 = j + j * c_dim1;
+            i__5 = j + l * a_dim1;
+            q__2.r = a[i__5].r * temp1.r - a[i__5].i * temp1.i,
+            q__2.i = a[i__5].r * temp1.i + a[i__5].i * temp1.r;
+            i__6 = j + l * b_dim1;
+            q__3.r = b[i__6].r * temp2.r - b[i__6].i * temp2.i,
+            q__3.i = b[i__6].r * temp2.i + b[i__6].i * temp2.r;
+            q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
+            r__1 = c__[i__4].r + q__1.r;
+            c__[i__3].r = r__1, c__[i__3].i = 0.f;
+          }
+          /* L120: */
+        }
+        /* L130: */
+      }
+    } else {
+      i__1 = *n;
+      for (j = 1; j <= i__1; ++j) {
+        if (*beta == 0.f) {
+          i__2 = *n;
+          for (i__ = j; i__ <= i__2; ++i__) {
+            i__3 = i__ + j * c_dim1;
+            c__[i__3].r = 0.f, c__[i__3].i = 0.f;
+            /* L140: */
+          }
+        } else if (*beta != 1.f) {
+          i__2 = *n;
+          for (i__ = j + 1; i__ <= i__2; ++i__) {
+            i__3 = i__ + j * c_dim1;
+            i__4 = i__ + j * c_dim1;
+            q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[i__4].i;
+            c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
+            /* L150: */
+          }
+          i__2 = j + j * c_dim1;
+          i__3 = j + j * c_dim1;
+          r__1 = *beta * c__[i__3].r;
+          c__[i__2].r = r__1, c__[i__2].i = 0.f;
+        } else {
+          i__2 = j + j * c_dim1;
+          i__3 = j + j * c_dim1;
+          r__1 = c__[i__3].r;
+          c__[i__2].r = r__1, c__[i__2].i = 0.f;
+        }
+        i__2 = *k;
+        for (l = 1; l <= i__2; ++l) {
+          i__3 = j + l * a_dim1;
+          i__4 = j + l * b_dim1;
+          if (a[i__3].r != 0.f || a[i__3].i != 0.f ||
+              (b[i__4].r != 0.f || b[i__4].i != 0.f)) {
+            r_cnjg(&q__2, &b[j + l * b_dim1]);
+            q__1.r = alpha->r * q__2.r - alpha->i * q__2.i,
+            q__1.i = alpha->r * q__2.i + alpha->i * q__2.r;
+            temp1.r = q__1.r, temp1.i = q__1.i;
+            i__3 = j + l * a_dim1;
+            q__2.r = alpha->r * a[i__3].r - alpha->i * a[i__3].i,
+            q__2.i = alpha->r * a[i__3].i + alpha->i * a[i__3].r;
+            r_cnjg(&q__1, &q__2);
+            temp2.r = q__1.r, temp2.i = q__1.i;
+            i__3 = *n;
+            for (i__ = j + 1; i__ <= i__3; ++i__) {
+              i__4 = i__ + j * c_dim1;
+              i__5 = i__ + j * c_dim1;
+              i__6 = i__ + l * a_dim1;
+              q__3.r = a[i__6].r * temp1.r - a[i__6].i * temp1.i,
+              q__3.i = a[i__6].r * temp1.i + a[i__6].i * temp1.r;
+              q__2.r = c__[i__5].r + q__3.r, q__2.i = c__[i__5].i + q__3.i;
+              i__7 = i__ + l * b_dim1;
+              q__4.r = b[i__7].r * temp2.r - b[i__7].i * temp2.i,
+              q__4.i = b[i__7].r * temp2.i + b[i__7].i * temp2.r;
+              q__1.r = q__2.r + q__4.r, q__1.i = q__2.i + q__4.i;
+              c__[i__4].r = q__1.r, c__[i__4].i = q__1.i;
+              /* L160: */
+            }
+            i__3 = j + j * c_dim1;
+            i__4 = j + j * c_dim1;
+            i__5 = j + l * a_dim1;
+            q__2.r = a[i__5].r * temp1.r - a[i__5].i * temp1.i,
+            q__2.i = a[i__5].r * temp1.i + a[i__5].i * temp1.r;
+            i__6 = j + l * b_dim1;
+            q__3.r = b[i__6].r * temp2.r - b[i__6].i * temp2.i,
+            q__3.i = b[i__6].r * temp2.i + b[i__6].i * temp2.r;
+            q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
+            r__1 = c__[i__4].r + q__1.r;
+            c__[i__3].r = r__1, c__[i__3].i = 0.f;
+          }
+          /* L170: */
+        }
+        /* L180: */
+      }
     }
+  } else {
 
-/*     Start the operations. */
-
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
-
-/*        Form  C := alpha*A*B**H + conjg( alpha )*B*A**H + */
-/*                   C. */
+    /*        Form  C := alpha*A**H*B + conjg( alpha )*B**H*A + */
+    /*                   C. */
 
-	if (upper) {
-	    i__1 = *n;
-	    for (j = 1; j <= i__1; ++j) {
-		if (*beta == 0.f) {
-		    i__2 = j;
-		    for (i__ = 1; i__ <= i__2; ++i__) {
-			i__3 = i__ + j * c_dim1;
-			c__[i__3].r = 0.f, c__[i__3].i = 0.f;
-/* L90: */
-		    }
-		} else if (*beta != 1.f) {
-		    i__2 = j - 1;
-		    for (i__ = 1; i__ <= i__2; ++i__) {
-			i__3 = i__ + j * c_dim1;
-			i__4 = i__ + j * c_dim1;
-			q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[
-				i__4].i;
-			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
-/* L100: */
-		    }
-		    i__2 = j + j * c_dim1;
-		    i__3 = j + j * c_dim1;
-		    r__1 = *beta * c__[i__3].r;
-		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
-		} else {
-		    i__2 = j + j * c_dim1;
-		    i__3 = j + j * c_dim1;
-		    r__1 = c__[i__3].r;
-		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
-		}
-		i__2 = *k;
-		for (l = 1; l <= i__2; ++l) {
-		    i__3 = j + l * a_dim1;
-		    i__4 = j + l * b_dim1;
-		    if (a[i__3].r != 0.f || a[i__3].i != 0.f || (b[i__4].r != 
-			    0.f || b[i__4].i != 0.f)) {
-			r_cnjg(&q__2, &b[j + l * b_dim1]);
-			q__1.r = alpha->r * q__2.r - alpha->i * q__2.i, 
-				q__1.i = alpha->r * q__2.i + alpha->i * 
-				q__2.r;
-			temp1.r = q__1.r, temp1.i = q__1.i;
-			i__3 = j + l * a_dim1;
-			q__2.r = alpha->r * a[i__3].r - alpha->i * a[i__3].i, 
-				q__2.i = alpha->r * a[i__3].i + alpha->i * a[
-				i__3].r;
-			r_cnjg(&q__1, &q__2);
-			temp2.r = q__1.r, temp2.i = q__1.i;
-			i__3 = j - 1;
-			for (i__ = 1; i__ <= i__3; ++i__) {
-			    i__4 = i__ + j * c_dim1;
-			    i__5 = i__ + j * c_dim1;
-			    i__6 = i__ + l * a_dim1;
-			    q__3.r = a[i__6].r * temp1.r - a[i__6].i * 
-				    temp1.i, q__3.i = a[i__6].r * temp1.i + a[
-				    i__6].i * temp1.r;
-			    q__2.r = c__[i__5].r + q__3.r, q__2.i = c__[i__5]
-				    .i + q__3.i;
-			    i__7 = i__ + l * b_dim1;
-			    q__4.r = b[i__7].r * temp2.r - b[i__7].i * 
-				    temp2.i, q__4.i = b[i__7].r * temp2.i + b[
-				    i__7].i * temp2.r;
-			    q__1.r = q__2.r + q__4.r, q__1.i = q__2.i + 
-				    q__4.i;
-			    c__[i__4].r = q__1.r, c__[i__4].i = q__1.i;
-/* L110: */
-			}
-			i__3 = j + j * c_dim1;
-			i__4 = j + j * c_dim1;
-			i__5 = j + l * a_dim1;
-			q__2.r = a[i__5].r * temp1.r - a[i__5].i * temp1.i, 
-				q__2.i = a[i__5].r * temp1.i + a[i__5].i * 
-				temp1.r;
-			i__6 = j + l * b_dim1;
-			q__3.r = b[i__6].r * temp2.r - b[i__6].i * temp2.i, 
-				q__3.i = b[i__6].r * temp2.i + b[i__6].i * 
-				temp2.r;
-			q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
-			r__1 = c__[i__4].r + q__1.r;
-			c__[i__3].r = r__1, c__[i__3].i = 0.f;
-		    }
-/* L120: */
-		}
-/* L130: */
-	    }
-	} else {
-	    i__1 = *n;
-	    for (j = 1; j <= i__1; ++j) {
-		if (*beta == 0.f) {
-		    i__2 = *n;
-		    for (i__ = j; i__ <= i__2; ++i__) {
-			i__3 = i__ + j * c_dim1;
-			c__[i__3].r = 0.f, c__[i__3].i = 0.f;
-/* L140: */
-		    }
-		} else if (*beta != 1.f) {
-		    i__2 = *n;
-		    for (i__ = j + 1; i__ <= i__2; ++i__) {
-			i__3 = i__ + j * c_dim1;
-			i__4 = i__ + j * c_dim1;
-			q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[
-				i__4].i;
-			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
-/* L150: */
-		    }
-		    i__2 = j + j * c_dim1;
-		    i__3 = j + j * c_dim1;
-		    r__1 = *beta * c__[i__3].r;
-		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
-		} else {
-		    i__2 = j + j * c_dim1;
-		    i__3 = j + j * c_dim1;
-		    r__1 = c__[i__3].r;
-		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
-		}
-		i__2 = *k;
-		for (l = 1; l <= i__2; ++l) {
-		    i__3 = j + l * a_dim1;
-		    i__4 = j + l * b_dim1;
-		    if (a[i__3].r != 0.f || a[i__3].i != 0.f || (b[i__4].r != 
-			    0.f || b[i__4].i != 0.f)) {
-			r_cnjg(&q__2, &b[j + l * b_dim1]);
-			q__1.r = alpha->r * q__2.r - alpha->i * q__2.i, 
-				q__1.i = alpha->r * q__2.i + alpha->i * 
-				q__2.r;
-			temp1.r = q__1.r, temp1.i = q__1.i;
-			i__3 = j + l * a_dim1;
-			q__2.r = alpha->r * a[i__3].r - alpha->i * a[i__3].i, 
-				q__2.i = alpha->r * a[i__3].i + alpha->i * a[
-				i__3].r;
-			r_cnjg(&q__1, &q__2);
-			temp2.r = q__1.r, temp2.i = q__1.i;
-			i__3 = *n;
-			for (i__ = j + 1; i__ <= i__3; ++i__) {
-			    i__4 = i__ + j * c_dim1;
-			    i__5 = i__ + j * c_dim1;
-			    i__6 = i__ + l * a_dim1;
-			    q__3.r = a[i__6].r * temp1.r - a[i__6].i * 
-				    temp1.i, q__3.i = a[i__6].r * temp1.i + a[
-				    i__6].i * temp1.r;
-			    q__2.r = c__[i__5].r + q__3.r, q__2.i = c__[i__5]
-				    .i + q__3.i;
-			    i__7 = i__ + l * b_dim1;
-			    q__4.r = b[i__7].r * temp2.r - b[i__7].i * 
-				    temp2.i, q__4.i = b[i__7].r * temp2.i + b[
-				    i__7].i * temp2.r;
-			    q__1.r = q__2.r + q__4.r, q__1.i = q__2.i + 
-				    q__4.i;
-			    c__[i__4].r = q__1.r, c__[i__4].i = q__1.i;
-/* L160: */
-			}
-			i__3 = j + j * c_dim1;
-			i__4 = j + j * c_dim1;
-			i__5 = j + l * a_dim1;
-			q__2.r = a[i__5].r * temp1.r - a[i__5].i * temp1.i, 
-				q__2.i = a[i__5].r * temp1.i + a[i__5].i * 
-				temp1.r;
-			i__6 = j + l * b_dim1;
-			q__3.r = b[i__6].r * temp2.r - b[i__6].i * temp2.i, 
-				q__3.i = b[i__6].r * temp2.i + b[i__6].i * 
-				temp2.r;
-			q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
-			r__1 = c__[i__4].r + q__1.r;
-			c__[i__3].r = r__1, c__[i__3].i = 0.f;
-		    }
-/* L170: */
-		}
-/* L180: */
-	    }
-	}
+    if (upper) {
+      i__1 = *n;
+      for (j = 1; j <= i__1; ++j) {
+        i__2 = j;
+        for (i__ = 1; i__ <= i__2; ++i__) {
+          temp1.r = 0.f, temp1.i = 0.f;
+          temp2.r = 0.f, temp2.i = 0.f;
+          i__3 = *k;
+          for (l = 1; l <= i__3; ++l) {
+            r_cnjg(&q__3, &a[l + i__ * a_dim1]);
+            i__4 = l + j * b_dim1;
+            q__2.r = q__3.r * b[i__4].r - q__3.i * b[i__4].i,
+            q__2.i = q__3.r * b[i__4].i + q__3.i * b[i__4].r;
+            q__1.r = temp1.r + q__2.r, q__1.i = temp1.i + q__2.i;
+            temp1.r = q__1.r, temp1.i = q__1.i;
+            r_cnjg(&q__3, &b[l + i__ * b_dim1]);
+            i__4 = l + j * a_dim1;
+            q__2.r = q__3.r * a[i__4].r - q__3.i * a[i__4].i,
+            q__2.i = q__3.r * a[i__4].i + q__3.i * a[i__4].r;
+            q__1.r = temp2.r + q__2.r, q__1.i = temp2.i + q__2.i;
+            temp2.r = q__1.r, temp2.i = q__1.i;
+            /* L190: */
+          }
+          if (i__ == j) {
+            if (*beta == 0.f) {
+              i__3 = j + j * c_dim1;
+              q__2.r = alpha->r * temp1.r - alpha->i * temp1.i,
+              q__2.i = alpha->r * temp1.i + alpha->i * temp1.r;
+              r_cnjg(&q__4, alpha);
+              q__3.r = q__4.r * temp2.r - q__4.i * temp2.i,
+              q__3.i = q__4.r * temp2.i + q__4.i * temp2.r;
+              q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
+              r__1 = q__1.r;
+              c__[i__3].r = r__1, c__[i__3].i = 0.f;
+            } else {
+              i__3 = j + j * c_dim1;
+              i__4 = j + j * c_dim1;
+              q__2.r = alpha->r * temp1.r - alpha->i * temp1.i,
+              q__2.i = alpha->r * temp1.i + alpha->i * temp1.r;
+              r_cnjg(&q__4, alpha);
+              q__3.r = q__4.r * temp2.r - q__4.i * temp2.i,
+              q__3.i = q__4.r * temp2.i + q__4.i * temp2.r;
+              q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
+              r__1 = *beta * c__[i__4].r + q__1.r;
+              c__[i__3].r = r__1, c__[i__3].i = 0.f;
+            }
+          } else {
+            if (*beta == 0.f) {
+              i__3 = i__ + j * c_dim1;
+              q__2.r = alpha->r * temp1.r - alpha->i * temp1.i,
+              q__2.i = alpha->r * temp1.i + alpha->i * temp1.r;
+              r_cnjg(&q__4, alpha);
+              q__3.r = q__4.r * temp2.r - q__4.i * temp2.i,
+              q__3.i = q__4.r * temp2.i + q__4.i * temp2.r;
+              q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
+              c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
+            } else {
+              i__3 = i__ + j * c_dim1;
+              i__4 = i__ + j * c_dim1;
+              q__3.r = *beta * c__[i__4].r, q__3.i = *beta * c__[i__4].i;
+              q__4.r = alpha->r * temp1.r - alpha->i * temp1.i,
+              q__4.i = alpha->r * temp1.i + alpha->i * temp1.r;
+              q__2.r = q__3.r + q__4.r, q__2.i = q__3.i + q__4.i;
+              r_cnjg(&q__6, alpha);
+              q__5.r = q__6.r * temp2.r - q__6.i * temp2.i,
+              q__5.i = q__6.r * temp2.i + q__6.i * temp2.r;
+              q__1.r = q__2.r + q__5.r, q__1.i = q__2.i + q__5.i;
+              c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
+            }
+          }
+          /* L200: */
+        }
+        /* L210: */
+      }
     } else {
-
-/*        Form  C := alpha*A**H*B + conjg( alpha )*B**H*A + */
-/*                   C. */
-
-	if (upper) {
-	    i__1 = *n;
-	    for (j = 1; j <= i__1; ++j) {
-		i__2 = j;
-		for (i__ = 1; i__ <= i__2; ++i__) {
-		    temp1.r = 0.f, temp1.i = 0.f;
-		    temp2.r = 0.f, temp2.i = 0.f;
-		    i__3 = *k;
-		    for (l = 1; l <= i__3; ++l) {
-			r_cnjg(&q__3, &a[l + i__ * a_dim1]);
-			i__4 = l + j * b_dim1;
-			q__2.r = q__3.r * b[i__4].r - q__3.i * b[i__4].i, 
-				q__2.i = q__3.r * b[i__4].i + q__3.i * b[i__4]
-				.r;
-			q__1.r = temp1.r + q__2.r, q__1.i = temp1.i + q__2.i;
-			temp1.r = q__1.r, temp1.i = q__1.i;
-			r_cnjg(&q__3, &b[l + i__ * b_dim1]);
-			i__4 = l + j * a_dim1;
-			q__2.r = q__3.r * a[i__4].r - q__3.i * a[i__4].i, 
-				q__2.i = q__3.r * a[i__4].i + q__3.i * a[i__4]
-				.r;
-			q__1.r = temp2.r + q__2.r, q__1.i = temp2.i + q__2.i;
-			temp2.r = q__1.r, temp2.i = q__1.i;
-/* L190: */
-		    }
-		    if (i__ == j) {
-			if (*beta == 0.f) {
-			    i__3 = j + j * c_dim1;
-			    q__2.r = alpha->r * temp1.r - alpha->i * temp1.i, 
-				    q__2.i = alpha->r * temp1.i + alpha->i * 
-				    temp1.r;
-			    r_cnjg(&q__4, alpha);
-			    q__3.r = q__4.r * temp2.r - q__4.i * temp2.i, 
-				    q__3.i = q__4.r * temp2.i + q__4.i * 
-				    temp2.r;
-			    q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + 
-				    q__3.i;
-			    r__1 = q__1.r;
-			    c__[i__3].r = r__1, c__[i__3].i = 0.f;
-			} else {
-			    i__3 = j + j * c_dim1;
-			    i__4 = j + j * c_dim1;
-			    q__2.r = alpha->r * temp1.r - alpha->i * temp1.i, 
-				    q__2.i = alpha->r * temp1.i + alpha->i * 
-				    temp1.r;
-			    r_cnjg(&q__4, alpha);
-			    q__3.r = q__4.r * temp2.r - q__4.i * temp2.i, 
-				    q__3.i = q__4.r * temp2.i + q__4.i * 
-				    temp2.r;
-			    q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + 
-				    q__3.i;
-			    r__1 = *beta * c__[i__4].r + q__1.r;
-			    c__[i__3].r = r__1, c__[i__3].i = 0.f;
-			}
-		    } else {
-			if (*beta == 0.f) {
-			    i__3 = i__ + j * c_dim1;
-			    q__2.r = alpha->r * temp1.r - alpha->i * temp1.i, 
-				    q__2.i = alpha->r * temp1.i + alpha->i * 
-				    temp1.r;
-			    r_cnjg(&q__4, alpha);
-			    q__3.r = q__4.r * temp2.r - q__4.i * temp2.i, 
-				    q__3.i = q__4.r * temp2.i + q__4.i * 
-				    temp2.r;
-			    q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + 
-				    q__3.i;
-			    c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
-			} else {
-			    i__3 = i__ + j * c_dim1;
-			    i__4 = i__ + j * c_dim1;
-			    q__3.r = *beta * c__[i__4].r, q__3.i = *beta * 
-				    c__[i__4].i;
-			    q__4.r = alpha->r * temp1.r - alpha->i * temp1.i, 
-				    q__4.i = alpha->r * temp1.i + alpha->i * 
-				    temp1.r;
-			    q__2.r = q__3.r + q__4.r, q__2.i = q__3.i + 
-				    q__4.i;
-			    r_cnjg(&q__6, alpha);
-			    q__5.r = q__6.r * temp2.r - q__6.i * temp2.i, 
-				    q__5.i = q__6.r * temp2.i + q__6.i * 
-				    temp2.r;
-			    q__1.r = q__2.r + q__5.r, q__1.i = q__2.i + 
-				    q__5.i;
-			    c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
-			}
-		    }
-/* L200: */
-		}
-/* L210: */
-	    }
-	} else {
-	    i__1 = *n;
-	    for (j = 1; j <= i__1; ++j) {
-		i__2 = *n;
-		for (i__ = j; i__ <= i__2; ++i__) {
-		    temp1.r = 0.f, temp1.i = 0.f;
-		    temp2.r = 0.f, temp2.i = 0.f;
-		    i__3 = *k;
-		    for (l = 1; l <= i__3; ++l) {
-			r_cnjg(&q__3, &a[l + i__ * a_dim1]);
-			i__4 = l + j * b_dim1;
-			q__2.r = q__3.r * b[i__4].r - q__3.i * b[i__4].i, 
-				q__2.i = q__3.r * b[i__4].i + q__3.i * b[i__4]
-				.r;
-			q__1.r = temp1.r + q__2.r, q__1.i = temp1.i + q__2.i;
-			temp1.r = q__1.r, temp1.i = q__1.i;
-			r_cnjg(&q__3, &b[l + i__ * b_dim1]);
-			i__4 = l + j * a_dim1;
-			q__2.r = q__3.r * a[i__4].r - q__3.i * a[i__4].i, 
-				q__2.i = q__3.r * a[i__4].i + q__3.i * a[i__4]
-				.r;
-			q__1.r = temp2.r + q__2.r, q__1.i = temp2.i + q__2.i;
-			temp2.r = q__1.r, temp2.i = q__1.i;
-/* L220: */
-		    }
-		    if (i__ == j) {
-			if (*beta == 0.f) {
-			    i__3 = j + j * c_dim1;
-			    q__2.r = alpha->r * temp1.r - alpha->i * temp1.i, 
-				    q__2.i = alpha->r * temp1.i + alpha->i * 
-				    temp1.r;
-			    r_cnjg(&q__4, alpha);
-			    q__3.r = q__4.r * temp2.r - q__4.i * temp2.i, 
-				    q__3.i = q__4.r * temp2.i + q__4.i * 
-				    temp2.r;
-			    q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + 
-				    q__3.i;
-			    r__1 = q__1.r;
-			    c__[i__3].r = r__1, c__[i__3].i = 0.f;
-			} else {
-			    i__3 = j + j * c_dim1;
-			    i__4 = j + j * c_dim1;
-			    q__2.r = alpha->r * temp1.r - alpha->i * temp1.i, 
-				    q__2.i = alpha->r * temp1.i + alpha->i * 
-				    temp1.r;
-			    r_cnjg(&q__4, alpha);
-			    q__3.r = q__4.r * temp2.r - q__4.i * temp2.i, 
-				    q__3.i = q__4.r * temp2.i + q__4.i * 
-				    temp2.r;
-			    q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + 
-				    q__3.i;
-			    r__1 = *beta * c__[i__4].r + q__1.r;
-			    c__[i__3].r = r__1, c__[i__3].i = 0.f;
-			}
-		    } else {
-			if (*beta == 0.f) {
-			    i__3 = i__ + j * c_dim1;
-			    q__2.r = alpha->r * temp1.r - alpha->i * temp1.i, 
-				    q__2.i = alpha->r * temp1.i + alpha->i * 
-				    temp1.r;
-			    r_cnjg(&q__4, alpha);
-			    q__3.r = q__4.r * temp2.r - q__4.i * temp2.i, 
-				    q__3.i = q__4.r * temp2.i + q__4.i * 
-				    temp2.r;
-			    q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + 
-				    q__3.i;
-			    c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
-			} else {
-			    i__3 = i__ + j * c_dim1;
-			    i__4 = i__ + j * c_dim1;
-			    q__3.r = *beta * c__[i__4].r, q__3.i = *beta * 
-				    c__[i__4].i;
-			    q__4.r = alpha->r * temp1.r - alpha->i * temp1.i, 
-				    q__4.i = alpha->r * temp1.i + alpha->i * 
-				    temp1.r;
-			    q__2.r = q__3.r + q__4.r, q__2.i = q__3.i + 
-				    q__4.i;
-			    r_cnjg(&q__6, alpha);
-			    q__5.r = q__6.r * temp2.r - q__6.i * temp2.i, 
-				    q__5.i = q__6.r * temp2.i + q__6.i * 
-				    temp2.r;
-			    q__1.r = q__2.r + q__5.r, q__1.i = q__2.i + 
-				    q__5.i;
-			    c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
-			}
-		    }
-/* L230: */
-		}
-/* L240: */
-	    }
-	}
+      i__1 = *n;
+      for (j = 1; j <= i__1; ++j) {
+        i__2 = *n;
+        for (i__ = j; i__ <= i__2; ++i__) {
+          temp1.r = 0.f, temp1.i = 0.f;
+          temp2.r = 0.f, temp2.i = 0.f;
+          i__3 = *k;
+          for (l = 1; l <= i__3; ++l) {
+            r_cnjg(&q__3, &a[l + i__ * a_dim1]);
+            i__4 = l + j * b_dim1;
+            q__2.r = q__3.r * b[i__4].r - q__3.i * b[i__4].i,
+            q__2.i = q__3.r * b[i__4].i + q__3.i * b[i__4].r;
+            q__1.r = temp1.r + q__2.r, q__1.i = temp1.i + q__2.i;
+            temp1.r = q__1.r, temp1.i = q__1.i;
+            r_cnjg(&q__3, &b[l + i__ * b_dim1]);
+            i__4 = l + j * a_dim1;
+            q__2.r = q__3.r * a[i__4].r - q__3.i * a[i__4].i,
+            q__2.i = q__3.r * a[i__4].i + q__3.i * a[i__4].r;
+            q__1.r = temp2.r + q__2.r, q__1.i = temp2.i + q__2.i;
+            temp2.r = q__1.r, temp2.i = q__1.i;
+            /* L220: */
+          }
+          if (i__ == j) {
+            if (*beta == 0.f) {
+              i__3 = j + j * c_dim1;
+              q__2.r = alpha->r * temp1.r - alpha->i * temp1.i,
+              q__2.i = alpha->r * temp1.i + alpha->i * temp1.r;
+              r_cnjg(&q__4, alpha);
+              q__3.r = q__4.r * temp2.r - q__4.i * temp2.i,
+              q__3.i = q__4.r * temp2.i + q__4.i * temp2.r;
+              q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
+              r__1 = q__1.r;
+              c__[i__3].r = r__1, c__[i__3].i = 0.f;
+            } else {
+              i__3 = j + j * c_dim1;
+              i__4 = j + j * c_dim1;
+              q__2.r = alpha->r * temp1.r - alpha->i * temp1.i,
+              q__2.i = alpha->r * temp1.i + alpha->i * temp1.r;
+              r_cnjg(&q__4, alpha);
+              q__3.r = q__4.r * temp2.r - q__4.i * temp2.i,
+              q__3.i = q__4.r * temp2.i + q__4.i * temp2.r;
+              q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
+              r__1 = *beta * c__[i__4].r + q__1.r;
+              c__[i__3].r = r__1, c__[i__3].i = 0.f;
+            }
+          } else {
+            if (*beta == 0.f) {
+              i__3 = i__ + j * c_dim1;
+              q__2.r = alpha->r * temp1.r - alpha->i * temp1.i,
+              q__2.i = alpha->r * temp1.i + alpha->i * temp1.r;
+              r_cnjg(&q__4, alpha);
+              q__3.r = q__4.r * temp2.r - q__4.i * temp2.i,
+              q__3.i = q__4.r * temp2.i + q__4.i * temp2.r;
+              q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
+              c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
+            } else {
+              i__3 = i__ + j * c_dim1;
+              i__4 = i__ + j * c_dim1;
+              q__3.r = *beta * c__[i__4].r, q__3.i = *beta * c__[i__4].i;
+              q__4.r = alpha->r * temp1.r - alpha->i * temp1.i,
+              q__4.i = alpha->r * temp1.i + alpha->i * temp1.r;
+              q__2.r = q__3.r + q__4.r, q__2.i = q__3.i + q__4.i;
+              r_cnjg(&q__6, alpha);
+              q__5.r = q__6.r * temp2.r - q__6.i * temp2.i,
+              q__5.i = q__6.r * temp2.i + q__6.i * temp2.r;
+              q__1.r = q__2.r + q__5.r, q__1.i = q__2.i + q__5.i;
+              c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
+            }
+          }
+          /* L230: */
+        }
+        /* L240: */
+      }
     }
+  }
 
-    return 0;
+  return;
 
-/*     End of CHER2K. */
+  /*     End of CHER2K. */
 
 } /* cher2k_ */
-
