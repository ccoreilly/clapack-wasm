/* dtpttr.f -- translated by f2c (version 20061008).
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
#include "blaswrap.h"

/* Subroutine */ int dtpttr_(char *uplo, integer *n, doublereal *ap, 
	doublereal *a, integer *lda, integer *info)
{
    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2;

    /* Local variables */
    integer i__, j, k;
    extern logical lsame_(char *, char *);
    logical lower;
    extern /* Subroutine */ void xerbla_(char *, integer *);


/*  -- LAPACK routine (version 3.2)                                    -- */

/*  -- Contributed by Julien Langou of the Univ. of Colorado Denver    -- */
/*  -- November 2008                                                   -- */

/*  -- LAPACK is a software package provided by Univ. of Tennessee,    -- */
/*  -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..-- */

/*     .. Scalar Arguments .. */
/*     .. */
/*     .. Array Arguments .. */
/*     .. */

/*  Purpose */
/*  ======= */

/*  DTPTTR copies a triangular matrix A from standard packed format (TP) */
/*  to standard full format (TR). */

/*  Arguments */
/*  ========= */

/*  UPLO    (input) CHARACTER */
/*          = 'U':  A is upper triangular. */
/*          = 'L':  A is lower triangular. */

/*  N       (input) INTEGER */
/*          The order of the matrix A. N >= 0. */

/*  AP      (input) DOUBLE PRECISION array, dimension ( N*(N+1)/2 ), */
/*          On entry, the upper or lower triangular matrix A, packed */
/*          columnwise in a linear array. The j-th column of A is stored */
/*          in the array AP as follows: */
/*          if UPLO = 'U', AP(i + (j-1)*j/2) = A(i,j) for 1<=i<=j; */
/*          if UPLO = 'L', AP(i + (j-1)*(2n-j)/2) = A(i,j) for j<=i<=n. */

/*  A       (output) DOUBLE PRECISION array, dimension ( LDA, N ) */
/*          On exit, the triangular matrix A.  If UPLO = 'U', the leading */
/*          N-by-N upper triangular part of A contains the upper */
/*          triangular part of the matrix A, and the strictly lower */
/*          triangular part of A is not referenced.  If UPLO = 'L', the */
/*          leading N-by-N lower triangular part of A contains the lower */
/*          triangular part of the matrix A, and the strictly upper */
/*          triangular part of A is not referenced. */

/*  LDA     (input) INTEGER */
/*          The leading dimension of the array A.  LDA >= max(1,N). */

/*  INFO    (output) INTEGER */
/*          = 0:  successful exit */
/*          < 0:  if INFO = -i, the i-th argument had an illegal value */

/*  ===================================================================== */

/*     .. Parameters .. */
/*     .. */
/*     .. Local Scalars .. */
/*     .. */
/*     .. External Functions .. */
/*     .. */
/*     .. External Subroutines .. */
/*     .. */
/*     .. Executable Statements .. */

/*     Test the input parameters. */

    /* Parameter adjustments */
    --ap;
    a_dim1 = *lda;
    a_offset = 1 + a_dim1;
    a -= a_offset;

    /* Function Body */
    *info = 0;
    lower = lsame_(uplo, "L");
    if (! lower && ! lsame_(uplo, "U")) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    } else if (*lda < max(1,*n)) {
	*info = -5;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DTPTTR", &i__1);
	return 0;
    }

    if (lower) {
	k = 0;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *n;
	    for (i__ = j; i__ <= i__2; ++i__) {
		++k;
		a[i__ + j * a_dim1] = ap[k];
	    }
	}
    } else {
	k = 0;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = j;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		++k;
		a[i__ + j * a_dim1] = ap[k];
	    }
	}
    }


    return 0;

/*     End of DTPTTR */

} /* dtpttr_ */