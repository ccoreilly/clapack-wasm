/* csscal.f -- translated by f2c (version 20191129).
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

/* > \brief \b CSSCAL */

/*  =========== DOCUMENTATION =========== */

/* Online html documentation available at */
/*            http://www.netlib.org/lapack/explore-html/ */

/*  Definition: */
/*  =========== */

/*       SUBROUTINE CSSCAL(N,SA,CX,INCX) */

/*       .. Scalar Arguments .. */
/*       REAL SA */
/*       INTEGER INCX,N */
/*       .. */
/*       .. Array Arguments .. */
/*       COMPLEX CX(*) */
/*       .. */


/* > \par Purpose: */
/*  ============= */
/* > */
/* > \verbatim */
/* > */
/* >    CSSCAL scales a complex vector by a real constant. */
/* > \endverbatim */

/*  Arguments: */
/*  ========== */

/* > \param[in] N */
/* > \verbatim */
/* >          N is INTEGER */
/* >         number of elements in input vector(s) */
/* > \endverbatim */
/* > */
/* > \param[in] SA */
/* > \verbatim */
/* >          SA is REAL */
/* >           On entry, SA specifies the scalar alpha. */
/* > \endverbatim */
/* > */
/* > \param[in,out] CX */
/* > \verbatim */
/* >          CX is COMPLEX array, dimension ( 1 + ( N - 1 )*abs( INCX ) ) */
/* > \endverbatim */
/* > */
/* > \param[in] INCX */
/* > \verbatim */
/* >          INCX is INTEGER */
/* >         storage spacing between elements of CX */
/* > \endverbatim */

/*  Authors: */
/*  ======== */

/* > \author Univ. of Tennessee */
/* > \author Univ. of California Berkeley */
/* > \author Univ. of Colorado Denver */
/* > \author NAG Ltd. */

/* > \date November 2017 */

/* > \ingroup complex_blas_level1 */

/* > \par Further Details: */
/*  ===================== */
/* > */
/* > \verbatim */
/* > */
/* >     jack dongarra, linpack, 3/11/78. */
/* >     modified 3/93 to return if incx .le. 0. */
/* >     modified 12/3/93, array(1) declarations changed to array(*) */
/* > \endverbatim */
/* > */
/*  ===================================================================== */
/* Subroutine */ void csscal_(integer *n, real *sa, complex *cx, integer *incx)
{
    /* System generated locals */
    integer i__1, i__2, i__3, i__4;
    real r__1, r__2;
    complex q__1;

    /* Builtin functions */
    double r_imag(complex *);

    /* Local variables */
    integer i__, nincx;


/*  -- Reference BLAS level1 routine (version 3.8.0) -- */
/*  -- Reference BLAS is a software package provided by Univ. of Tennessee,    -- */
/*  -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..-- */
/*     November 2017 */

/*     .. Scalar Arguments .. */
/*     .. */
/*     .. Array Arguments .. */
/*     .. */

/*  ===================================================================== */

/*     .. Local Scalars .. */
/*     .. */
/*     .. Intrinsic Functions .. */
/*     .. */
    /* Parameter adjustments */
    --cx;

    /* Function Body */
    if (*n <= 0 || *incx <= 0) {
	return;
    }
    if (*incx == 1) {

/*        code for increment equal to 1 */

	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__2 = i__;
	    i__3 = i__;
	    r__1 = *sa * cx[i__3].r;
	    r__2 = *sa * r_imag(&cx[i__]);
	    q__1.r = r__1, q__1.i = r__2;
	    cx[i__2].r = q__1.r, cx[i__2].i = q__1.i;
	}
    } else {

/*        code for increment not equal to 1 */

	nincx = *n * *incx;
	i__1 = nincx;
	i__2 = *incx;
	for (i__ = 1; i__2 < 0 ? i__ >= i__1 : i__ <= i__1; i__ += i__2) {
	    i__3 = i__;
	    i__4 = i__;
	    r__1 = *sa * cx[i__4].r;
	    r__2 = *sa * r_imag(&cx[i__]);
	    q__1.r = r__1, q__1.i = r__2;
	    cx[i__3].r = q__1.r, cx[i__3].i = q__1.i;
	}
    }
    return;
} /* csscal_ */

