/* ztbmv.f -- translated by f2c (version 20191129).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"

/* > \brief \b ZTBMV */

/*  =========== DOCUMENTATION =========== */

/* Online html documentation available at */
/*            http://www.netlib.org/lapack/explore-html/ */

/*  Definition: */
/*  =========== */

/*       SUBROUTINE ZTBMV(UPLO,TRANS,DIAG,N,K,A,LDA,X,INCX) */

/*       .. Scalar Arguments .. */
/*       INTEGER INCX,K,LDA,N */
/*       CHARACTER DIAG,TRANS,UPLO */
/*       .. */
/*       .. Array Arguments .. */
/*       COMPLEX*16 A(LDA,*),X(*) */
/*       .. */


/* > \par Purpose: */
/*  ============= */
/* > */
/* > \verbatim */
/* > */
/* > ZTBMV  performs one of the matrix-vector operations */
/* > */
/* >    x := A*x,   or   x := A**T*x,   or   x := A**H*x, */
/* > */
/* > where x is an n element vector and  A is an n by n unit, or non-unit, */
/* > upper or lower triangular band matrix, with ( k + 1 ) diagonals. */
/* > \endverbatim */

/*  Arguments: */
/*  ========== */

/* > \param[in] UPLO */
/* > \verbatim */
/* >          UPLO is CHARACTER*1 */
/* >           On entry, UPLO specifies whether the matrix is an upper or */
/* >           lower triangular matrix as follows: */
/* > */
/* >              UPLO = 'U' or 'u'   A is an upper triangular matrix. */
/* > */
/* >              UPLO = 'L' or 'l'   A is a lower triangular matrix. */
/* > \endverbatim */
/* > */
/* > \param[in] TRANS */
/* > \verbatim */
/* >          TRANS is CHARACTER*1 */
/* >           On entry, TRANS specifies the operation to be performed as */
/* >           follows: */
/* > */
/* >              TRANS = 'N' or 'n'   x := A*x. */
/* > */
/* >              TRANS = 'T' or 't'   x := A**T*x. */
/* > */
/* >              TRANS = 'C' or 'c'   x := A**H*x. */
/* > \endverbatim */
/* > */
/* > \param[in] DIAG */
/* > \verbatim */
/* >          DIAG is CHARACTER*1 */
/* >           On entry, DIAG specifies whether or not A is unit */
/* >           triangular as follows: */
/* > */
/* >              DIAG = 'U' or 'u'   A is assumed to be unit triangular. */
/* > */
/* >              DIAG = 'N' or 'n'   A is not assumed to be unit */
/* >                                  triangular. */
/* > \endverbatim */
/* > */
/* > \param[in] N */
/* > \verbatim */
/* >          N is INTEGER */
/* >           On entry, N specifies the order of the matrix A. */
/* >           N must be at least zero. */
/* > \endverbatim */
/* > */
/* > \param[in] K */
/* > \verbatim */
/* >          K is INTEGER */
/* >           On entry with UPLO = 'U' or 'u', K specifies the number of */
/* >           super-diagonals of the matrix A. */
/* >           On entry with UPLO = 'L' or 'l', K specifies the number of */
/* >           sub-diagonals of the matrix A. */
/* >           K must satisfy  0 .le. K. */
/* > \endverbatim */
/* > */
/* > \param[in] A */
/* > \verbatim */
/* >          A is COMPLEX*16 array, dimension ( LDA, N ). */
/* >           Before entry with UPLO = 'U' or 'u', the leading ( k + 1 ) */
/* >           by n part of the array A must contain the upper triangular */
/* >           band part of the matrix of coefficients, supplied column by */
/* >           column, with the leading diagonal of the matrix in row */
/* >           ( k + 1 ) of the array, the first super-diagonal starting at */
/* >           position 2 in row k, and so on. The top left k by k triangle */
/* >           of the array A is not referenced. */
/* >           The following program segment will transfer an upper */
/* >           triangular band matrix from conventional full matrix storage */
/* >           to band storage: */
/* > */
/* >                 DO 20, J = 1, N */
/* >                    M = K + 1 - J */
/* >                    DO 10, I = MAX( 1, J - K ), J */
/* >                       A( M + I, J ) = matrix( I, J ) */
/* >              10    CONTINUE */
/* >              20 CONTINUE */
/* > */
/* >           Before entry with UPLO = 'L' or 'l', the leading ( k + 1 ) */
/* >           by n part of the array A must contain the lower triangular */
/* >           band part of the matrix of coefficients, supplied column by */
/* >           column, with the leading diagonal of the matrix in row 1 of */
/* >           the array, the first sub-diagonal starting at position 1 in */
/* >           row 2, and so on. The bottom right k by k triangle of the */
/* >           array A is not referenced. */
/* >           The following program segment will transfer a lower */
/* >           triangular band matrix from conventional full matrix storage */
/* >           to band storage: */
/* > */
/* >                 DO 20, J = 1, N */
/* >                    M = 1 - J */
/* >                    DO 10, I = J, MIN( N, J + K ) */
/* >                       A( M + I, J ) = matrix( I, J ) */
/* >              10    CONTINUE */
/* >              20 CONTINUE */
/* > */
/* >           Note that when DIAG = 'U' or 'u' the elements of the array A */
/* >           corresponding to the diagonal elements of the matrix are not */
/* >           referenced, but are assumed to be unity. */
/* > \endverbatim */
/* > */
/* > \param[in] LDA */
/* > \verbatim */
/* >          LDA is INTEGER */
/* >           On entry, LDA specifies the first dimension of A as declared */
/* >           in the calling (sub) program. LDA must be at least */
/* >           ( k + 1 ). */
/* > \endverbatim */
/* > */
/* > \param[in,out] X */
/* > \verbatim */
/* >          X is COMPLEX*16 array, dimension at least */
/* >           ( 1 + ( n - 1 )*abs( INCX ) ). */
/* >           Before entry, the incremented array X must contain the n */
/* >           element vector x. On exit, X is overwritten with the */
/* >           transformed vector x. */
/* > \endverbatim */
/* > */
/* > \param[in] INCX */
/* > \verbatim */
/* >          INCX is INTEGER */
/* >           On entry, INCX specifies the increment for the elements of */
/* >           X. INCX must not be zero. */
/* > \endverbatim */

/*  Authors: */
/*  ======== */

/* > \author Univ. of Tennessee */
/* > \author Univ. of California Berkeley */
/* > \author Univ. of Colorado Denver */
/* > \author NAG Ltd. */

/* > \date December 2016 */

/* > \ingroup complex16_blas_level2 */

/* > \par Further Details: */
/*  ===================== */
/* > */
/* > \verbatim */
/* > */
/* >  Level 2 Blas routine. */
/* >  The vector and matrix arguments are not referenced when N = 0, or M = 0 */
/* > */
/* >  -- Written on 22-October-1986. */
/* >     Jack Dongarra, Argonne National Lab. */
/* >     Jeremy Du Croz, Nag Central Office. */
/* >     Sven Hammarling, Nag Central Office. */
/* >     Richard Hanson, Sandia National Labs. */
/* > \endverbatim */
/* > */
/*  ===================================================================== */
/* Subroutine */ void ztbmv_(char *uplo, char *trans, char *diag, integer *n, 
	integer *k, doublecomplex *a, integer *lda, doublecomplex *x, integer 
	*incx)
{
    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5;
    doublecomplex z__1, z__2, z__3;

    /* Builtin functions */
    void d_cnjg(doublecomplex *, doublecomplex *);

    /* Local variables */
    integer i__, j, l, ix, jx, kx, info;
    doublecomplex temp;
    extern  logical lsame_(char *, char *);
    integer kplus1;
    extern /* Subroutine */ void xerbla_(char *, integer *);
    logical noconj, nounit;


/*  -- Reference BLAS level2 routine (version 3.7.0) -- */
/*  -- Reference BLAS is a software package provided by Univ. of Tennessee,    -- */
/*  -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..-- */
/*     December 2016 */

/*     .. Scalar Arguments .. */
/*     .. */
/*     .. Array Arguments .. */
/*     .. */

/*  ===================================================================== */

/*     .. Parameters .. */
/*     .. */
/*     .. Local Scalars .. */
/*     .. */
/*     .. External Functions .. */
/*     .. */
/*     .. External Subroutines .. */
/*     .. */
/*     .. Intrinsic Functions .. */
/*     .. */

/*     Test the input parameters. */

    /* Parameter adjustments */
    a_dim1 = *lda;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --x;

    /* Function Body */
    info = 0;
    if (! lsame_(uplo, "U") && ! lsame_(uplo, "L")) {
	info = 1;
    } else if (! lsame_(trans, "N") && ! lsame_(trans, "T") && ! lsame_(trans, "C")) {
	info = 2;
    } else if (! lsame_(diag, "U") && ! lsame_(diag, "N")) {
	info = 3;
    } else if (*n < 0) {
	info = 4;
    } else if (*k < 0) {
	info = 5;
    } else if (*lda < *k + 1) {
	info = 7;
    } else if (*incx == 0) {
	info = 9;
    }
    if (info != 0) {
	xerbla_("ZTBMV ", &info);
	return;
    }

/*     Quick return if possible. */

    if (*n == 0) {
	return;
    }

    noconj = lsame_(trans, "T");
    nounit = lsame_(diag, "N");

/*     Set up the start point in X if the increment is not unity. This */
/*     will be  ( N - 1 )*INCX   too small for descending loops. */

    if (*incx <= 0) {
	kx = 1 - (*n - 1) * *incx;
    } else if (*incx != 1) {
	kx = 1;
    }

/*     Start the operations. In this version the elements of A are */
/*     accessed sequentially with one pass through A. */

    if (lsame_(trans, "N")) {

/*         Form  x := A*x. */

	if (lsame_(uplo, "U")) {
	    kplus1 = *k + 1;
	    if (*incx == 1) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = j;
		    if (x[i__2].r != 0. || x[i__2].i != 0.) {
			i__2 = j;
			temp.r = x[i__2].r, temp.i = x[i__2].i;
			l = kplus1 - j;
/* Computing MAX */
			i__2 = 1, i__3 = j - *k;
			i__4 = j - 1;
			for (i__ = max(i__2,i__3); i__ <= i__4; ++i__) {
			    i__2 = i__;
			    i__3 = i__;
			    i__5 = l + i__ + j * a_dim1;
			    z__2.r = temp.r * a[i__5].r - temp.i * a[i__5].i, 
				    z__2.i = temp.r * a[i__5].i + temp.i * a[
				    i__5].r;
			    z__1.r = x[i__3].r + z__2.r, z__1.i = x[i__3].i + 
				    z__2.i;
			    x[i__2].r = z__1.r, x[i__2].i = z__1.i;
/* L10: */
			}
			if (nounit) {
			    i__4 = j;
			    i__2 = j;
			    i__3 = kplus1 + j * a_dim1;
			    z__1.r = x[i__2].r * a[i__3].r - x[i__2].i * a[
				    i__3].i, z__1.i = x[i__2].r * a[i__3].i + 
				    x[i__2].i * a[i__3].r;
			    x[i__4].r = z__1.r, x[i__4].i = z__1.i;
			}
		    }
/* L20: */
		}
	    } else {
		jx = kx;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__4 = jx;
		    if (x[i__4].r != 0. || x[i__4].i != 0.) {
			i__4 = jx;
			temp.r = x[i__4].r, temp.i = x[i__4].i;
			ix = kx;
			l = kplus1 - j;
/* Computing MAX */
			i__4 = 1, i__2 = j - *k;
			i__3 = j - 1;
			for (i__ = max(i__4,i__2); i__ <= i__3; ++i__) {
			    i__4 = ix;
			    i__2 = ix;
			    i__5 = l + i__ + j * a_dim1;
			    z__2.r = temp.r * a[i__5].r - temp.i * a[i__5].i, 
				    z__2.i = temp.r * a[i__5].i + temp.i * a[
				    i__5].r;
			    z__1.r = x[i__2].r + z__2.r, z__1.i = x[i__2].i + 
				    z__2.i;
			    x[i__4].r = z__1.r, x[i__4].i = z__1.i;
			    ix += *incx;
/* L30: */
			}
			if (nounit) {
			    i__3 = jx;
			    i__4 = jx;
			    i__2 = kplus1 + j * a_dim1;
			    z__1.r = x[i__4].r * a[i__2].r - x[i__4].i * a[
				    i__2].i, z__1.i = x[i__4].r * a[i__2].i + 
				    x[i__4].i * a[i__2].r;
			    x[i__3].r = z__1.r, x[i__3].i = z__1.i;
			}
		    }
		    jx += *incx;
		    if (j > *k) {
			kx += *incx;
		    }
/* L40: */
		}
	    }
	} else {
	    if (*incx == 1) {
		for (j = *n; j >= 1; --j) {
		    i__1 = j;
		    if (x[i__1].r != 0. || x[i__1].i != 0.) {
			i__1 = j;
			temp.r = x[i__1].r, temp.i = x[i__1].i;
			l = 1 - j;
/* Computing MIN */
			i__1 = *n, i__3 = j + *k;
			i__4 = j + 1;
			for (i__ = min(i__1,i__3); i__ >= i__4; --i__) {
			    i__1 = i__;
			    i__3 = i__;
			    i__2 = l + i__ + j * a_dim1;
			    z__2.r = temp.r * a[i__2].r - temp.i * a[i__2].i, 
				    z__2.i = temp.r * a[i__2].i + temp.i * a[
				    i__2].r;
			    z__1.r = x[i__3].r + z__2.r, z__1.i = x[i__3].i + 
				    z__2.i;
			    x[i__1].r = z__1.r, x[i__1].i = z__1.i;
/* L50: */
			}
			if (nounit) {
			    i__4 = j;
			    i__1 = j;
			    i__3 = j * a_dim1 + 1;
			    z__1.r = x[i__1].r * a[i__3].r - x[i__1].i * a[
				    i__3].i, z__1.i = x[i__1].r * a[i__3].i + 
				    x[i__1].i * a[i__3].r;
			    x[i__4].r = z__1.r, x[i__4].i = z__1.i;
			}
		    }
/* L60: */
		}
	    } else {
		kx += (*n - 1) * *incx;
		jx = kx;
		for (j = *n; j >= 1; --j) {
		    i__4 = jx;
		    if (x[i__4].r != 0. || x[i__4].i != 0.) {
			i__4 = jx;
			temp.r = x[i__4].r, temp.i = x[i__4].i;
			ix = kx;
			l = 1 - j;
/* Computing MIN */
			i__4 = *n, i__1 = j + *k;
			i__3 = j + 1;
			for (i__ = min(i__4,i__1); i__ >= i__3; --i__) {
			    i__4 = ix;
			    i__1 = ix;
			    i__2 = l + i__ + j * a_dim1;
			    z__2.r = temp.r * a[i__2].r - temp.i * a[i__2].i, 
				    z__2.i = temp.r * a[i__2].i + temp.i * a[
				    i__2].r;
			    z__1.r = x[i__1].r + z__2.r, z__1.i = x[i__1].i + 
				    z__2.i;
			    x[i__4].r = z__1.r, x[i__4].i = z__1.i;
			    ix -= *incx;
/* L70: */
			}
			if (nounit) {
			    i__3 = jx;
			    i__4 = jx;
			    i__1 = j * a_dim1 + 1;
			    z__1.r = x[i__4].r * a[i__1].r - x[i__4].i * a[
				    i__1].i, z__1.i = x[i__4].r * a[i__1].i + 
				    x[i__4].i * a[i__1].r;
			    x[i__3].r = z__1.r, x[i__3].i = z__1.i;
			}
		    }
		    jx -= *incx;
		    if (*n - j >= *k) {
			kx -= *incx;
		    }
/* L80: */
		}
	    }
	}
    } else {

/*        Form  x := A**T*x  or  x := A**H*x. */

	if (lsame_(uplo, "U")) {
	    kplus1 = *k + 1;
	    if (*incx == 1) {
		for (j = *n; j >= 1; --j) {
		    i__3 = j;
		    temp.r = x[i__3].r, temp.i = x[i__3].i;
		    l = kplus1 - j;
		    if (noconj) {
			if (nounit) {
			    i__3 = kplus1 + j * a_dim1;
			    z__1.r = temp.r * a[i__3].r - temp.i * a[i__3].i, 
				    z__1.i = temp.r * a[i__3].i + temp.i * a[
				    i__3].r;
			    temp.r = z__1.r, temp.i = z__1.i;
			}
/* Computing MAX */
			i__4 = 1, i__1 = j - *k;
			i__3 = max(i__4,i__1);
			for (i__ = j - 1; i__ >= i__3; --i__) {
			    i__4 = l + i__ + j * a_dim1;
			    i__1 = i__;
			    z__2.r = a[i__4].r * x[i__1].r - a[i__4].i * x[
				    i__1].i, z__2.i = a[i__4].r * x[i__1].i + 
				    a[i__4].i * x[i__1].r;
			    z__1.r = temp.r + z__2.r, z__1.i = temp.i + 
				    z__2.i;
			    temp.r = z__1.r, temp.i = z__1.i;
/* L90: */
			}
		    } else {
			if (nounit) {
			    d_cnjg(&z__2, &a[kplus1 + j * a_dim1]);
			    z__1.r = temp.r * z__2.r - temp.i * z__2.i, 
				    z__1.i = temp.r * z__2.i + temp.i * 
				    z__2.r;
			    temp.r = z__1.r, temp.i = z__1.i;
			}
/* Computing MAX */
			i__4 = 1, i__1 = j - *k;
			i__3 = max(i__4,i__1);
			for (i__ = j - 1; i__ >= i__3; --i__) {
			    d_cnjg(&z__3, &a[l + i__ + j * a_dim1]);
			    i__4 = i__;
			    z__2.r = z__3.r * x[i__4].r - z__3.i * x[i__4].i, 
				    z__2.i = z__3.r * x[i__4].i + z__3.i * x[
				    i__4].r;
			    z__1.r = temp.r + z__2.r, z__1.i = temp.i + 
				    z__2.i;
			    temp.r = z__1.r, temp.i = z__1.i;
/* L100: */
			}
		    }
		    i__3 = j;
		    x[i__3].r = temp.r, x[i__3].i = temp.i;
/* L110: */
		}
	    } else {
		kx += (*n - 1) * *incx;
		jx = kx;
		for (j = *n; j >= 1; --j) {
		    i__3 = jx;
		    temp.r = x[i__3].r, temp.i = x[i__3].i;
		    kx -= *incx;
		    ix = kx;
		    l = kplus1 - j;
		    if (noconj) {
			if (nounit) {
			    i__3 = kplus1 + j * a_dim1;
			    z__1.r = temp.r * a[i__3].r - temp.i * a[i__3].i, 
				    z__1.i = temp.r * a[i__3].i + temp.i * a[
				    i__3].r;
			    temp.r = z__1.r, temp.i = z__1.i;
			}
/* Computing MAX */
			i__4 = 1, i__1 = j - *k;
			i__3 = max(i__4,i__1);
			for (i__ = j - 1; i__ >= i__3; --i__) {
			    i__4 = l + i__ + j * a_dim1;
			    i__1 = ix;
			    z__2.r = a[i__4].r * x[i__1].r - a[i__4].i * x[
				    i__1].i, z__2.i = a[i__4].r * x[i__1].i + 
				    a[i__4].i * x[i__1].r;
			    z__1.r = temp.r + z__2.r, z__1.i = temp.i + 
				    z__2.i;
			    temp.r = z__1.r, temp.i = z__1.i;
			    ix -= *incx;
/* L120: */
			}
		    } else {
			if (nounit) {
			    d_cnjg(&z__2, &a[kplus1 + j * a_dim1]);
			    z__1.r = temp.r * z__2.r - temp.i * z__2.i, 
				    z__1.i = temp.r * z__2.i + temp.i * 
				    z__2.r;
			    temp.r = z__1.r, temp.i = z__1.i;
			}
/* Computing MAX */
			i__4 = 1, i__1 = j - *k;
			i__3 = max(i__4,i__1);
			for (i__ = j - 1; i__ >= i__3; --i__) {
			    d_cnjg(&z__3, &a[l + i__ + j * a_dim1]);
			    i__4 = ix;
			    z__2.r = z__3.r * x[i__4].r - z__3.i * x[i__4].i, 
				    z__2.i = z__3.r * x[i__4].i + z__3.i * x[
				    i__4].r;
			    z__1.r = temp.r + z__2.r, z__1.i = temp.i + 
				    z__2.i;
			    temp.r = z__1.r, temp.i = z__1.i;
			    ix -= *incx;
/* L130: */
			}
		    }
		    i__3 = jx;
		    x[i__3].r = temp.r, x[i__3].i = temp.i;
		    jx -= *incx;
/* L140: */
		}
	    }
	} else {
	    if (*incx == 1) {
		i__3 = *n;
		for (j = 1; j <= i__3; ++j) {
		    i__4 = j;
		    temp.r = x[i__4].r, temp.i = x[i__4].i;
		    l = 1 - j;
		    if (noconj) {
			if (nounit) {
			    i__4 = j * a_dim1 + 1;
			    z__1.r = temp.r * a[i__4].r - temp.i * a[i__4].i, 
				    z__1.i = temp.r * a[i__4].i + temp.i * a[
				    i__4].r;
			    temp.r = z__1.r, temp.i = z__1.i;
			}
/* Computing MIN */
			i__1 = *n, i__2 = j + *k;
			i__4 = min(i__1,i__2);
			for (i__ = j + 1; i__ <= i__4; ++i__) {
			    i__1 = l + i__ + j * a_dim1;
			    i__2 = i__;
			    z__2.r = a[i__1].r * x[i__2].r - a[i__1].i * x[
				    i__2].i, z__2.i = a[i__1].r * x[i__2].i + 
				    a[i__1].i * x[i__2].r;
			    z__1.r = temp.r + z__2.r, z__1.i = temp.i + 
				    z__2.i;
			    temp.r = z__1.r, temp.i = z__1.i;
/* L150: */
			}
		    } else {
			if (nounit) {
			    d_cnjg(&z__2, &a[j * a_dim1 + 1]);
			    z__1.r = temp.r * z__2.r - temp.i * z__2.i, 
				    z__1.i = temp.r * z__2.i + temp.i * 
				    z__2.r;
			    temp.r = z__1.r, temp.i = z__1.i;
			}
/* Computing MIN */
			i__1 = *n, i__2 = j + *k;
			i__4 = min(i__1,i__2);
			for (i__ = j + 1; i__ <= i__4; ++i__) {
			    d_cnjg(&z__3, &a[l + i__ + j * a_dim1]);
			    i__1 = i__;
			    z__2.r = z__3.r * x[i__1].r - z__3.i * x[i__1].i, 
				    z__2.i = z__3.r * x[i__1].i + z__3.i * x[
				    i__1].r;
			    z__1.r = temp.r + z__2.r, z__1.i = temp.i + 
				    z__2.i;
			    temp.r = z__1.r, temp.i = z__1.i;
/* L160: */
			}
		    }
		    i__4 = j;
		    x[i__4].r = temp.r, x[i__4].i = temp.i;
/* L170: */
		}
	    } else {
		jx = kx;
		i__3 = *n;
		for (j = 1; j <= i__3; ++j) {
		    i__4 = jx;
		    temp.r = x[i__4].r, temp.i = x[i__4].i;
		    kx += *incx;
		    ix = kx;
		    l = 1 - j;
		    if (noconj) {
			if (nounit) {
			    i__4 = j * a_dim1 + 1;
			    z__1.r = temp.r * a[i__4].r - temp.i * a[i__4].i, 
				    z__1.i = temp.r * a[i__4].i + temp.i * a[
				    i__4].r;
			    temp.r = z__1.r, temp.i = z__1.i;
			}
/* Computing MIN */
			i__1 = *n, i__2 = j + *k;
			i__4 = min(i__1,i__2);
			for (i__ = j + 1; i__ <= i__4; ++i__) {
			    i__1 = l + i__ + j * a_dim1;
			    i__2 = ix;
			    z__2.r = a[i__1].r * x[i__2].r - a[i__1].i * x[
				    i__2].i, z__2.i = a[i__1].r * x[i__2].i + 
				    a[i__1].i * x[i__2].r;
			    z__1.r = temp.r + z__2.r, z__1.i = temp.i + 
				    z__2.i;
			    temp.r = z__1.r, temp.i = z__1.i;
			    ix += *incx;
/* L180: */
			}
		    } else {
			if (nounit) {
			    d_cnjg(&z__2, &a[j * a_dim1 + 1]);
			    z__1.r = temp.r * z__2.r - temp.i * z__2.i, 
				    z__1.i = temp.r * z__2.i + temp.i * 
				    z__2.r;
			    temp.r = z__1.r, temp.i = z__1.i;
			}
/* Computing MIN */
			i__1 = *n, i__2 = j + *k;
			i__4 = min(i__1,i__2);
			for (i__ = j + 1; i__ <= i__4; ++i__) {
			    d_cnjg(&z__3, &a[l + i__ + j * a_dim1]);
			    i__1 = ix;
			    z__2.r = z__3.r * x[i__1].r - z__3.i * x[i__1].i, 
				    z__2.i = z__3.r * x[i__1].i + z__3.i * x[
				    i__1].r;
			    z__1.r = temp.r + z__2.r, z__1.i = temp.i + 
				    z__2.i;
			    temp.r = z__1.r, temp.i = z__1.i;
			    ix += *incx;
/* L190: */
			}
		    }
		    i__4 = jx;
		    x[i__4].r = temp.r, x[i__4].i = temp.i;
		    jx += *incx;
/* L200: */
		}
	    }
	}
    }

    return;

/*     End of ZTBMV . */

} /* ztbmv_ */

