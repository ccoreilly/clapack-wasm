/* crotg.f -- translated by f2c (version 20191129).
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

/* > \brief \b CROTG */

/*  =========== DOCUMENTATION =========== */

/* Online html documentation available at */
/*            http://www.netlib.org/lapack/explore-html/ */

/*  Definition: */
/*  =========== */

/*       SUBROUTINE CROTG(CA,CB,C,S) */

/*       .. Scalar Arguments .. */
/*       COMPLEX CA,CB,S */
/*       REAL C */
/*       .. */


/* > \par Purpose: */
/*  ============= */
/* > */
/* > \verbatim */
/* > */
/* > CROTG determines a complex Givens rotation. */
/* > \endverbatim */

/*  Arguments: */
/*  ========== */

/* > \param[in] CA */
/* > \verbatim */
/* >          CA is COMPLEX */
/* > \endverbatim */
/* > */
/* > \param[in] CB */
/* > \verbatim */
/* >          CB is COMPLEX */
/* > \endverbatim */
/* > */
/* > \param[out] C */
/* > \verbatim */
/* >          C is REAL */
/* > \endverbatim */
/* > */
/* > \param[out] S */
/* > \verbatim */
/* >          S is COMPLEX */
/* > \endverbatim */

/*  Authors: */
/*  ======== */

/* > \author Univ. of Tennessee */
/* > \author Univ. of California Berkeley */
/* > \author Univ. of Colorado Denver */
/* > \author NAG Ltd. */

/* > \date November 2017 */

/* > \ingroup complex_blas_level1 */

/*  ===================================================================== */
/* Subroutine */ int crotg_(complex *ca, complex *cb, real *c__, complex *s)
{
    /* System generated locals */
    real r__1, r__2;
    complex q__1, q__2, q__3;

    /* Builtin functions */
    double c_abs(complex *), sqrt(doublereal);
    void r_cnjg(complex *, complex *);

    /* Local variables */
    real norm;
    complex alpha;
    real scale;


/*  -- Reference BLAS level1 routine (version 3.8.0) -- */
/*  -- Reference BLAS is a software package provided by Univ. of Tennessee,    -- */
/*  -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..-- */
/*     November 2017 */

/*     .. Scalar Arguments .. */
/*     .. */

/*  ===================================================================== */

/*     .. Local Scalars .. */
/*     .. */
/*     .. Intrinsic Functions .. */
/*     .. */
    if (c_abs(ca) == 0.f) {
	*c__ = 0.f;
	s->r = 1.f, s->i = 0.f;
	ca->r = cb->r, ca->i = cb->i;
    } else {
	scale = c_abs(ca) + c_abs(cb);
	q__1.r = ca->r / scale, q__1.i = ca->i / scale;
/* Computing 2nd power */
	r__1 = c_abs(&q__1);
	q__2.r = cb->r / scale, q__2.i = cb->i / scale;
/* Computing 2nd power */
	r__2 = c_abs(&q__2);
	norm = scale * sqrt(r__1 * r__1 + r__2 * r__2);
	r__1 = c_abs(ca);
	q__1.r = ca->r / r__1, q__1.i = ca->i / r__1;
	alpha.r = q__1.r, alpha.i = q__1.i;
	*c__ = c_abs(ca) / norm;
	r_cnjg(&q__3, cb);
	q__2.r = alpha.r * q__3.r - alpha.i * q__3.i, q__2.i = alpha.r * 
		q__3.i + alpha.i * q__3.r;
	q__1.r = q__2.r / norm, q__1.i = q__2.i / norm;
	s->r = q__1.r, s->i = q__1.i;
	q__1.r = norm * alpha.r, q__1.i = norm * alpha.i;
	ca->r = q__1.r, ca->i = q__1.i;
    }
    return 0;
} /* crotg_ */

