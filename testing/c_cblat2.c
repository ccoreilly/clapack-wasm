/* testing/c_cblat2.f -- translated by f2c (version 20191129).
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

/* Common Block Declarations */

struct {
    integer infot, noutc;
    logical ok;
} infoc_;

#define infoc_1 infoc_

struct {
    char srnamt[12];
} srnamc_;

#define srnamc_1 srnamc_

/* Table of constant values */

static complex c_b1 = {0.f,0.f};
static complex c_b2 = {1.f,0.f};
static integer c__9 = 9;
static integer c__1 = 1;
static integer c__3 = 3;
static integer c__8 = 8;
static integer c__4 = 4;
static integer c__65 = 65;
static integer c__7 = 7;
static integer c__2 = 2;
static integer c__6 = 6;
static real c_b125 = 1.f;
static logical c_true = TRUE_;
static integer c_n1 = -1;
static integer c__0 = 0;
static logical c_false = FALSE_;

/* Main program */ int MAIN__(void)
{
    /* Initialized data */

    static char snames[12*17] = "cblas_cgemv " "cblas_cgbmv " "cblas_chemv " 
	    "cblas_chbmv " "cblas_chpmv " "cblas_ctrmv " "cblas_ctbmv " "cbl"
	    "as_ctpmv " "cblas_ctrsv " "cblas_ctbsv " "cblas_ctpsv " "cblas_c"
	    "gerc " "cblas_cgeru " "cblas_cher  " "cblas_chpr  " "cblas_cher2 "
	     "cblas_chpr2 ";

    /* Format strings */
    static char fmt_9997[] = "(\002 NUMBER OF VALUES OF \002,a,\002 IS LESS "
	    "THAN 1 OR GREATER \002,\002THAN \002,i2)";
    static char fmt_9996[] = "(\002 VALUE OF N IS LESS THAN 0 OR GREATER THA"
	    "N \002,i2)";
    static char fmt_9995[] = "(\002 VALUE OF K IS LESS THAN 0\002)";
    static char fmt_9994[] = "(\002 ABSOLUTE VALUE OF INCX OR INCY IS 0 OR G"
	    "REATER THAN \002,i2)";
    static char fmt_9993[] = "(\002 TESTS OF THE COMPLEX          LEVEL 2 BL"
	    "AS\002,//\002 THE F\002,\002OLLOWING PARAMETER VALUES WILL BE US"
	    "ED:\002)";
    static char fmt_9992[] = "(\002   FOR N              \002,9i6)";
    static char fmt_9991[] = "(\002   FOR K              \002,7i6)";
    static char fmt_9990[] = "(\002   FOR INCX AND INCY  \002,7i6)";
    static char fmt_9989[] = "(\002   FOR ALPHA          \002,7(\002(\002,f4"
	    ".1,\002,\002,f4.1,\002)  \002,:))";
    static char fmt_9988[] = "(\002   FOR BETA           \002,7(\002(\002,f4"
	    ".1,\002,\002,f4.1,\002)  \002,:))";
    static char fmt_9980[] = "(\002 ERROR-EXITS WILL NOT BE TESTED\002)";
    static char fmt_9999[] = "(\002 ROUTINES PASS COMPUTATIONAL TESTS IF TES"
	    "T RATIO IS LES\002,\002S THAN\002,f8.2)";
    static char fmt_10002[] = "(\002 COLUMN-MAJOR AND ROW-MAJOR DATA LAYOUTS"
	    " ARE TESTED\002)";
    static char fmt_10001[] = "(\002 ROW-MAJOR DATA LAYOUT IS TESTED\002)";
    static char fmt_10000[] = "(\002 COLUMN-MAJOR DATA LAYOUT IS TESTED\002)";
    static char fmt_9984[] = "(a12,l2)";
    static char fmt_9986[] = "(\002 SUBPROGRAM NAME \002,a12,\002 NOT RECOGN"
	    "IZED\002,/\002 ******* T\002,\002ESTS ABANDONED *******\002)";
    static char fmt_9998[] = "(\002 RELATIVE MACHINE PRECISION IS TAKEN TO"
	    " BE\002,1p,e9.1)";
    static char fmt_9985[] = "(\002 ERROR IN CMVCH -  IN-LINE DOT PRODUCTS A"
	    "RE BEING EVALU\002,\002ATED WRONGLY.\002,/\002 CMVCH WAS CALLED "
	    "WITH TRANS = \002,a1,\002 AND RETURNED SAME = \002,l1,\002 AND E"
	    "RR = \002,f12.3,\002.\002,/\002 THIS MAY BE DUE TO FAULTS IN THE"
	    " ARITHMETIC OR THE COMPILER.\002,/\002 ******* TESTS ABANDONED *"
	    "******\002)";
    static char fmt_9983[] = "(1x,a12,\002 WAS NOT TESTED\002)";
    static char fmt_9982[] = "(/\002 END OF TESTS\002)";
    static char fmt_9981[] = "(/\002 ******* FATAL ERROR - TESTS ABANDONED *"
	    "******\002)";
    static char fmt_9987[] = "(\002 AMEND DATA FILE OR INCREASE ARRAY SIZES "
	    "IN PROGRAM\002,/\002 ******* TESTS ABANDONED *******\002)";

    /* System generated locals */
    integer i__1, i__2, i__3, i__4, i__5;
    real r__1;
    olist o__1;
    cllist cl__1;

    /* Builtin functions */
    integer s_rsle(cilist *), do_lio(integer *, integer *, char *, ftnlen), 
	    e_rsle(void), f_open(olist *), s_wsfe(cilist *), do_fio(integer *,
	     char *, ftnlen), e_wsfe(void), s_wsle(cilist *), e_wsle(void), 
	    s_rsfe(cilist *), e_rsfe(void), s_cmp(char *, char *, ftnlen, 
	    ftnlen);
    /* Subroutine */ int s_stop(char *, ftnlen);
    integer f_clos(cllist *);
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);

    /* Local variables */
    complex a[4225]	/* was [65][65] */;
    real g[65];
    integer i__, j, n;
    complex x[65], y[65], z__[130], aa[4225];
    integer kb[7];
    complex as[4225], xs[130], ys[130], yt[65], xx[130], yy[130], alf[7];
    extern logical lce_(complex *, complex *, integer *);
    integer inc[7], nkb;
    complex bet[7];
    real eps, err;
    integer nalf, idim[9];
    logical same;
    integer ninc, nbet, ntra;
    logical rewi;
    extern /* Subroutine */ int cchk1_(char *, real *, real *, integer *, 
	    integer *, logical *, logical *, logical *, integer *, integer *, 
	    integer *, integer *, integer *, complex *, integer *, complex *, 
	    integer *, integer *, integer *, integer *, complex *, complex *, 
	    complex *, complex *, complex *, complex *, complex *, complex *, 
	    complex *, complex *, real *, integer *, ftnlen), cchk2_(char *, 
	    real *, real *, integer *, integer *, logical *, logical *, 
	    logical *, integer *, integer *, integer *, integer *, integer *, 
	    complex *, integer *, complex *, integer *, integer *, integer *, 
	    integer *, complex *, complex *, complex *, complex *, complex *, 
	    complex *, complex *, complex *, complex *, complex *, real *, 
	    integer *, ftnlen), cchk3_(char *, real *, real *, integer *, 
	    integer *, logical *, logical *, logical *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, integer *, 
	    complex *, complex *, complex *, complex *, complex *, complex *, 
	    complex *, real *, complex *, integer *, ftnlen), cchk4_(char *, 
	    real *, real *, integer *, integer *, logical *, logical *, 
	    logical *, integer *, integer *, integer *, complex *, integer *, 
	    integer *, integer *, integer *, complex *, complex *, complex *, 
	    complex *, complex *, complex *, complex *, complex *, complex *, 
	    complex *, real *, complex *, integer *, ftnlen), cchk5_(char *, 
	    real *, real *, integer *, integer *, logical *, logical *, 
	    logical *, integer *, integer *, integer *, complex *, integer *, 
	    integer *, integer *, integer *, complex *, complex *, complex *, 
	    complex *, complex *, complex *, complex *, complex *, complex *, 
	    complex *, real *, complex *, integer *, ftnlen), cchk6_(char *, 
	    real *, real *, integer *, integer *, logical *, logical *, 
	    logical *, integer *, integer *, integer *, complex *, integer *, 
	    integer *, integer *, integer *, complex *, complex *, complex *, 
	    complex *, complex *, complex *, complex *, complex *, complex *, 
	    complex *, real *, complex *, integer *, ftnlen);
    logical fatal;
    extern real sdiff_(real *, real *);
    logical trace;
    integer nidim;
    extern /* Subroutine */ int cmvch_(char *, integer *, integer *, complex *
	    , complex *, integer *, complex *, integer *, complex *, complex *
	    , integer *, complex *, real *, complex *, real *, real *, 
	    logical *, integer *, logical *, ftnlen);
    char snaps[32], trans[1];
    integer isnum;
    logical ltest[17], sfatal, corder;
    char snamet[12];
    real thresh;
    logical rorder;
    extern /* Subroutine */ int cc2chke_(char *, ftnlen);
    integer layout;
    logical ltestt, tsterr;

    /* Fortran I/O blocks */
    static cilist io___2 = { 0, 5, 0, 0, 0 };
    static cilist io___4 = { 0, 5, 0, 0, 0 };
    static cilist io___7 = { 0, 5, 0, 0, 0 };
    static cilist io___9 = { 0, 5, 0, 0, 0 };
    static cilist io___11 = { 0, 5, 0, 0, 0 };
    static cilist io___13 = { 0, 5, 0, 0, 0 };
    static cilist io___15 = { 0, 5, 0, 0, 0 };
    static cilist io___17 = { 0, 5, 0, 0, 0 };
    static cilist io___19 = { 0, 6, 0, fmt_9997, 0 };
    static cilist io___20 = { 0, 5, 0, 0, 0 };
    static cilist io___23 = { 0, 6, 0, fmt_9996, 0 };
    static cilist io___24 = { 0, 5, 0, 0, 0 };
    static cilist io___26 = { 0, 6, 0, fmt_9997, 0 };
    static cilist io___27 = { 0, 5, 0, 0, 0 };
    static cilist io___29 = { 0, 6, 0, fmt_9995, 0 };
    static cilist io___30 = { 0, 5, 0, 0, 0 };
    static cilist io___32 = { 0, 6, 0, fmt_9997, 0 };
    static cilist io___33 = { 0, 5, 0, 0, 0 };
    static cilist io___35 = { 0, 6, 0, fmt_9994, 0 };
    static cilist io___36 = { 0, 5, 0, 0, 0 };
    static cilist io___38 = { 0, 6, 0, fmt_9997, 0 };
    static cilist io___39 = { 0, 5, 0, 0, 0 };
    static cilist io___41 = { 0, 5, 0, 0, 0 };
    static cilist io___43 = { 0, 6, 0, fmt_9997, 0 };
    static cilist io___44 = { 0, 5, 0, 0, 0 };
    static cilist io___46 = { 0, 6, 0, fmt_9993, 0 };
    static cilist io___47 = { 0, 6, 0, fmt_9992, 0 };
    static cilist io___48 = { 0, 6, 0, fmt_9991, 0 };
    static cilist io___49 = { 0, 6, 0, fmt_9990, 0 };
    static cilist io___50 = { 0, 6, 0, fmt_9989, 0 };
    static cilist io___51 = { 0, 6, 0, fmt_9988, 0 };
    static cilist io___52 = { 0, 6, 0, 0, 0 };
    static cilist io___53 = { 0, 6, 0, fmt_9980, 0 };
    static cilist io___54 = { 0, 6, 0, 0, 0 };
    static cilist io___55 = { 0, 6, 0, fmt_9999, 0 };
    static cilist io___56 = { 0, 6, 0, 0, 0 };
    static cilist io___59 = { 0, 6, 0, fmt_10002, 0 };
    static cilist io___60 = { 0, 6, 0, fmt_10001, 0 };
    static cilist io___61 = { 0, 6, 0, fmt_10000, 0 };
    static cilist io___62 = { 0, 6, 0, 0, 0 };
    static cilist io___64 = { 0, 5, 1, fmt_9984, 0 };
    static cilist io___67 = { 0, 6, 0, fmt_9986, 0 };
    static cilist io___69 = { 0, 6, 0, fmt_9998, 0 };
    static cilist io___82 = { 0, 6, 0, fmt_9985, 0 };
    static cilist io___83 = { 0, 6, 0, fmt_9985, 0 };
    static cilist io___85 = { 0, 6, 0, 0, 0 };
    static cilist io___86 = { 0, 6, 0, fmt_9983, 0 };
    static cilist io___87 = { 0, 6, 0, 0, 0 };
    static cilist io___94 = { 0, 6, 0, fmt_9982, 0 };
    static cilist io___95 = { 0, 6, 0, fmt_9981, 0 };
    static cilist io___96 = { 0, 6, 0, fmt_9987, 0 };



/*  Test program for the COMPLEX          Level 2 Blas. */

/*  The program must be driven by a short data file. The first 17 records */
/*  of the file are read using list-directed input, the last 17 records */
/*  are read using the format ( A12, L2 ). An annotated example of a data */
/*  file can be obtained by deleting the first 3 characters from the */
/*  following 34 lines: */
/*  'CBLAT2.SNAP'     NAME OF SNAPSHOT OUTPUT FILE */
/*  -1                UNIT NUMBER OF SNAPSHOT FILE (NOT USED IF .LT. 0) */
/*  F        LOGICAL FLAG, T TO REWIND SNAPSHOT FILE AFTER EACH RECORD. */
/*  F        LOGICAL FLAG, T TO STOP ON FAILURES. */
/*  T        LOGICAL FLAG, T TO TEST ERROR EXITS. */
/*  2        0 TO TEST COLUMN-MAJOR, 1 TO TEST ROW-MAJOR, 2 TO TEST BOTH */
/*  16.0     THRESHOLD VALUE OF TEST RATIO */
/*  6                 NUMBER OF VALUES OF N */
/*  0 1 2 3 5 9       VALUES OF N */
/*  4                 NUMBER OF VALUES OF K */
/*  0 1 2 4           VALUES OF K */
/*  4                 NUMBER OF VALUES OF INCX AND INCY */
/*  1 2 -1 -2         VALUES OF INCX AND INCY */
/*  3                 NUMBER OF VALUES OF ALPHA */
/*  (0.0,0.0) (1.0,0.0) (0.7,-0.9)       VALUES OF ALPHA */
/*  3                 NUMBER OF VALUES OF BETA */
/*  (0.0,0.0) (1.0,0.0) (1.3,-1.1)       VALUES OF BETA */
/*  cblas_cgemv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_cgbmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_chemv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_chbmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_chpmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_ctrmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_ctbmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_ctpmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_ctrsv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_ctbsv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_ctpsv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_cgerc  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_cgeru  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_cher   T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_chpr   T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_cher2  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_chpr2  T PUT F FOR NO TEST. SAME COLUMNS. */

/*     See: */

/*        Dongarra J. J., Du Croz J. J., Hammarling S.  and Hanson R. J.. */
/*        An  extended  set of Fortran  Basic Linear Algebra Subprograms. */

/*        Technical  Memoranda  Nos. 41 (revision 3) and 81,  Mathematics */
/*        and  Computer Science  Division,  Argonne  National Laboratory, */
/*        9700 South Cass Avenue, Argonne, Illinois 60439, US. */

/*        Or */

/*        NAG  Technical Reports TR3/87 and TR4/87,  Numerical Algorithms */
/*        Group  Ltd.,  NAG  Central  Office,  256  Banbury  Road, Oxford */
/*        OX2 7DE, UK,  and  Numerical Algorithms Group Inc.,  1101  31st */
/*        Street,  Suite 100,  Downers Grove,  Illinois 60515-1263,  USA. */


/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Parameters .. */
/*     .. Local Scalars .. */
/*     .. Local Arrays .. */
/*     .. External Functions .. */
/*     .. External Subroutines .. */
/*     .. Intrinsic Functions .. */
/*     .. Scalars in Common .. */
/*     .. Common blocks .. */
/*     .. Data statements .. */
/*     .. Executable Statements .. */

    infoc_1.noutc = 6;

/*     Read name and unit number for summary output file and open file. */

    s_rsle(&io___2);
    do_lio(&c__9, &c__1, snaps, (ftnlen)32);
    e_rsle();
    s_rsle(&io___4);
    do_lio(&c__3, &c__1, (char *)&ntra, (ftnlen)sizeof(integer));
    e_rsle();
    trace = ntra >= 0;
    if (trace) {
	o__1.oerr = 0;
	o__1.ounit = ntra;
	o__1.ofnmlen = 32;
	o__1.ofnm = snaps;
	o__1.orl = 0;
	o__1.osta = 0;
	o__1.oacc = 0;
	o__1.ofm = 0;
	o__1.oblnk = 0;
	f_open(&o__1);
    }
/*     Read the flag that directs rewinding of the snapshot file. */
    s_rsle(&io___7);
    do_lio(&c__8, &c__1, (char *)&rewi, (ftnlen)sizeof(logical));
    e_rsle();
    rewi = rewi && trace;
/*     Read the flag that directs stopping on any failure. */
    s_rsle(&io___9);
    do_lio(&c__8, &c__1, (char *)&sfatal, (ftnlen)sizeof(logical));
    e_rsle();
/*     Read the flag that indicates whether error exits are to be tested. */
    s_rsle(&io___11);
    do_lio(&c__8, &c__1, (char *)&tsterr, (ftnlen)sizeof(logical));
    e_rsle();
/*     Read the flag that indicates whether row-major data layout to be tested. */
    s_rsle(&io___13);
    do_lio(&c__3, &c__1, (char *)&layout, (ftnlen)sizeof(integer));
    e_rsle();
/*     Read the threshold value of the test ratio */
    s_rsle(&io___15);
    do_lio(&c__4, &c__1, (char *)&thresh, (ftnlen)sizeof(real));
    e_rsle();

/*     Read and check the parameter values for the tests. */

/*     Values of N */
    s_rsle(&io___17);
    do_lio(&c__3, &c__1, (char *)&nidim, (ftnlen)sizeof(integer));
    e_rsle();
    if (nidim < 1 || nidim > 9) {
	s_wsfe(&io___19);
	do_fio(&c__1, "N", (ftnlen)1);
	do_fio(&c__1, (char *)&c__9, (ftnlen)sizeof(integer));
	e_wsfe();
	goto L230;
    }
    s_rsle(&io___20);
    i__1 = nidim;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_lio(&c__3, &c__1, (char *)&idim[i__ - 1], (ftnlen)sizeof(integer));
    }
    e_rsle();
    i__1 = nidim;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (idim[i__ - 1] < 0 || idim[i__ - 1] > 65) {
	    s_wsfe(&io___23);
	    do_fio(&c__1, (char *)&c__65, (ftnlen)sizeof(integer));
	    e_wsfe();
	    goto L230;
	}
/* L10: */
    }
/*     Values of K */
    s_rsle(&io___24);
    do_lio(&c__3, &c__1, (char *)&nkb, (ftnlen)sizeof(integer));
    e_rsle();
    if (nkb < 1 || nkb > 7) {
	s_wsfe(&io___26);
	do_fio(&c__1, "K", (ftnlen)1);
	do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
	e_wsfe();
	goto L230;
    }
    s_rsle(&io___27);
    i__1 = nkb;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_lio(&c__3, &c__1, (char *)&kb[i__ - 1], (ftnlen)sizeof(integer));
    }
    e_rsle();
    i__1 = nkb;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (kb[i__ - 1] < 0) {
	    s_wsfe(&io___29);
	    e_wsfe();
	    goto L230;
	}
/* L20: */
    }
/*     Values of INCX and INCY */
    s_rsle(&io___30);
    do_lio(&c__3, &c__1, (char *)&ninc, (ftnlen)sizeof(integer));
    e_rsle();
    if (ninc < 1 || ninc > 7) {
	s_wsfe(&io___32);
	do_fio(&c__1, "INCX AND INCY", (ftnlen)13);
	do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
	e_wsfe();
	goto L230;
    }
    s_rsle(&io___33);
    i__1 = ninc;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_lio(&c__3, &c__1, (char *)&inc[i__ - 1], (ftnlen)sizeof(integer));
    }
    e_rsle();
    i__1 = ninc;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (inc[i__ - 1] == 0 || (i__2 = inc[i__ - 1], abs(i__2)) > 2) {
	    s_wsfe(&io___35);
	    do_fio(&c__1, (char *)&c__2, (ftnlen)sizeof(integer));
	    e_wsfe();
	    goto L230;
	}
/* L30: */
    }
/*     Values of ALPHA */
    s_rsle(&io___36);
    do_lio(&c__3, &c__1, (char *)&nalf, (ftnlen)sizeof(integer));
    e_rsle();
    if (nalf < 1 || nalf > 7) {
	s_wsfe(&io___38);
	do_fio(&c__1, "ALPHA", (ftnlen)5);
	do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
	e_wsfe();
	goto L230;
    }
    s_rsle(&io___39);
    i__1 = nalf;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_lio(&c__6, &c__1, (char *)&alf[i__ - 1], (ftnlen)sizeof(complex));
    }
    e_rsle();
/*     Values of BETA */
    s_rsle(&io___41);
    do_lio(&c__3, &c__1, (char *)&nbet, (ftnlen)sizeof(integer));
    e_rsle();
    if (nbet < 1 || nbet > 7) {
	s_wsfe(&io___43);
	do_fio(&c__1, "BETA", (ftnlen)4);
	do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
	e_wsfe();
	goto L230;
    }
    s_rsle(&io___44);
    i__1 = nbet;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_lio(&c__6, &c__1, (char *)&bet[i__ - 1], (ftnlen)sizeof(complex));
    }
    e_rsle();

/*     Report values of parameters. */

    s_wsfe(&io___46);
    e_wsfe();
    s_wsfe(&io___47);
    i__1 = nidim;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_fio(&c__1, (char *)&idim[i__ - 1], (ftnlen)sizeof(integer));
    }
    e_wsfe();
    s_wsfe(&io___48);
    i__1 = nkb;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_fio(&c__1, (char *)&kb[i__ - 1], (ftnlen)sizeof(integer));
    }
    e_wsfe();
    s_wsfe(&io___49);
    i__1 = ninc;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_fio(&c__1, (char *)&inc[i__ - 1], (ftnlen)sizeof(integer));
    }
    e_wsfe();
    s_wsfe(&io___50);
    i__1 = nalf;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_fio(&c__2, (char *)&alf[i__ - 1], (ftnlen)sizeof(real));
    }
    e_wsfe();
    s_wsfe(&io___51);
    i__1 = nbet;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_fio(&c__2, (char *)&bet[i__ - 1], (ftnlen)sizeof(real));
    }
    e_wsfe();
    if (! tsterr) {
	s_wsle(&io___52);
	e_wsle();
	s_wsfe(&io___53);
	e_wsfe();
    }
    s_wsle(&io___54);
    e_wsle();
    s_wsfe(&io___55);
    do_fio(&c__1, (char *)&thresh, (ftnlen)sizeof(real));
    e_wsfe();
    s_wsle(&io___56);
    e_wsle();
    rorder = FALSE_;
    corder = FALSE_;
    if (layout == 2) {
	rorder = TRUE_;
	corder = TRUE_;
	s_wsfe(&io___59);
	e_wsfe();
    } else if (layout == 1) {
	rorder = TRUE_;
	s_wsfe(&io___60);
	e_wsfe();
    } else if (layout == 0) {
	corder = TRUE_;
	s_wsfe(&io___61);
	e_wsfe();
    }
    s_wsle(&io___62);
    e_wsle();

/*     Read names of subroutines and flags which indicate */
/*     whether they are to be tested. */

    for (i__ = 1; i__ <= 17; ++i__) {
	ltest[i__ - 1] = FALSE_;
/* L40: */
    }
L50:
    i__1 = s_rsfe(&io___64);
    if (i__1 != 0) {
	goto L80;
    }
    i__1 = do_fio(&c__1, snamet, (ftnlen)12);
    if (i__1 != 0) {
	goto L80;
    }
    i__1 = do_fio(&c__1, (char *)&ltestt, (ftnlen)sizeof(logical));
    if (i__1 != 0) {
	goto L80;
    }
    i__1 = e_rsfe();
    if (i__1 != 0) {
	goto L80;
    }
    for (i__ = 1; i__ <= 17; ++i__) {
	if (s_cmp(snamet, snames + (i__ - 1) * 12, (ftnlen)12, (ftnlen)12) == 
		0) {
	    goto L70;
	}
/* L60: */
    }
    s_wsfe(&io___67);
    do_fio(&c__1, snamet, (ftnlen)12);
    e_wsfe();
    s_stop("", (ftnlen)0);
L70:
    ltest[i__ - 1] = ltestt;
    goto L50;

L80:
    cl__1.cerr = 0;
    cl__1.cunit = 5;
    cl__1.csta = 0;
    f_clos(&cl__1);

/*     Compute EPS (the machine precision). */

    eps = 1.f;
L90:
    r__1 = eps + 1.f;
    if (sdiff_(&r__1, &c_b125) == 0.f) {
	goto L100;
    }
    eps *= .5f;
    goto L90;
L100:
    eps += eps;
    s_wsfe(&io___69);
    do_fio(&c__1, (char *)&eps, (ftnlen)sizeof(real));
    e_wsfe();

/*     Check the reliability of CMVCH using exact data. */

    n = 32;
    i__1 = n;
    for (j = 1; j <= i__1; ++j) {
	i__2 = n;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    i__3 = i__ + j * 65 - 66;
/* Computing MAX */
	    i__5 = i__ - j + 1;
	    i__4 = max(i__5,0);
	    a[i__3].r = (real) i__4, a[i__3].i = 0.f;
/* L110: */
	}
	i__2 = j - 1;
	x[i__2].r = (real) j, x[i__2].i = 0.f;
	i__2 = j - 1;
	y[i__2].r = 0.f, y[i__2].i = 0.f;
/* L120: */
    }
    i__1 = n;
    for (j = 1; j <= i__1; ++j) {
	i__2 = j - 1;
	i__3 = j * ((j + 1) * j) / 2 - (j + 1) * j * (j - 1) / 3;
	yy[i__2].r = (real) i__3, yy[i__2].i = 0.f;
/* L130: */
    }
/*     YY holds the exact result. On exit from CMVCH YT holds */
/*     the result computed by CMVCH. */
    *(unsigned char *)trans = 'N';
    cmvch_(trans, &n, &n, &c_b2, a, &c__65, x, &c__1, &c_b1, y, &c__1, yt, g, 
	    yy, &eps, &err, &fatal, &c__6, &c_true, (ftnlen)1);
    same = lce_(yy, yt, &n);
    if (! same || err != 0.f) {
	s_wsfe(&io___82);
	do_fio(&c__1, trans, (ftnlen)1);
	do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
	do_fio(&c__1, (char *)&err, (ftnlen)sizeof(real));
	e_wsfe();
	s_stop("", (ftnlen)0);
    }
    *(unsigned char *)trans = 'T';
    cmvch_(trans, &n, &n, &c_b2, a, &c__65, x, &c_n1, &c_b1, y, &c_n1, yt, g, 
	    yy, &eps, &err, &fatal, &c__6, &c_true, (ftnlen)1);
    same = lce_(yy, yt, &n);
    if (! same || err != 0.f) {
	s_wsfe(&io___83);
	do_fio(&c__1, trans, (ftnlen)1);
	do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
	do_fio(&c__1, (char *)&err, (ftnlen)sizeof(real));
	e_wsfe();
	s_stop("", (ftnlen)0);
    }

/*     Test each subroutine in turn. */

    for (isnum = 1; isnum <= 17; ++isnum) {
	s_wsle(&io___85);
	e_wsle();
	if (! ltest[isnum - 1]) {
/*           Subprogram is not to be tested. */
	    s_wsfe(&io___86);
	    do_fio(&c__1, snames + (isnum - 1) * 12, (ftnlen)12);
	    e_wsfe();
	} else {
	    s_copy(srnamc_1.srnamt, snames + (isnum - 1) * 12, (ftnlen)12, (
		    ftnlen)12);
/*           Test error exits. */
	    if (tsterr) {
		cc2chke_(snames + (isnum - 1) * 12, (ftnlen)12);
		s_wsle(&io___87);
		e_wsle();
	    }
/*           Test computations. */
	    infoc_1.infot = 0;
	    infoc_1.ok = TRUE_;
	    fatal = FALSE_;
	    switch (isnum) {
		case 1:  goto L140;
		case 2:  goto L140;
		case 3:  goto L150;
		case 4:  goto L150;
		case 5:  goto L150;
		case 6:  goto L160;
		case 7:  goto L160;
		case 8:  goto L160;
		case 9:  goto L160;
		case 10:  goto L160;
		case 11:  goto L160;
		case 12:  goto L170;
		case 13:  goto L170;
		case 14:  goto L180;
		case 15:  goto L180;
		case 16:  goto L190;
		case 17:  goto L190;
	    }
/*           Test CGEMV, 01, and CGBMV, 02. */
L140:
	    if (corder) {
		cchk1_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf,
			 alf, &nbet, bet, &ninc, inc, &c__65, &c__2, a, aa, 
			as, x, xx, xs, y, yy, ys, yt, g, &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		cchk1_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf,
			 alf, &nbet, bet, &ninc, inc, &c__65, &c__2, a, aa, 
			as, x, xx, xs, y, yy, ys, yt, g, &c__1, (ftnlen)12);
	    }
	    goto L200;
/*           Test CHEMV, 03, CHBMV, 04, and CHPMV, 05. */
L150:
	    if (corder) {
		cchk2_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf,
			 alf, &nbet, bet, &ninc, inc, &c__65, &c__2, a, aa, 
			as, x, xx, xs, y, yy, ys, yt, g, &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		cchk2_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf,
			 alf, &nbet, bet, &ninc, inc, &c__65, &c__2, a, aa, 
			as, x, xx, xs, y, yy, ys, yt, g, &c__1, (ftnlen)12);
	    }
	    goto L200;
/*           Test CTRMV, 06, CTBMV, 07, CTPMV, 08, */
/*           CTRSV, 09, CTBSV, 10, and CTPSV, 11. */
L160:
	    if (corder) {
		cchk3_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &ninc,
			 inc, &c__65, &c__2, a, aa, as, y, yy, ys, yt, g, z__,
			 &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		cchk3_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &ninc,
			 inc, &c__65, &c__2, a, aa, as, y, yy, ys, yt, g, z__,
			 &c__1, (ftnlen)12);
	    }
	    goto L200;
/*           Test CGERC, 12, CGERU, 13. */
L170:
	    if (corder) {
		cchk4_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		cchk4_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__1, (ftnlen)12);
	    }
	    goto L200;
/*           Test CHER, 14, and CHPR, 15. */
L180:
	    if (corder) {
		cchk5_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		cchk5_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__1, (ftnlen)12);
	    }
	    goto L200;
/*           Test CHER2, 16, and CHPR2, 17. */
L190:
	    if (corder) {
		cchk6_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		cchk6_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__1, (ftnlen)12);
	    }

L200:
	    if (fatal && sfatal) {
		goto L220;
	    }
	}
/* L210: */
    }
    s_wsfe(&io___94);
    e_wsfe();
    goto L240;

L220:
    s_wsfe(&io___95);
    e_wsfe();
    goto L240;

L230:
    s_wsfe(&io___96);
    e_wsfe();

L240:
    if (trace) {
	cl__1.cerr = 0;
	cl__1.cunit = ntra;
	cl__1.csta = 0;
	f_clos(&cl__1);
    }
    cl__1.cerr = 0;
    cl__1.cunit = 6;
    cl__1.csta = 0;
    f_clos(&cl__1);
    s_stop("", (ftnlen)0);


/*     End of CBLAT2. */

    return 0;
} /* MAIN__ */

/* Subroutine */ int cchk1_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nkb, integer *kb, integer *
	nalf, complex *alf, integer *nbet, complex *bet, integer *ninc, 
	integer *inc, integer *nmax, integer *incmax, complex *a, complex *aa,
	 complex *as, complex *x, complex *xx, complex *xs, complex *y, 
	complex *yy, complex *ys, complex *yt, real *g, integer *iorder, 
	ftnlen sname_len)
{
    /* Initialized data */

    static char ich[3] = "NTC";

    /* Format strings */
    static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "2(i3,\002,\002),\002(\002,f4.1,\002,\002,f4.1,\002), A,\002,/10x"
	    ",i3,\002, X,\002,i2,\002,(\002,f4.1,\002,\002,f4.1,\002), Y,\002"
	    ",i2,\002) .\002)";
    static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "4(i3,\002,\002),\002(\002,f4.1,\002,\002,f4.1,\002), A,\002,/10x"
	    ",i3,\002, X,\002,i2,\002,(\002,f4.1,\002,\002,f4.1,\002), Y,\002"
	    ",i2,\002) .\002)";
    static char fmt_9993[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
	    "N VALID CALL *\002,\002******\002)";
    static char fmt_9998[] = "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
	    " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
    static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
	    "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_9997[] = "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
	    "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
	    " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7, i__8, 
	    i__9;
    alist al__1;

    /* Builtin functions */
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);
    integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
	     f_rew(alist *);

    /* Local variables */
    integer i__, m, n, ia, ib, ic, nc, nd, im, in, kl, ml, nk, nl, ku, ix, iy,
	     ms, lx, ly, ns, laa, lda;
    extern logical lce_(complex *, complex *, integer *);
    complex als, bls;
    real err;
    integer iku, kls, kus;
    complex beta;
    integer ldas;
    logical same;
    integer incx, incy;
    logical full, tran, null;
    extern /* Subroutine */ int cmake_(char *, char *, char *, integer *, 
	    integer *, complex *, integer *, complex *, integer *, integer *, 
	    integer *, logical *, complex *, ftnlen, ftnlen, ftnlen);
    complex alpha;
    logical isame[13];
    extern /* Subroutine */ int cmvch_(char *, integer *, integer *, complex *
	    , complex *, integer *, complex *, integer *, complex *, complex *
	    , integer *, complex *, real *, complex *, real *, real *, 
	    logical *, integer *, logical *, ftnlen);
    integer nargs;
    logical reset;
    integer incxs, incys;
    char trans[1];
    logical banded;
    extern /* Subroutine */ int ccgbmv_(integer *, char *, integer *, integer 
	    *, integer *, integer *, complex *, complex *, integer *, complex 
	    *, integer *, complex *, complex *, integer *, ftnlen), ccgemv_(
	    integer *, char *, integer *, integer *, complex *, complex *, 
	    integer *, complex *, integer *, complex *, complex *, integer *, 
	    ftnlen);
    extern logical lceres_(char *, char *, integer *, integer *, complex *, 
	    complex *, integer *, ftnlen, ftnlen);
    char ctrans[14];
    real errmax;
    complex transl;
    char transs[1];

    /* Fortran I/O blocks */
    static cilist io___144 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___145 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___146 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___149 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___151 = { 0, 0, 0, fmt_9999, 0 };
    static cilist io___152 = { 0, 0, 0, fmt_9997, 0 };
    static cilist io___153 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___154 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___155 = { 0, 0, 0, fmt_9995, 0 };



/*  Tests CGEMV and CGBMV. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Parameters .. */
/*     .. Scalar Arguments .. */
/*     .. Array Arguments .. */
/*     .. Local Scalars .. */
/*     .. Local Arrays .. */
/*     .. External Functions .. */
/*     .. External Subroutines .. */
/*     .. Intrinsic Functions .. */
/*     .. Scalars in Common .. */
/*     .. Common blocks .. */
/*     .. Data statements .. */
    /* Parameter adjustments */
    --idim;
    --kb;
    --alf;
    --bet;
    --inc;
    --g;
    --yt;
    --y;
    --x;
    --as;
    --aa;
    a_dim1 = *nmax;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --ys;
    --yy;
    --xs;
    --xx;

    /* Function Body */
/*     .. Executable Statements .. */
    full = *(unsigned char *)&sname[8] == 'e';
    banded = *(unsigned char *)&sname[8] == 'b';
/*     Define the number of arguments. */
    if (full) {
	nargs = 11;
    } else if (banded) {
	nargs = 13;
    }

    nc = 0;
    reset = TRUE_;
    errmax = 0.f;

    i__1 = *nidim;
    for (in = 1; in <= i__1; ++in) {
	n = idim[in];
	nd = n / 2 + 1;

	for (im = 1; im <= 2; ++im) {
	    if (im == 1) {
/* Computing MAX */
		i__2 = n - nd;
		m = max(i__2,0);
	    }
	    if (im == 2) {
/* Computing MIN */
		i__2 = n + nd;
		m = min(i__2,*nmax);
	    }

	    if (banded) {
		nk = *nkb;
	    } else {
		nk = 1;
	    }
	    i__2 = nk;
	    for (iku = 1; iku <= i__2; ++iku) {
		if (banded) {
		    ku = kb[iku];
/* Computing MAX */
		    i__3 = ku - 1;
		    kl = max(i__3,0);
		} else {
		    ku = n - 1;
		    kl = m - 1;
		}
/*              Set LDA to 1 more than minimum value if room. */
		if (banded) {
		    lda = kl + ku + 1;
		} else {
		    lda = m;
		}
		if (lda < *nmax) {
		    ++lda;
		}
/*              Skip tests if not enough room. */
		if (lda > *nmax) {
		    goto L100;
		}
		laa = lda * n;
		null = n <= 0 || m <= 0;

/*              Generate the matrix A. */

		transl.r = 0.f, transl.i = 0.f;
		cmake_(sname + 7, " ", " ", &m, &n, &a[a_offset], nmax, &aa[1]
			, &lda, &kl, &ku, &reset, &transl, (ftnlen)2, (ftnlen)
			1, (ftnlen)1);

		for (ic = 1; ic <= 3; ++ic) {
		    *(unsigned char *)trans = *(unsigned char *)&ich[ic - 1];
		    if (*(unsigned char *)trans == 'N') {
			s_copy(ctrans, "  CblasNoTrans", (ftnlen)14, (ftnlen)
				14);
		    } else if (*(unsigned char *)trans == 'T') {
			s_copy(ctrans, "    CblasTrans", (ftnlen)14, (ftnlen)
				14);
		    } else {
			s_copy(ctrans, "CblasConjTrans", (ftnlen)14, (ftnlen)
				14);
		    }
		    tran = *(unsigned char *)trans == 'T' || *(unsigned char *
			    )trans == 'C';

		    if (tran) {
			ml = n;
			nl = m;
		    } else {
			ml = m;
			nl = n;
		    }

		    i__3 = *ninc;
		    for (ix = 1; ix <= i__3; ++ix) {
			incx = inc[ix];
			lx = abs(incx) * nl;

/*                    Generate the vector X. */

			transl.r = .5f, transl.i = 0.f;
			i__4 = abs(incx);
			i__5 = nl - 1;
			cmake_("ge", " ", " ", &c__1, &nl, &x[1], &c__1, &xx[
				1], &i__4, &c__0, &i__5, &reset, &transl, (
				ftnlen)2, (ftnlen)1, (ftnlen)1);
			if (nl > 1) {
			    i__4 = nl / 2;
			    x[i__4].r = 0.f, x[i__4].i = 0.f;
			    i__4 = abs(incx) * (nl / 2 - 1) + 1;
			    xx[i__4].r = 0.f, xx[i__4].i = 0.f;
			}

			i__4 = *ninc;
			for (iy = 1; iy <= i__4; ++iy) {
			    incy = inc[iy];
			    ly = abs(incy) * ml;

			    i__5 = *nalf;
			    for (ia = 1; ia <= i__5; ++ia) {
				i__6 = ia;
				alpha.r = alf[i__6].r, alpha.i = alf[i__6].i;

				i__6 = *nbet;
				for (ib = 1; ib <= i__6; ++ib) {
				    i__7 = ib;
				    beta.r = bet[i__7].r, beta.i = bet[i__7]
					    .i;

/*                             Generate the vector Y. */

				    transl.r = 0.f, transl.i = 0.f;
				    i__7 = abs(incy);
				    i__8 = ml - 1;
				    cmake_("ge", " ", " ", &c__1, &ml, &y[1], 
					    &c__1, &yy[1], &i__7, &c__0, &
					    i__8, &reset, &transl, (ftnlen)2, 
					    (ftnlen)1, (ftnlen)1);

				    ++nc;

/*                             Save every datum before calling the */
/*                             subroutine. */

				    *(unsigned char *)transs = *(unsigned 
					    char *)trans;
				    ms = m;
				    ns = n;
				    kls = kl;
				    kus = ku;
				    als.r = alpha.r, als.i = alpha.i;
				    i__7 = laa;
				    for (i__ = 1; i__ <= i__7; ++i__) {
					i__8 = i__;
					i__9 = i__;
					as[i__8].r = aa[i__9].r, as[i__8].i = 
						aa[i__9].i;
/* L10: */
				    }
				    ldas = lda;
				    i__7 = lx;
				    for (i__ = 1; i__ <= i__7; ++i__) {
					i__8 = i__;
					i__9 = i__;
					xs[i__8].r = xx[i__9].r, xs[i__8].i = 
						xx[i__9].i;
/* L20: */
				    }
				    incxs = incx;
				    bls.r = beta.r, bls.i = beta.i;
				    i__7 = ly;
				    for (i__ = 1; i__ <= i__7; ++i__) {
					i__8 = i__;
					i__9 = i__;
					ys[i__8].r = yy[i__9].r, ys[i__8].i = 
						yy[i__9].i;
/* L30: */
				    }
				    incys = incy;

/*                             Call the subroutine. */

				    if (full) {
					if (*trace) {
					    io___144.ciunit = *ntra;
					    s_wsfe(&io___144);
					    do_fio(&c__1, (char *)&nc, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__1, sname, (ftnlen)12);
					    do_fio(&c__1, ctrans, (ftnlen)14);
					    do_fio(&c__1, (char *)&m, (ftnlen)
						    sizeof(integer));
					    do_fio(&c__1, (char *)&n, (ftnlen)
						    sizeof(integer));
					    do_fio(&c__2, (char *)&alpha, (
						    ftnlen)sizeof(real));
					    do_fio(&c__1, (char *)&lda, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__1, (char *)&incx, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__2, (char *)&beta, (
						    ftnlen)sizeof(real));
					    do_fio(&c__1, (char *)&incy, (
						    ftnlen)sizeof(integer));
					    e_wsfe();
					}
					if (*rewi) {
					    al__1.aerr = 0;
					    al__1.aunit = *ntra;
					    f_rew(&al__1);
					}
					ccgemv_(iorder, trans, &m, &n, &alpha,
						 &aa[1], &lda, &xx[1], &incx, 
						&beta, &yy[1], &incy, (ftnlen)
						1);
				    } else if (banded) {
					if (*trace) {
					    io___145.ciunit = *ntra;
					    s_wsfe(&io___145);
					    do_fio(&c__1, (char *)&nc, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__1, sname, (ftnlen)12);
					    do_fio(&c__1, ctrans, (ftnlen)14);
					    do_fio(&c__1, (char *)&m, (ftnlen)
						    sizeof(integer));
					    do_fio(&c__1, (char *)&n, (ftnlen)
						    sizeof(integer));
					    do_fio(&c__1, (char *)&kl, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__1, (char *)&ku, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__2, (char *)&alpha, (
						    ftnlen)sizeof(real));
					    do_fio(&c__1, (char *)&lda, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__1, (char *)&incx, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__2, (char *)&beta, (
						    ftnlen)sizeof(real));
					    do_fio(&c__1, (char *)&incy, (
						    ftnlen)sizeof(integer));
					    e_wsfe();
					}
					if (*rewi) {
					    al__1.aerr = 0;
					    al__1.aunit = *ntra;
					    f_rew(&al__1);
					}
					ccgbmv_(iorder, trans, &m, &n, &kl, &
						ku, &alpha, &aa[1], &lda, &xx[
						1], &incx, &beta, &yy[1], &
						incy, (ftnlen)1);
				    }

/*                            Check if error-exit was taken incorrectly. */

				    if (! infoc_1.ok) {
					io___146.ciunit = *nout;
					s_wsfe(&io___146);
					e_wsfe();
					*fatal = TRUE_;
					goto L130;
				    }

/*                             See what data changed inside subroutines. */

/*        IF(TRANS .NE. 'C' .OR. (INCX .GT. 0 .AND. INCY .GT. 0)) THEN */
				    isame[0] = *(unsigned char *)trans == *(
					    unsigned char *)transs;
				    isame[1] = ms == m;
				    isame[2] = ns == n;
				    if (full) {
					isame[3] = als.r == alpha.r && als.i 
						== alpha.i;
					isame[4] = lce_(&as[1], &aa[1], &laa);
					isame[5] = ldas == lda;
					isame[6] = lce_(&xs[1], &xx[1], &lx);
					isame[7] = incxs == incx;
					isame[8] = bls.r == beta.r && bls.i ==
						 beta.i;
					if (null) {
					    isame[9] = lce_(&ys[1], &yy[1], &
						    ly);
					} else {
					    i__7 = abs(incy);
					    isame[9] = lceres_("ge", " ", &
						    c__1, &ml, &ys[1], &yy[1],
						     &i__7, (ftnlen)2, (
						    ftnlen)1);
					}
					isame[10] = incys == incy;
				    } else if (banded) {
					isame[3] = kls == kl;
					isame[4] = kus == ku;
					isame[5] = als.r == alpha.r && als.i 
						== alpha.i;
					isame[6] = lce_(&as[1], &aa[1], &laa);
					isame[7] = ldas == lda;
					isame[8] = lce_(&xs[1], &xx[1], &lx);
					isame[9] = incxs == incx;
					isame[10] = bls.r == beta.r && bls.i 
						== beta.i;
					if (null) {
					    isame[11] = lce_(&ys[1], &yy[1], &
						    ly);
					} else {
					    i__7 = abs(incy);
					    isame[11] = lceres_("ge", " ", &
						    c__1, &ml, &ys[1], &yy[1],
						     &i__7, (ftnlen)2, (
						    ftnlen)1);
					}
					isame[12] = incys == incy;
				    }

/*                             If data was incorrectly changed, report */
/*                             and return. */

				    same = TRUE_;
				    i__7 = nargs;
				    for (i__ = 1; i__ <= i__7; ++i__) {
					same = same && isame[i__ - 1];
					if (! isame[i__ - 1]) {
					    io___149.ciunit = *nout;
					    s_wsfe(&io___149);
					    do_fio(&c__1, (char *)&i__, (
						    ftnlen)sizeof(integer));
					    e_wsfe();
					}
/* L40: */
				    }
				    if (! same) {
					*fatal = TRUE_;
					goto L130;
				    }

				    if (! null) {

/*                                Check the result. */

					cmvch_(trans, &m, &n, &alpha, &a[
						a_offset], nmax, &x[1], &incx,
						 &beta, &y[1], &incy, &yt[1], 
						&g[1], &yy[1], eps, &err, 
						fatal, nout, &c_true, (ftnlen)
						1);
					errmax = max(errmax,err);
/*                                If got really bad answer, report and */
/*                                return. */
					if (*fatal) {
					    goto L130;
					}
				    } else {
/*                                Avoid repeating tests with M.le.0 or */
/*                                N.le.0. */
					goto L110;
				    }
/*                          END IF */

/* L50: */
				}

/* L60: */
			    }

/* L70: */
			}

/* L80: */
		    }

/* L90: */
		}

L100:
		;
	    }

L110:
	    ;
	}

/* L120: */
    }

/*     Report result. */

    if (errmax < *thresh) {
	io___151.ciunit = *nout;
	s_wsfe(&io___151);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	e_wsfe();
    } else {
	io___152.ciunit = *nout;
	s_wsfe(&io___152);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
	e_wsfe();
    }
    goto L140;

L130:
    io___153.ciunit = *nout;
    s_wsfe(&io___153);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    if (full) {
	io___154.ciunit = *nout;
	s_wsfe(&io___154);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, ctrans, (ftnlen)14);
	do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (banded) {
	io___155.ciunit = *nout;
	s_wsfe(&io___155);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, ctrans, (ftnlen)14);
	do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&kl, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&ku, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    }

L140:
    return 0;


/*     End of CCHK1. */

} /* cchk1_ */

/* Subroutine */ int cchk2_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nkb, integer *kb, integer *
	nalf, complex *alf, integer *nbet, complex *bet, integer *ninc, 
	integer *inc, integer *nmax, integer *incmax, complex *a, complex *aa,
	 complex *as, complex *x, complex *xx, complex *xs, complex *y, 
	complex *yy, complex *ys, complex *yt, real *g, integer *iorder, 
	ftnlen sname_len)
{
    /* Initialized data */

    static char ich[2] = "UL";

    /* Format strings */
    static char fmt_9993[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "i3,\002,(\002,f4.1,\002,\002,f4.1,\002), A,\002,i3,\002, X,\002,"
	    "/10x,i2,\002,(\002,f4.1,\002,\002,f4.1,\002), \002,\002Y,\002,i2,"
	    "\002) .\002)";
    static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "2(i3,\002,\002),\002(\002,f4.1,\002,\002,f4.1,\002), A,\002,i3"
	    ",\002, X,\002,/10x,i2,\002,(\002,f4.1,\002,\002,f4.1,\002), Y"
	    ",\002,i2,\002) .\002)";
    static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "i3,\002,(\002,f4.1,\002,\002,f4.1,\002), AP, X,\002,/10x,i2,\002"
	    ",(\002,f4.1,\002,\002,f4.1,\002), Y,\002,i2,\002) .\002)";
    static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
	    "N VALID CALL *\002,\002******\002)";
    static char fmt_9998[] = "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
	    " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
    static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
	    "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_9997[] = "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
	    "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
	    " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7, i__8, 
	    i__9;
    alist al__1;

    /* Builtin functions */
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);
    integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
	     f_rew(alist *);

    /* Local variables */
    integer i__, k, n, ia, ib, ic, nc, ik, in, nk, ks, ix, iy, ns, lx, ly, 
	    laa, lda;
    extern logical lce_(complex *, complex *, integer *);
    complex als, bls;
    real err;
    complex beta;
    integer ldas;
    logical same;
    integer incx, incy;
    logical full, null;
    char uplo[1];
    extern /* Subroutine */ int cmake_(char *, char *, char *, integer *, 
	    integer *, complex *, integer *, complex *, integer *, integer *, 
	    integer *, logical *, complex *, ftnlen, ftnlen, ftnlen);
    complex alpha;
    logical isame[13];
    extern /* Subroutine */ int cmvch_(char *, integer *, integer *, complex *
	    , complex *, integer *, complex *, integer *, complex *, complex *
	    , integer *, complex *, real *, complex *, real *, real *, 
	    logical *, integer *, logical *, ftnlen);
    integer nargs;
    logical reset;
    char cuplo[14];
    integer incxs, incys;
    char uplos[1];
    logical banded, packed;
    extern /* Subroutine */ int cchbmv_(integer *, char *, integer *, integer 
	    *, complex *, complex *, integer *, complex *, integer *, complex 
	    *, complex *, integer *, ftnlen), cchemv_(integer *, char *, 
	    integer *, complex *, complex *, integer *, complex *, integer *, 
	    complex *, complex *, integer *, ftnlen);
    extern logical lceres_(char *, char *, integer *, integer *, complex *, 
	    complex *, integer *, ftnlen, ftnlen);
    extern /* Subroutine */ int cchpmv_(integer *, char *, integer *, complex 
	    *, complex *, complex *, integer *, complex *, complex *, integer 
	    *, ftnlen);
    real errmax;
    complex transl;

    /* Fortran I/O blocks */
    static cilist io___195 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___196 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___197 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___198 = { 0, 0, 0, fmt_9992, 0 };
    static cilist io___201 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___203 = { 0, 0, 0, fmt_9999, 0 };
    static cilist io___204 = { 0, 0, 0, fmt_9997, 0 };
    static cilist io___205 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___206 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___207 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___208 = { 0, 0, 0, fmt_9995, 0 };



/*  Tests CHEMV, CHBMV and CHPMV. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Parameters .. */
/*     .. Scalar Arguments .. */
/*     .. Array Arguments .. */
/*     .. Local Scalars .. */
/*     .. Local Arrays .. */
/*     .. External Functions .. */
/*     .. External Subroutines .. */
/*     .. Intrinsic Functions .. */
/*     .. Scalars in Common .. */
/*     .. Common blocks .. */
/*     .. Data statements .. */
    /* Parameter adjustments */
    --idim;
    --kb;
    --alf;
    --bet;
    --inc;
    --g;
    --yt;
    --y;
    --x;
    --as;
    --aa;
    a_dim1 = *nmax;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --ys;
    --yy;
    --xs;
    --xx;

    /* Function Body */
/*     .. Executable Statements .. */
    full = *(unsigned char *)&sname[8] == 'e';
    banded = *(unsigned char *)&sname[8] == 'b';
    packed = *(unsigned char *)&sname[8] == 'p';
/*     Define the number of arguments. */
    if (full) {
	nargs = 10;
    } else if (banded) {
	nargs = 11;
    } else if (packed) {
	nargs = 9;
    }

    nc = 0;
    reset = TRUE_;
    errmax = 0.f;

    i__1 = *nidim;
    for (in = 1; in <= i__1; ++in) {
	n = idim[in];

	if (banded) {
	    nk = *nkb;
	} else {
	    nk = 1;
	}
	i__2 = nk;
	for (ik = 1; ik <= i__2; ++ik) {
	    if (banded) {
		k = kb[ik];
	    } else {
		k = n - 1;
	    }
/*           Set LDA to 1 more than minimum value if room. */
	    if (banded) {
		lda = k + 1;
	    } else {
		lda = n;
	    }
	    if (lda < *nmax) {
		++lda;
	    }
/*           Skip tests if not enough room. */
	    if (lda > *nmax) {
		goto L100;
	    }
	    if (packed) {
		laa = n * (n + 1) / 2;
	    } else {
		laa = lda * n;
	    }
	    null = n <= 0;

	    for (ic = 1; ic <= 2; ++ic) {
		*(unsigned char *)uplo = *(unsigned char *)&ich[ic - 1];
		if (*(unsigned char *)uplo == 'U') {
		    s_copy(cuplo, "    CblasUpper", (ftnlen)14, (ftnlen)14);
		} else {
		    s_copy(cuplo, "    CblasLower", (ftnlen)14, (ftnlen)14);
		}

/*              Generate the matrix A. */

		transl.r = 0.f, transl.i = 0.f;
		cmake_(sname + 7, uplo, " ", &n, &n, &a[a_offset], nmax, &aa[
			1], &lda, &k, &k, &reset, &transl, (ftnlen)2, (ftnlen)
			1, (ftnlen)1);

		i__3 = *ninc;
		for (ix = 1; ix <= i__3; ++ix) {
		    incx = inc[ix];
		    lx = abs(incx) * n;

/*                 Generate the vector X. */

		    transl.r = .5f, transl.i = 0.f;
		    i__4 = abs(incx);
		    i__5 = n - 1;
		    cmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &xx[1], &
			    i__4, &c__0, &i__5, &reset, &transl, (ftnlen)2, (
			    ftnlen)1, (ftnlen)1);
		    if (n > 1) {
			i__4 = n / 2;
			x[i__4].r = 0.f, x[i__4].i = 0.f;
			i__4 = abs(incx) * (n / 2 - 1) + 1;
			xx[i__4].r = 0.f, xx[i__4].i = 0.f;
		    }

		    i__4 = *ninc;
		    for (iy = 1; iy <= i__4; ++iy) {
			incy = inc[iy];
			ly = abs(incy) * n;

			i__5 = *nalf;
			for (ia = 1; ia <= i__5; ++ia) {
			    i__6 = ia;
			    alpha.r = alf[i__6].r, alpha.i = alf[i__6].i;

			    i__6 = *nbet;
			    for (ib = 1; ib <= i__6; ++ib) {
				i__7 = ib;
				beta.r = bet[i__7].r, beta.i = bet[i__7].i;

/*                          Generate the vector Y. */

				transl.r = 0.f, transl.i = 0.f;
				i__7 = abs(incy);
				i__8 = n - 1;
				cmake_("ge", " ", " ", &c__1, &n, &y[1], &
					c__1, &yy[1], &i__7, &c__0, &i__8, &
					reset, &transl, (ftnlen)2, (ftnlen)1, 
					(ftnlen)1);

				++nc;

/*                          Save every datum before calling the */
/*                          subroutine. */

				*(unsigned char *)uplos = *(unsigned char *)
					uplo;
				ns = n;
				ks = k;
				als.r = alpha.r, als.i = alpha.i;
				i__7 = laa;
				for (i__ = 1; i__ <= i__7; ++i__) {
				    i__8 = i__;
				    i__9 = i__;
				    as[i__8].r = aa[i__9].r, as[i__8].i = aa[
					    i__9].i;
/* L10: */
				}
				ldas = lda;
				i__7 = lx;
				for (i__ = 1; i__ <= i__7; ++i__) {
				    i__8 = i__;
				    i__9 = i__;
				    xs[i__8].r = xx[i__9].r, xs[i__8].i = xx[
					    i__9].i;
/* L20: */
				}
				incxs = incx;
				bls.r = beta.r, bls.i = beta.i;
				i__7 = ly;
				for (i__ = 1; i__ <= i__7; ++i__) {
				    i__8 = i__;
				    i__9 = i__;
				    ys[i__8].r = yy[i__9].r, ys[i__8].i = yy[
					    i__9].i;
/* L30: */
				}
				incys = incy;

/*                          Call the subroutine. */

				if (full) {
				    if (*trace) {
					io___195.ciunit = *ntra;
					s_wsfe(&io___195);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__2, (char *)&alpha, (ftnlen)
						sizeof(real));
					do_fio(&c__1, (char *)&lda, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					do_fio(&c__2, (char *)&beta, (ftnlen)
						sizeof(real));
					do_fio(&c__1, (char *)&incy, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cchemv_(iorder, uplo, &n, &alpha, &aa[1], 
					    &lda, &xx[1], &incx, &beta, &yy[1]
					    , &incy, (ftnlen)1);
				} else if (banded) {
				    if (*trace) {
					io___196.ciunit = *ntra;
					s_wsfe(&io___196);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&k, (ftnlen)
						sizeof(integer));
					do_fio(&c__2, (char *)&alpha, (ftnlen)
						sizeof(real));
					do_fio(&c__1, (char *)&lda, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					do_fio(&c__2, (char *)&beta, (ftnlen)
						sizeof(real));
					do_fio(&c__1, (char *)&incy, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cchbmv_(iorder, uplo, &n, &k, &alpha, &aa[
					    1], &lda, &xx[1], &incx, &beta, &
					    yy[1], &incy, (ftnlen)1);
				} else if (packed) {
				    if (*trace) {
					io___197.ciunit = *ntra;
					s_wsfe(&io___197);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__2, (char *)&alpha, (ftnlen)
						sizeof(real));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					do_fio(&c__2, (char *)&beta, (ftnlen)
						sizeof(real));
					do_fio(&c__1, (char *)&incy, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cchpmv_(iorder, uplo, &n, &alpha, &aa[1], 
					    &xx[1], &incx, &beta, &yy[1], &
					    incy, (ftnlen)1);
				}

/*                          Check if error-exit was taken incorrectly. */

				if (! infoc_1.ok) {
				    io___198.ciunit = *nout;
				    s_wsfe(&io___198);
				    e_wsfe();
				    *fatal = TRUE_;
				    goto L120;
				}

/*                          See what data changed inside subroutines. */

				isame[0] = *(unsigned char *)uplo == *(
					unsigned char *)uplos;
				isame[1] = ns == n;
				if (full) {
				    isame[2] = als.r == alpha.r && als.i == 
					    alpha.i;
				    isame[3] = lce_(&as[1], &aa[1], &laa);
				    isame[4] = ldas == lda;
				    isame[5] = lce_(&xs[1], &xx[1], &lx);
				    isame[6] = incxs == incx;
				    isame[7] = bls.r == beta.r && bls.i == 
					    beta.i;
				    if (null) {
					isame[8] = lce_(&ys[1], &yy[1], &ly);
				    } else {
					i__7 = abs(incy);
					isame[8] = lceres_("ge", " ", &c__1, &
						n, &ys[1], &yy[1], &i__7, (
						ftnlen)2, (ftnlen)1);
				    }
				    isame[9] = incys == incy;
				} else if (banded) {
				    isame[2] = ks == k;
				    isame[3] = als.r == alpha.r && als.i == 
					    alpha.i;
				    isame[4] = lce_(&as[1], &aa[1], &laa);
				    isame[5] = ldas == lda;
				    isame[6] = lce_(&xs[1], &xx[1], &lx);
				    isame[7] = incxs == incx;
				    isame[8] = bls.r == beta.r && bls.i == 
					    beta.i;
				    if (null) {
					isame[9] = lce_(&ys[1], &yy[1], &ly);
				    } else {
					i__7 = abs(incy);
					isame[9] = lceres_("ge", " ", &c__1, &
						n, &ys[1], &yy[1], &i__7, (
						ftnlen)2, (ftnlen)1);
				    }
				    isame[10] = incys == incy;
				} else if (packed) {
				    isame[2] = als.r == alpha.r && als.i == 
					    alpha.i;
				    isame[3] = lce_(&as[1], &aa[1], &laa);
				    isame[4] = lce_(&xs[1], &xx[1], &lx);
				    isame[5] = incxs == incx;
				    isame[6] = bls.r == beta.r && bls.i == 
					    beta.i;
				    if (null) {
					isame[7] = lce_(&ys[1], &yy[1], &ly);
				    } else {
					i__7 = abs(incy);
					isame[7] = lceres_("ge", " ", &c__1, &
						n, &ys[1], &yy[1], &i__7, (
						ftnlen)2, (ftnlen)1);
				    }
				    isame[8] = incys == incy;
				}

/*                          If data was incorrectly changed, report and */
/*                          return. */

				same = TRUE_;
				i__7 = nargs;
				for (i__ = 1; i__ <= i__7; ++i__) {
				    same = same && isame[i__ - 1];
				    if (! isame[i__ - 1]) {
					io___201.ciunit = *nout;
					s_wsfe(&io___201);
					do_fio(&c__1, (char *)&i__, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
/* L40: */
				}
				if (! same) {
				    *fatal = TRUE_;
				    goto L120;
				}

				if (! null) {

/*                             Check the result. */

				    cmvch_("N", &n, &n, &alpha, &a[a_offset], 
					    nmax, &x[1], &incx, &beta, &y[1], 
					    &incy, &yt[1], &g[1], &yy[1], eps,
					     &err, fatal, nout, &c_true, (
					    ftnlen)1);
				    errmax = max(errmax,err);
/*                             If got really bad answer, report and */
/*                             return. */
				    if (*fatal) {
					goto L120;
				    }
				} else {
/*                             Avoid repeating tests with N.le.0 */
				    goto L110;
				}

/* L50: */
			    }

/* L60: */
			}

/* L70: */
		    }

/* L80: */
		}

/* L90: */
	    }

L100:
	    ;
	}

L110:
	;
    }

/*     Report result. */

    if (errmax < *thresh) {
	io___203.ciunit = *nout;
	s_wsfe(&io___203);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	e_wsfe();
    } else {
	io___204.ciunit = *nout;
	s_wsfe(&io___204);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
	e_wsfe();
    }
    goto L130;

L120:
    io___205.ciunit = *nout;
    s_wsfe(&io___205);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    if (full) {
	io___206.ciunit = *nout;
	s_wsfe(&io___206);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (banded) {
	io___207.ciunit = *nout;
	s_wsfe(&io___207);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (packed) {
	io___208.ciunit = *nout;
	s_wsfe(&io___208);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    }

L130:
    return 0;


/*     End of CCHK2. */

} /* cchk2_ */

/* Subroutine */ int cchk3_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nkb, integer *kb, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, complex *a, 
	complex *aa, complex *as, complex *x, complex *xx, complex *xs, 
	complex *xt, real *g, complex *z__, integer *iorder, ftnlen sname_len)
{
    /* Initialized data */

    static char ichu[2] = "UL";
    static char icht[3] = "NTC";
    static char ichd[2] = "UN";

    /* Format strings */
    static char fmt_9993[] = "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
	    "\002),/10x,i3,\002, A,\002,i3,\002, X,\002,i2,\002) .\002)";
    static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
	    "\002),/10x,2(i3,\002,\002),\002 A,\002,i3,\002, X,\002,i2,\002) ."
	    "\002)";
    static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
	    "\002),/10x,i3,\002, AP, \002,\002X,\002,i2,\002) .\002)";
    static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
	    "N VALID CALL *\002,\002******\002)";
    static char fmt_9998[] = "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
	    " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
    static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
	    "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_9997[] = "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
	    "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
	    " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
    alist al__1;

    /* Builtin functions */
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);
    integer s_cmp(char *, char *, ftnlen, ftnlen), s_wsfe(cilist *), do_fio(
	    integer *, char *, ftnlen), e_wsfe(void), f_rew(alist *);

    /* Local variables */
    integer i__, k, n, nc, ik, in, nk, ks, ix, ns, lx, laa, icd, lda;
    extern logical lce_(complex *, complex *, integer *);
    integer ict, icu;
    real err;
    char diag[1];
    integer ldas;
    logical same;
    integer incx;
    logical full, null;
    char uplo[1], cdiag[14];
    extern /* Subroutine */ int cmake_(char *, char *, char *, integer *, 
	    integer *, complex *, integer *, complex *, integer *, integer *, 
	    integer *, logical *, complex *, ftnlen, ftnlen, ftnlen);
    char diags[1];
    logical isame[13];
    extern /* Subroutine */ int cmvch_(char *, integer *, integer *, complex *
	    , complex *, integer *, complex *, integer *, complex *, complex *
	    , integer *, complex *, real *, complex *, real *, real *, 
	    logical *, integer *, logical *, ftnlen);
    integer nargs;
    logical reset;
    char cuplo[14];
    integer incxs;
    char trans[1], uplos[1];
    logical banded, packed;
    extern logical lceres_(char *, char *, integer *, integer *, complex *, 
	    complex *, integer *, ftnlen, ftnlen);
    extern /* Subroutine */ int cctbmv_(integer *, char *, char *, char *, 
	    integer *, integer *, complex *, integer *, complex *, integer *, 
	    ftnlen, ftnlen, ftnlen), cctbsv_(integer *, char *, char *, char *
	    , integer *, integer *, complex *, integer *, complex *, integer *
	    , ftnlen, ftnlen, ftnlen);
    char ctrans[14];
    extern /* Subroutine */ int cctpmv_(integer *, char *, char *, char *, 
	    integer *, complex *, complex *, integer *, ftnlen, ftnlen, 
	    ftnlen);
    real errmax;
    extern /* Subroutine */ int cctrmv_(integer *, char *, char *, char *, 
	    integer *, complex *, integer *, complex *, integer *, ftnlen, 
	    ftnlen, ftnlen), cctpsv_(integer *, char *, char *, char *, 
	    integer *, complex *, complex *, integer *, ftnlen, ftnlen, 
	    ftnlen);
    complex transl;
    extern /* Subroutine */ int cctrsv_(integer *, char *, char *, char *, 
	    integer *, complex *, integer *, complex *, integer *, ftnlen, 
	    ftnlen, ftnlen);
    char transs[1];

    /* Fortran I/O blocks */
    static cilist io___248 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___249 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___250 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___251 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___252 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___253 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___254 = { 0, 0, 0, fmt_9992, 0 };
    static cilist io___257 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___259 = { 0, 0, 0, fmt_9999, 0 };
    static cilist io___260 = { 0, 0, 0, fmt_9997, 0 };
    static cilist io___261 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___262 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___263 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___264 = { 0, 0, 0, fmt_9995, 0 };



/*  Tests CTRMV, CTBMV, CTPMV, CTRSV, CTBSV and CTPSV. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Parameters .. */
/*     .. Scalar Arguments .. */
/*     .. Array Arguments .. */
/*     .. Local Scalars .. */
/*     .. Local Arrays .. */
/*     .. External Functions .. */
/*     .. External Subroutines .. */
/*     .. Intrinsic Functions .. */
/*     .. Scalars in Common .. */
/*     .. Common blocks .. */
/*     .. Data statements .. */
    /* Parameter adjustments */
    --idim;
    --kb;
    --inc;
    --z__;
    --g;
    --xt;
    --x;
    --as;
    --aa;
    a_dim1 = *nmax;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --xs;
    --xx;

    /* Function Body */
/*     .. Executable Statements .. */
    full = *(unsigned char *)&sname[8] == 'r';
    banded = *(unsigned char *)&sname[8] == 'b';
    packed = *(unsigned char *)&sname[8] == 'p';
/*     Define the number of arguments. */
    if (full) {
	nargs = 8;
    } else if (banded) {
	nargs = 9;
    } else if (packed) {
	nargs = 7;
    }

    nc = 0;
    reset = TRUE_;
    errmax = 0.f;
/*     Set up zero vector for CMVCH. */
    i__1 = *nmax;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = i__;
	z__[i__2].r = 0.f, z__[i__2].i = 0.f;
/* L10: */
    }

    i__1 = *nidim;
    for (in = 1; in <= i__1; ++in) {
	n = idim[in];

	if (banded) {
	    nk = *nkb;
	} else {
	    nk = 1;
	}
	i__2 = nk;
	for (ik = 1; ik <= i__2; ++ik) {
	    if (banded) {
		k = kb[ik];
	    } else {
		k = n - 1;
	    }
/*           Set LDA to 1 more than minimum value if room. */
	    if (banded) {
		lda = k + 1;
	    } else {
		lda = n;
	    }
	    if (lda < *nmax) {
		++lda;
	    }
/*           Skip tests if not enough room. */
	    if (lda > *nmax) {
		goto L100;
	    }
	    if (packed) {
		laa = n * (n + 1) / 2;
	    } else {
		laa = lda * n;
	    }
	    null = n <= 0;

	    for (icu = 1; icu <= 2; ++icu) {
		*(unsigned char *)uplo = *(unsigned char *)&ichu[icu - 1];
		if (*(unsigned char *)uplo == 'U') {
		    s_copy(cuplo, "    CblasUpper", (ftnlen)14, (ftnlen)14);
		} else {
		    s_copy(cuplo, "    CblasLower", (ftnlen)14, (ftnlen)14);
		}

		for (ict = 1; ict <= 3; ++ict) {
		    *(unsigned char *)trans = *(unsigned char *)&icht[ict - 1]
			    ;
		    if (*(unsigned char *)trans == 'N') {
			s_copy(ctrans, "  CblasNoTrans", (ftnlen)14, (ftnlen)
				14);
		    } else if (*(unsigned char *)trans == 'T') {
			s_copy(ctrans, "    CblasTrans", (ftnlen)14, (ftnlen)
				14);
		    } else {
			s_copy(ctrans, "CblasConjTrans", (ftnlen)14, (ftnlen)
				14);
		    }

		    for (icd = 1; icd <= 2; ++icd) {
			*(unsigned char *)diag = *(unsigned char *)&ichd[icd 
				- 1];
			if (*(unsigned char *)diag == 'N') {
			    s_copy(cdiag, "  CblasNonUnit", (ftnlen)14, (
				    ftnlen)14);
			} else {
			    s_copy(cdiag, "     CblasUnit", (ftnlen)14, (
				    ftnlen)14);
			}

/*                    Generate the matrix A. */

			transl.r = 0.f, transl.i = 0.f;
			cmake_(sname + 7, uplo, diag, &n, &n, &a[a_offset], 
				nmax, &aa[1], &lda, &k, &k, &reset, &transl, (
				ftnlen)2, (ftnlen)1, (ftnlen)1);

			i__3 = *ninc;
			for (ix = 1; ix <= i__3; ++ix) {
			    incx = inc[ix];
			    lx = abs(incx) * n;

/*                       Generate the vector X. */

			    transl.r = .5f, transl.i = 0.f;
			    i__4 = abs(incx);
			    i__5 = n - 1;
			    cmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &
				    xx[1], &i__4, &c__0, &i__5, &reset, &
				    transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);
			    if (n > 1) {
				i__4 = n / 2;
				x[i__4].r = 0.f, x[i__4].i = 0.f;
				i__4 = abs(incx) * (n / 2 - 1) + 1;
				xx[i__4].r = 0.f, xx[i__4].i = 0.f;
			    }

			    ++nc;

/*                       Save every datum before calling the subroutine. */

			    *(unsigned char *)uplos = *(unsigned char *)uplo;
			    *(unsigned char *)transs = *(unsigned char *)
				    trans;
			    *(unsigned char *)diags = *(unsigned char *)diag;
			    ns = n;
			    ks = k;
			    i__4 = laa;
			    for (i__ = 1; i__ <= i__4; ++i__) {
				i__5 = i__;
				i__6 = i__;
				as[i__5].r = aa[i__6].r, as[i__5].i = aa[i__6]
					.i;
/* L20: */
			    }
			    ldas = lda;
			    i__4 = lx;
			    for (i__ = 1; i__ <= i__4; ++i__) {
				i__5 = i__;
				i__6 = i__;
				xs[i__5].r = xx[i__6].r, xs[i__5].i = xx[i__6]
					.i;
/* L30: */
			    }
			    incxs = incx;

/*                       Call the subroutine. */

			    if (s_cmp(sname + 9, "mv", (ftnlen)2, (ftnlen)2) 
				    == 0) {
				if (full) {
				    if (*trace) {
					io___248.ciunit = *ntra;
					s_wsfe(&io___248);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, ctrans, (ftnlen)14);
					do_fio(&c__1, cdiag, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&lda, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cctrmv_(iorder, uplo, trans, diag, &n, &
					    aa[1], &lda, &xx[1], &incx, (
					    ftnlen)1, (ftnlen)1, (ftnlen)1);
				} else if (banded) {
				    if (*trace) {
					io___249.ciunit = *ntra;
					s_wsfe(&io___249);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, ctrans, (ftnlen)14);
					do_fio(&c__1, cdiag, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&k, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&lda, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cctbmv_(iorder, uplo, trans, diag, &n, &k,
					     &aa[1], &lda, &xx[1], &incx, (
					    ftnlen)1, (ftnlen)1, (ftnlen)1);
				} else if (packed) {
				    if (*trace) {
					io___250.ciunit = *ntra;
					s_wsfe(&io___250);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, ctrans, (ftnlen)14);
					do_fio(&c__1, cdiag, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cctpmv_(iorder, uplo, trans, diag, &n, &
					    aa[1], &xx[1], &incx, (ftnlen)1, (
					    ftnlen)1, (ftnlen)1);
				}
			    } else if (s_cmp(sname + 9, "sv", (ftnlen)2, (
				    ftnlen)2) == 0) {
				if (full) {
				    if (*trace) {
					io___251.ciunit = *ntra;
					s_wsfe(&io___251);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, ctrans, (ftnlen)14);
					do_fio(&c__1, cdiag, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&lda, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cctrsv_(iorder, uplo, trans, diag, &n, &
					    aa[1], &lda, &xx[1], &incx, (
					    ftnlen)1, (ftnlen)1, (ftnlen)1);
				} else if (banded) {
				    if (*trace) {
					io___252.ciunit = *ntra;
					s_wsfe(&io___252);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, ctrans, (ftnlen)14);
					do_fio(&c__1, cdiag, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&k, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&lda, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cctbsv_(iorder, uplo, trans, diag, &n, &k,
					     &aa[1], &lda, &xx[1], &incx, (
					    ftnlen)1, (ftnlen)1, (ftnlen)1);
				} else if (packed) {
				    if (*trace) {
					io___253.ciunit = *ntra;
					s_wsfe(&io___253);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, ctrans, (ftnlen)14);
					do_fio(&c__1, cdiag, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cctpsv_(iorder, uplo, trans, diag, &n, &
					    aa[1], &xx[1], &incx, (ftnlen)1, (
					    ftnlen)1, (ftnlen)1);
				}
			    }

/*                       Check if error-exit was taken incorrectly. */

			    if (! infoc_1.ok) {
				io___254.ciunit = *nout;
				s_wsfe(&io___254);
				e_wsfe();
				*fatal = TRUE_;
				goto L120;
			    }

/*                       See what data changed inside subroutines. */

			    isame[0] = *(unsigned char *)uplo == *(unsigned 
				    char *)uplos;
			    isame[1] = *(unsigned char *)trans == *(unsigned 
				    char *)transs;
			    isame[2] = *(unsigned char *)diag == *(unsigned 
				    char *)diags;
			    isame[3] = ns == n;
			    if (full) {
				isame[4] = lce_(&as[1], &aa[1], &laa);
				isame[5] = ldas == lda;
				if (null) {
				    isame[6] = lce_(&xs[1], &xx[1], &lx);
				} else {
				    i__4 = abs(incx);
				    isame[6] = lceres_("ge", " ", &c__1, &n, &
					    xs[1], &xx[1], &i__4, (ftnlen)2, (
					    ftnlen)1);
				}
				isame[7] = incxs == incx;
			    } else if (banded) {
				isame[4] = ks == k;
				isame[5] = lce_(&as[1], &aa[1], &laa);
				isame[6] = ldas == lda;
				if (null) {
				    isame[7] = lce_(&xs[1], &xx[1], &lx);
				} else {
				    i__4 = abs(incx);
				    isame[7] = lceres_("ge", " ", &c__1, &n, &
					    xs[1], &xx[1], &i__4, (ftnlen)2, (
					    ftnlen)1);
				}
				isame[8] = incxs == incx;
			    } else if (packed) {
				isame[4] = lce_(&as[1], &aa[1], &laa);
				if (null) {
				    isame[5] = lce_(&xs[1], &xx[1], &lx);
				} else {
				    i__4 = abs(incx);
				    isame[5] = lceres_("ge", " ", &c__1, &n, &
					    xs[1], &xx[1], &i__4, (ftnlen)2, (
					    ftnlen)1);
				}
				isame[6] = incxs == incx;
			    }

/*                       If data was incorrectly changed, report and */
/*                       return. */

			    same = TRUE_;
			    i__4 = nargs;
			    for (i__ = 1; i__ <= i__4; ++i__) {
				same = same && isame[i__ - 1];
				if (! isame[i__ - 1]) {
				    io___257.ciunit = *nout;
				    s_wsfe(&io___257);
				    do_fio(&c__1, (char *)&i__, (ftnlen)
					    sizeof(integer));
				    e_wsfe();
				}
/* L40: */
			    }
			    if (! same) {
				*fatal = TRUE_;
				goto L120;
			    }

			    if (! null) {
				if (s_cmp(sname + 9, "mv", (ftnlen)2, (ftnlen)
					2) == 0) {

/*                             Check the result. */

				    cmvch_(trans, &n, &n, &c_b2, &a[a_offset],
					     nmax, &x[1], &incx, &c_b1, &z__[
					    1], &incx, &xt[1], &g[1], &xx[1], 
					    eps, &err, fatal, nout, &c_true, (
					    ftnlen)1);
				} else if (s_cmp(sname + 9, "sv", (ftnlen)2, (
					ftnlen)2) == 0) {

/*                             Compute approximation to original vector. */

				    i__4 = n;
				    for (i__ = 1; i__ <= i__4; ++i__) {
					i__5 = i__;
					i__6 = (i__ - 1) * abs(incx) + 1;
					z__[i__5].r = xx[i__6].r, z__[i__5].i 
						= xx[i__6].i;
					i__5 = (i__ - 1) * abs(incx) + 1;
					i__6 = i__;
					xx[i__5].r = x[i__6].r, xx[i__5].i = 
						x[i__6].i;
/* L50: */
				    }
				    cmvch_(trans, &n, &n, &c_b2, &a[a_offset],
					     nmax, &z__[1], &incx, &c_b1, &x[
					    1], &incx, &xt[1], &g[1], &xx[1], 
					    eps, &err, fatal, nout, &c_false, 
					    (ftnlen)1);
				}
				errmax = max(errmax,err);
/*                          If got really bad answer, report and return. */
				if (*fatal) {
				    goto L120;
				}
			    } else {
/*                          Avoid repeating tests with N.le.0. */
				goto L110;
			    }

/* L60: */
			}

/* L70: */
		    }

/* L80: */
		}

/* L90: */
	    }

L100:
	    ;
	}

L110:
	;
    }

/*     Report result. */

    if (errmax < *thresh) {
	io___259.ciunit = *nout;
	s_wsfe(&io___259);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	e_wsfe();
    } else {
	io___260.ciunit = *nout;
	s_wsfe(&io___260);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
	e_wsfe();
    }
    goto L130;

L120:
    io___261.ciunit = *nout;
    s_wsfe(&io___261);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    if (full) {
	io___262.ciunit = *nout;
	s_wsfe(&io___262);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, ctrans, (ftnlen)14);
	do_fio(&c__1, cdiag, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (banded) {
	io___263.ciunit = *nout;
	s_wsfe(&io___263);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, ctrans, (ftnlen)14);
	do_fio(&c__1, cdiag, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (packed) {
	io___264.ciunit = *nout;
	s_wsfe(&io___264);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, ctrans, (ftnlen)14);
	do_fio(&c__1, cdiag, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	e_wsfe();
    }

L130:
    return 0;


/*     End of CCHK3. */

} /* cchk3_ */

/* Subroutine */ int cchk4_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, complex *a, 
	complex *aa, complex *as, complex *x, complex *xx, complex *xs, 
	complex *y, complex *yy, complex *ys, complex *yt, real *g, complex *
	z__, integer *iorder, ftnlen sname_len)
{
    /* Format strings */
    static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,2(i3,\002,\002"
	    "),\002(\002,f4.1,\002,\002,f4.1,\002), X,\002,i2,\002, Y,\002,i2,"
	    "\002, A,\002,i3,\002) .\002)";
    static char fmt_9993[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
	    "N VALID CALL *\002,\002******\002)";
    static char fmt_9998[] = "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
	    " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
    static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
	    "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_9997[] = "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
	    "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
	    " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
    static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
	    " \002,i3)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7;
    complex q__1;
    alist al__1;

    /* Builtin functions */
    integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
	     f_rew(alist *);
    void r_cnjg(complex *, complex *);

    /* Local variables */
    integer i__, j, m, n;
    complex w[1];
    integer ia, nc, nd, im, in, ms, ix, iy, ns, lx, ly, laa, lda;
    extern logical lce_(complex *, complex *, integer *);
    complex als;
    real err;
    integer ldas;
    logical same, conj;
    integer incx, incy;
    logical null;
    extern /* Subroutine */ int cmake_(char *, char *, char *, integer *, 
	    integer *, complex *, integer *, complex *, integer *, integer *, 
	    integer *, logical *, complex *, ftnlen, ftnlen, ftnlen);
    complex alpha;
    logical isame[13];
    extern /* Subroutine */ int cmvch_(char *, integer *, integer *, complex *
	    , complex *, integer *, complex *, integer *, complex *, complex *
	    , integer *, complex *, real *, complex *, real *, real *, 
	    logical *, integer *, logical *, ftnlen);
    integer nargs;
    logical reset;
    integer incxs, incys;
    extern /* Subroutine */ int ccgerc_(integer *, integer *, integer *, 
	    complex *, complex *, integer *, complex *, integer *, complex *, 
	    integer *), ccgeru_(integer *, integer *, integer *, complex *, 
	    complex *, integer *, complex *, integer *, complex *, integer *);
    extern logical lceres_(char *, char *, integer *, integer *, complex *, 
	    complex *, integer *, ftnlen, ftnlen);
    real errmax;
    complex transl;

    /* Fortran I/O blocks */
    static cilist io___294 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___295 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___298 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___302 = { 0, 0, 0, fmt_9999, 0 };
    static cilist io___303 = { 0, 0, 0, fmt_9997, 0 };
    static cilist io___304 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___305 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___306 = { 0, 0, 0, fmt_9994, 0 };



/*  Tests CGERC and CGERU. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Parameters .. */
/*     .. Scalar Arguments .. */
/*     .. Array Arguments .. */
/*     .. Local Scalars .. */
/*     .. Local Arrays .. */
/*     .. External Functions .. */
/*     .. External Subroutines .. */
/*     .. Intrinsic Functions .. */
/*     .. Scalars in Common .. */
/*     .. Common blocks .. */
/*     .. Executable Statements .. */
    /* Parameter adjustments */
    --idim;
    --alf;
    --inc;
    --z__;
    --g;
    --yt;
    --y;
    --x;
    --as;
    --aa;
    a_dim1 = *nmax;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --ys;
    --yy;
    --xs;
    --xx;

    /* Function Body */
    conj = *(unsigned char *)&sname[10] == 'c';
/*     Define the number of arguments. */
    nargs = 9;

    nc = 0;
    reset = TRUE_;
    errmax = 0.f;

    i__1 = *nidim;
    for (in = 1; in <= i__1; ++in) {
	n = idim[in];
	nd = n / 2 + 1;

	for (im = 1; im <= 2; ++im) {
	    if (im == 1) {
/* Computing MAX */
		i__2 = n - nd;
		m = max(i__2,0);
	    }
	    if (im == 2) {
/* Computing MIN */
		i__2 = n + nd;
		m = min(i__2,*nmax);
	    }

/*           Set LDA to 1 more than minimum value if room. */
	    lda = m;
	    if (lda < *nmax) {
		++lda;
	    }
/*           Skip tests if not enough room. */
	    if (lda > *nmax) {
		goto L110;
	    }
	    laa = lda * n;
	    null = n <= 0 || m <= 0;

	    i__2 = *ninc;
	    for (ix = 1; ix <= i__2; ++ix) {
		incx = inc[ix];
		lx = abs(incx) * m;

/*              Generate the vector X. */

		transl.r = .5f, transl.i = 0.f;
		i__3 = abs(incx);
		i__4 = m - 1;
		cmake_("ge", " ", " ", &c__1, &m, &x[1], &c__1, &xx[1], &i__3,
			 &c__0, &i__4, &reset, &transl, (ftnlen)2, (ftnlen)1, 
			(ftnlen)1);
		if (m > 1) {
		    i__3 = m / 2;
		    x[i__3].r = 0.f, x[i__3].i = 0.f;
		    i__3 = abs(incx) * (m / 2 - 1) + 1;
		    xx[i__3].r = 0.f, xx[i__3].i = 0.f;
		}

		i__3 = *ninc;
		for (iy = 1; iy <= i__3; ++iy) {
		    incy = inc[iy];
		    ly = abs(incy) * n;

/*                 Generate the vector Y. */

		    transl.r = 0.f, transl.i = 0.f;
		    i__4 = abs(incy);
		    i__5 = n - 1;
		    cmake_("ge", " ", " ", &c__1, &n, &y[1], &c__1, &yy[1], &
			    i__4, &c__0, &i__5, &reset, &transl, (ftnlen)2, (
			    ftnlen)1, (ftnlen)1);
		    if (n > 1) {
			i__4 = n / 2;
			y[i__4].r = 0.f, y[i__4].i = 0.f;
			i__4 = abs(incy) * (n / 2 - 1) + 1;
			yy[i__4].r = 0.f, yy[i__4].i = 0.f;
		    }

		    i__4 = *nalf;
		    for (ia = 1; ia <= i__4; ++ia) {
			i__5 = ia;
			alpha.r = alf[i__5].r, alpha.i = alf[i__5].i;

/*                    Generate the matrix A. */

			transl.r = 0.f, transl.i = 0.f;
			i__5 = m - 1;
			i__6 = n - 1;
			cmake_(sname + 7, " ", " ", &m, &n, &a[a_offset], 
				nmax, &aa[1], &lda, &i__5, &i__6, &reset, &
				transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);

			++nc;

/*                    Save every datum before calling the subroutine. */

			ms = m;
			ns = n;
			als.r = alpha.r, als.i = alpha.i;
			i__5 = laa;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    i__6 = i__;
			    i__7 = i__;
			    as[i__6].r = aa[i__7].r, as[i__6].i = aa[i__7].i;
/* L10: */
			}
			ldas = lda;
			i__5 = lx;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    i__6 = i__;
			    i__7 = i__;
			    xs[i__6].r = xx[i__7].r, xs[i__6].i = xx[i__7].i;
/* L20: */
			}
			incxs = incx;
			i__5 = ly;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    i__6 = i__;
			    i__7 = i__;
			    ys[i__6].r = yy[i__7].r, ys[i__6].i = yy[i__7].i;
/* L30: */
			}
			incys = incy;

/*                    Call the subroutine. */

			if (*trace) {
			    io___294.ciunit = *ntra;
			    s_wsfe(&io___294);
			    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer)
				    );
			    do_fio(&c__1, sname, (ftnlen)12);
			    do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer))
				    ;
			    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer))
				    ;
			    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(real)
				    );
			    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(
				    integer));
			    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(
				    integer));
			    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(
				    integer));
			    e_wsfe();
			}
			if (conj) {
			    if (*rewi) {
				al__1.aerr = 0;
				al__1.aunit = *ntra;
				f_rew(&al__1);
			    }
			    ccgerc_(iorder, &m, &n, &alpha, &xx[1], &incx, &
				    yy[1], &incy, &aa[1], &lda);
			} else {
			    if (*rewi) {
				al__1.aerr = 0;
				al__1.aunit = *ntra;
				f_rew(&al__1);
			    }
			    ccgeru_(iorder, &m, &n, &alpha, &xx[1], &incx, &
				    yy[1], &incy, &aa[1], &lda);
			}

/*                    Check if error-exit was taken incorrectly. */

			if (! infoc_1.ok) {
			    io___295.ciunit = *nout;
			    s_wsfe(&io___295);
			    e_wsfe();
			    *fatal = TRUE_;
			    goto L140;
			}

/*                    See what data changed inside subroutine. */

			isame[0] = ms == m;
			isame[1] = ns == n;
			isame[2] = als.r == alpha.r && als.i == alpha.i;
			isame[3] = lce_(&xs[1], &xx[1], &lx);
			isame[4] = incxs == incx;
			isame[5] = lce_(&ys[1], &yy[1], &ly);
			isame[6] = incys == incy;
			if (null) {
			    isame[7] = lce_(&as[1], &aa[1], &laa);
			} else {
			    isame[7] = lceres_("ge", " ", &m, &n, &as[1], &aa[
				    1], &lda, (ftnlen)2, (ftnlen)1);
			}
			isame[8] = ldas == lda;

/*                   If data was incorrectly changed, report and return. */

			same = TRUE_;
			i__5 = nargs;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    same = same && isame[i__ - 1];
			    if (! isame[i__ - 1]) {
				io___298.ciunit = *nout;
				s_wsfe(&io___298);
				do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(
					integer));
				e_wsfe();
			    }
/* L40: */
			}
			if (! same) {
			    *fatal = TRUE_;
			    goto L140;
			}

			if (! null) {

/*                       Check the result column by column. */

			    if (incx > 0) {
				i__5 = m;
				for (i__ = 1; i__ <= i__5; ++i__) {
				    i__6 = i__;
				    i__7 = i__;
				    z__[i__6].r = x[i__7].r, z__[i__6].i = x[
					    i__7].i;
/* L50: */
				}
			    } else {
				i__5 = m;
				for (i__ = 1; i__ <= i__5; ++i__) {
				    i__6 = i__;
				    i__7 = m - i__ + 1;
				    z__[i__6].r = x[i__7].r, z__[i__6].i = x[
					    i__7].i;
/* L60: */
				}
			    }
			    i__5 = n;
			    for (j = 1; j <= i__5; ++j) {
				if (incy > 0) {
				    i__6 = j;
				    w[0].r = y[i__6].r, w[0].i = y[i__6].i;
				} else {
				    i__6 = n - j + 1;
				    w[0].r = y[i__6].r, w[0].i = y[i__6].i;
				}
				if (conj) {
				    r_cnjg(&q__1, w);
				    w[0].r = q__1.r, w[0].i = q__1.i;
				}
				cmvch_("N", &m, &c__1, &alpha, &z__[1], nmax, 
					w, &c__1, &c_b2, &a[j * a_dim1 + 1], &
					c__1, &yt[1], &g[1], &aa[(j - 1) * 
					lda + 1], eps, &err, fatal, nout, &
					c_true, (ftnlen)1);
				errmax = max(errmax,err);
/*                          If got really bad answer, report and return. */
				if (*fatal) {
				    goto L130;
				}
/* L70: */
			    }
			} else {
/*                       Avoid repeating tests with M.le.0 or N.le.0. */
			    goto L110;
			}

/* L80: */
		    }

/* L90: */
		}

/* L100: */
	    }

L110:
	    ;
	}

/* L120: */
    }

/*     Report result. */

    if (errmax < *thresh) {
	io___302.ciunit = *nout;
	s_wsfe(&io___302);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	e_wsfe();
    } else {
	io___303.ciunit = *nout;
	s_wsfe(&io___303);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
	e_wsfe();
    }
    goto L150;

L130:
    io___304.ciunit = *nout;
    s_wsfe(&io___304);
    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
    e_wsfe();

L140:
    io___305.ciunit = *nout;
    s_wsfe(&io___305);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    io___306.ciunit = *nout;
    s_wsfe(&io___306);
    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
    do_fio(&c__1, sname, (ftnlen)12);
    do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(real));
    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
    e_wsfe();

L150:
    return 0;


/*     End of CCHK4. */

} /* cchk4_ */

/* Subroutine */ int cchk5_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, complex *a, 
	complex *aa, complex *as, complex *x, complex *xx, complex *xs, 
	complex *y, complex *yy, complex *ys, complex *yt, real *g, complex *
	z__, integer *iorder, ftnlen sname_len)
{
    /* Initialized data */

    static char ich[2] = "UL";

    /* Format strings */
    static char fmt_9993[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "i3,\002,\002,f4.1,\002, X,\002,i2,\002, A,\002,i3,\002) .\002)";
    static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "i3,\002,\002,f4.1,\002, X,\002,i2,\002, AP) .\002)";
    static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
	    "N VALID CALL *\002,\002******\002)";
    static char fmt_9998[] = "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
	    " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
    static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
	    "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_9997[] = "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
	    "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
	    " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
    static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
	    " \002,i3)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
    complex q__1;
    alist al__1;

    /* Builtin functions */
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);
    integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
	     f_rew(alist *);
    void r_cnjg(complex *, complex *);

    /* Local variables */
    integer i__, j, n;
    complex w[1];
    integer ia, ja, ic, nc, jj, lj, in, ix, ns, lx, laa, lda;
    extern logical lce_(complex *, complex *, integer *);
    real err;
    integer ldas;
    logical same;
    real rals;
    integer incx;
    logical full, null;
    char uplo[1];
    extern /* Subroutine */ int cmake_(char *, char *, char *, integer *, 
	    integer *, complex *, integer *, complex *, integer *, integer *, 
	    integer *, logical *, complex *, ftnlen, ftnlen, ftnlen), ccher_(
	    integer *, char *, integer *, real *, complex *, integer *, 
	    complex *, integer *, ftnlen);
    complex alpha;
    logical isame[13];
    extern /* Subroutine */ int cchpr_(integer *, char *, integer *, real *, 
	    complex *, integer *, complex *, ftnlen), cmvch_(char *, integer *
	    , integer *, complex *, complex *, integer *, complex *, integer *
	    , complex *, complex *, integer *, complex *, real *, complex *, 
	    real *, real *, logical *, integer *, logical *, ftnlen);
    integer nargs;
    logical reset;
    char cuplo[14];
    integer incxs;
    logical upper;
    char uplos[1];
    logical packed;
    real ralpha;
    extern logical lceres_(char *, char *, integer *, integer *, complex *, 
	    complex *, integer *, ftnlen, ftnlen);
    real errmax;
    complex transl;

    /* Fortran I/O blocks */
    static cilist io___336 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___337 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___338 = { 0, 0, 0, fmt_9992, 0 };
    static cilist io___341 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___348 = { 0, 0, 0, fmt_9999, 0 };
    static cilist io___349 = { 0, 0, 0, fmt_9997, 0 };
    static cilist io___350 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___351 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___352 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___353 = { 0, 0, 0, fmt_9994, 0 };



/*  Tests CHER and CHPR. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Parameters .. */
/*     .. Scalar Arguments .. */
/*     .. Array Arguments .. */
/*     .. Local Scalars .. */
/*     .. Local Arrays .. */
/*     .. External Functions .. */
/*     .. External Subroutines .. */
/*     .. Intrinsic Functions .. */
/*     .. Scalars in Common .. */
/*     .. Common blocks .. */
/*     .. Data statements .. */
    /* Parameter adjustments */
    --idim;
    --alf;
    --inc;
    --z__;
    --g;
    --yt;
    --y;
    --x;
    --as;
    --aa;
    a_dim1 = *nmax;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --ys;
    --yy;
    --xs;
    --xx;

    /* Function Body */
/*     .. Executable Statements .. */
    full = *(unsigned char *)&sname[8] == 'e';
    packed = *(unsigned char *)&sname[8] == 'p';
/*     Define the number of arguments. */
    if (full) {
	nargs = 7;
    } else if (packed) {
	nargs = 6;
    }

    nc = 0;
    reset = TRUE_;
    errmax = 0.f;

    i__1 = *nidim;
    for (in = 1; in <= i__1; ++in) {
	n = idim[in];
/*        Set LDA to 1 more than minimum value if room. */
	lda = n;
	if (lda < *nmax) {
	    ++lda;
	}
/*        Skip tests if not enough room. */
	if (lda > *nmax) {
	    goto L100;
	}
	if (packed) {
	    laa = n * (n + 1) / 2;
	} else {
	    laa = lda * n;
	}

	for (ic = 1; ic <= 2; ++ic) {
	    *(unsigned char *)uplo = *(unsigned char *)&ich[ic - 1];
	    if (*(unsigned char *)uplo == 'U') {
		s_copy(cuplo, "    CblasUpper", (ftnlen)14, (ftnlen)14);
	    } else {
		s_copy(cuplo, "    CblasLower", (ftnlen)14, (ftnlen)14);
	    }
	    upper = *(unsigned char *)uplo == 'U';

	    i__2 = *ninc;
	    for (ix = 1; ix <= i__2; ++ix) {
		incx = inc[ix];
		lx = abs(incx) * n;

/*              Generate the vector X. */

		transl.r = .5f, transl.i = 0.f;
		i__3 = abs(incx);
		i__4 = n - 1;
		cmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &xx[1], &i__3,
			 &c__0, &i__4, &reset, &transl, (ftnlen)2, (ftnlen)1, 
			(ftnlen)1);
		if (n > 1) {
		    i__3 = n / 2;
		    x[i__3].r = 0.f, x[i__3].i = 0.f;
		    i__3 = abs(incx) * (n / 2 - 1) + 1;
		    xx[i__3].r = 0.f, xx[i__3].i = 0.f;
		}

		i__3 = *nalf;
		for (ia = 1; ia <= i__3; ++ia) {
		    i__4 = ia;
		    ralpha = alf[i__4].r;
		    q__1.r = ralpha, q__1.i = 0.f;
		    alpha.r = q__1.r, alpha.i = q__1.i;
		    null = n <= 0 || ralpha == 0.f;

/*                 Generate the matrix A. */

		    transl.r = 0.f, transl.i = 0.f;
		    i__4 = n - 1;
		    i__5 = n - 1;
		    cmake_(sname + 7, uplo, " ", &n, &n, &a[a_offset], nmax, &
			    aa[1], &lda, &i__4, &i__5, &reset, &transl, (
			    ftnlen)2, (ftnlen)1, (ftnlen)1);

		    ++nc;

/*                 Save every datum before calling the subroutine. */

		    *(unsigned char *)uplos = *(unsigned char *)uplo;
		    ns = n;
		    rals = ralpha;
		    i__4 = laa;
		    for (i__ = 1; i__ <= i__4; ++i__) {
			i__5 = i__;
			i__6 = i__;
			as[i__5].r = aa[i__6].r, as[i__5].i = aa[i__6].i;
/* L10: */
		    }
		    ldas = lda;
		    i__4 = lx;
		    for (i__ = 1; i__ <= i__4; ++i__) {
			i__5 = i__;
			i__6 = i__;
			xs[i__5].r = xx[i__6].r, xs[i__5].i = xx[i__6].i;
/* L20: */
		    }
		    incxs = incx;

/*                 Call the subroutine. */

		    if (full) {
			if (*trace) {
			    io___336.ciunit = *ntra;
			    s_wsfe(&io___336);
			    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer)
				    );
			    do_fio(&c__1, sname, (ftnlen)12);
			    do_fio(&c__1, cuplo, (ftnlen)14);
			    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer))
				    ;
			    do_fio(&c__1, (char *)&ralpha, (ftnlen)sizeof(
				    real));
			    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(
				    integer));
			    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(
				    integer));
			    e_wsfe();
			}
			if (*rewi) {
			    al__1.aerr = 0;
			    al__1.aunit = *ntra;
			    f_rew(&al__1);
			}
			ccher_(iorder, uplo, &n, &ralpha, &xx[1], &incx, &aa[
				1], &lda, (ftnlen)1);
		    } else if (packed) {
			if (*trace) {
			    io___337.ciunit = *ntra;
			    s_wsfe(&io___337);
			    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer)
				    );
			    do_fio(&c__1, sname, (ftnlen)12);
			    do_fio(&c__1, cuplo, (ftnlen)14);
			    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer))
				    ;
			    do_fio(&c__1, (char *)&ralpha, (ftnlen)sizeof(
				    real));
			    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(
				    integer));
			    e_wsfe();
			}
			if (*rewi) {
			    al__1.aerr = 0;
			    al__1.aunit = *ntra;
			    f_rew(&al__1);
			}
			cchpr_(iorder, uplo, &n, &ralpha, &xx[1], &incx, &aa[
				1], (ftnlen)1);
		    }

/*                 Check if error-exit was taken incorrectly. */

		    if (! infoc_1.ok) {
			io___338.ciunit = *nout;
			s_wsfe(&io___338);
			e_wsfe();
			*fatal = TRUE_;
			goto L120;
		    }

/*                 See what data changed inside subroutines. */

		    isame[0] = *(unsigned char *)uplo == *(unsigned char *)
			    uplos;
		    isame[1] = ns == n;
		    isame[2] = rals == ralpha;
		    isame[3] = lce_(&xs[1], &xx[1], &lx);
		    isame[4] = incxs == incx;
		    if (null) {
			isame[5] = lce_(&as[1], &aa[1], &laa);
		    } else {
			isame[5] = lceres_(sname + 7, uplo, &n, &n, &as[1], &
				aa[1], &lda, (ftnlen)2, (ftnlen)1);
		    }
		    if (! packed) {
			isame[6] = ldas == lda;
		    }

/*                 If data was incorrectly changed, report and return. */

		    same = TRUE_;
		    i__4 = nargs;
		    for (i__ = 1; i__ <= i__4; ++i__) {
			same = same && isame[i__ - 1];
			if (! isame[i__ - 1]) {
			    io___341.ciunit = *nout;
			    s_wsfe(&io___341);
			    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(
				    integer));
			    e_wsfe();
			}
/* L30: */
		    }
		    if (! same) {
			*fatal = TRUE_;
			goto L120;
		    }

		    if (! null) {

/*                    Check the result column by column. */

			if (incx > 0) {
			    i__4 = n;
			    for (i__ = 1; i__ <= i__4; ++i__) {
				i__5 = i__;
				i__6 = i__;
				z__[i__5].r = x[i__6].r, z__[i__5].i = x[i__6]
					.i;
/* L40: */
			    }
			} else {
			    i__4 = n;
			    for (i__ = 1; i__ <= i__4; ++i__) {
				i__5 = i__;
				i__6 = n - i__ + 1;
				z__[i__5].r = x[i__6].r, z__[i__5].i = x[i__6]
					.i;
/* L50: */
			    }
			}
			ja = 1;
			i__4 = n;
			for (j = 1; j <= i__4; ++j) {
			    r_cnjg(&q__1, &z__[j]);
			    w[0].r = q__1.r, w[0].i = q__1.i;
			    if (upper) {
				jj = 1;
				lj = j;
			    } else {
				jj = j;
				lj = n - j + 1;
			    }
			    cmvch_("N", &lj, &c__1, &alpha, &z__[jj], &lj, w, 
				    &c__1, &c_b2, &a[jj + j * a_dim1], &c__1, 
				    &yt[1], &g[1], &aa[ja], eps, &err, fatal, 
				    nout, &c_true, (ftnlen)1);
			    if (full) {
				if (upper) {
				    ja += lda;
				} else {
				    ja = ja + lda + 1;
				}
			    } else {
				ja += lj;
			    }
			    errmax = max(errmax,err);
/*                       If got really bad answer, report and return. */
			    if (*fatal) {
				goto L110;
			    }
/* L60: */
			}
		    } else {
/*                    Avoid repeating tests if N.le.0. */
			if (n <= 0) {
			    goto L100;
			}
		    }

/* L70: */
		}

/* L80: */
	    }

/* L90: */
	}

L100:
	;
    }

/*     Report result. */

    if (errmax < *thresh) {
	io___348.ciunit = *nout;
	s_wsfe(&io___348);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	e_wsfe();
    } else {
	io___349.ciunit = *nout;
	s_wsfe(&io___349);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
	e_wsfe();
    }
    goto L130;

L110:
    io___350.ciunit = *nout;
    s_wsfe(&io___350);
    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
    e_wsfe();

L120:
    io___351.ciunit = *nout;
    s_wsfe(&io___351);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    if (full) {
	io___352.ciunit = *nout;
	s_wsfe(&io___352);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&ralpha, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (packed) {
	io___353.ciunit = *nout;
	s_wsfe(&io___353);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&ralpha, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	e_wsfe();
    }

L130:
    return 0;


/*     End of CCHK5. */

} /* cchk5_ */

/* Subroutine */ int cchk6_(char *sname, real *eps, real *thresh, integer *
	nout, integer *ntra, logical *trace, logical *rewi, logical *fatal, 
	integer *nidim, integer *idim, integer *nalf, complex *alf, integer *
	ninc, integer *inc, integer *nmax, integer *incmax, complex *a, 
	complex *aa, complex *as, complex *x, complex *xx, complex *xs, 
	complex *y, complex *yy, complex *ys, complex *yt, real *g, complex *
	z__, integer *iorder, ftnlen sname_len)
{
    /* Initialized data */

    static char ich[2] = "UL";

    /* Format strings */
    static char fmt_9993[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "i3,\002,(\002,f4.1,\002,\002,f4.1,\002), X,\002,i2,\002, Y,\002,"
	    "i2,\002, A,\002,i3,\002) .\002)";
    static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "i3,\002,(\002,f4.1,\002,\002,f4.1,\002), X,\002,i2,\002, Y,\002,"
	    "i2,\002, AP) .\002)";
    static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
	    "N VALID CALL *\002,\002******\002)";
    static char fmt_9998[] = "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
	    " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
    static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
	    "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_9997[] = "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
	    "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
	    " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
    static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
	    " \002,i3)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, z_dim1, z_offset, i__1, i__2, i__3, i__4, i__5, 
	    i__6, i__7;
    complex q__1, q__2, q__3;
    alist al__1;

    /* Builtin functions */
    /* Subroutine */ int s_copy(char *, char *, ftnlen, ftnlen);
    integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
	     f_rew(alist *);
    void r_cnjg(complex *, complex *);

    /* Local variables */
    integer i__, j, n;
    complex w[2];
    integer ia, ja, ic, nc, jj, lj, in, ix, iy, ns, lx, ly, laa, lda;
    extern logical lce_(complex *, complex *, integer *);
    complex als;
    real err;
    integer ldas;
    logical same;
    integer incx, incy;
    logical full, null;
    char uplo[1];
    extern /* Subroutine */ int cmake_(char *, char *, char *, integer *, 
	    integer *, complex *, integer *, complex *, integer *, integer *, 
	    integer *, logical *, complex *, ftnlen, ftnlen, ftnlen);
    complex alpha;
    logical isame[13];
    extern /* Subroutine */ int cmvch_(char *, integer *, integer *, complex *
	    , complex *, integer *, complex *, integer *, complex *, complex *
	    , integer *, complex *, real *, complex *, real *, real *, 
	    logical *, integer *, logical *, ftnlen);
    integer nargs;
    logical reset;
    char cuplo[14];
    integer incxs, incys;
    logical upper;
    char uplos[1];
    extern /* Subroutine */ int ccher2_(integer *, char *, integer *, complex 
	    *, complex *, integer *, complex *, integer *, complex *, integer 
	    *, ftnlen), cchpr2_(integer *, char *, integer *, complex *, 
	    complex *, integer *, complex *, integer *, complex *, ftnlen);
    logical packed;
    extern logical lceres_(char *, char *, integer *, integer *, complex *, 
	    complex *, integer *, ftnlen, ftnlen);
    real errmax;
    complex transl;

    /* Fortran I/O blocks */
    static cilist io___386 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___387 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___388 = { 0, 0, 0, fmt_9992, 0 };
    static cilist io___391 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___398 = { 0, 0, 0, fmt_9999, 0 };
    static cilist io___399 = { 0, 0, 0, fmt_9997, 0 };
    static cilist io___400 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___401 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___402 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___403 = { 0, 0, 0, fmt_9994, 0 };



/*  Tests CHER2 and CHPR2. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Parameters .. */
/*     .. Scalar Arguments .. */
/*     .. Array Arguments .. */
/*     .. Local Scalars .. */
/*     .. Local Arrays .. */
/*     .. External Functions .. */
/*     .. External Subroutines .. */
/*     .. Intrinsic Functions .. */
/*     .. Scalars in Common .. */
/*     .. Common blocks .. */
/*     .. Data statements .. */
    /* Parameter adjustments */
    --idim;
    --alf;
    --inc;
    z_dim1 = *nmax;
    z_offset = 1 + z_dim1;
    z__ -= z_offset;
    --g;
    --yt;
    --y;
    --x;
    --as;
    --aa;
    a_dim1 = *nmax;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --ys;
    --yy;
    --xs;
    --xx;

    /* Function Body */
/*     .. Executable Statements .. */
    full = *(unsigned char *)&sname[8] == 'e';
    packed = *(unsigned char *)&sname[8] == 'p';
/*     Define the number of arguments. */
    if (full) {
	nargs = 9;
    } else if (packed) {
	nargs = 8;
    }

    nc = 0;
    reset = TRUE_;
    errmax = 0.f;

    i__1 = *nidim;
    for (in = 1; in <= i__1; ++in) {
	n = idim[in];
/*        Set LDA to 1 more than minimum value if room. */
	lda = n;
	if (lda < *nmax) {
	    ++lda;
	}
/*        Skip tests if not enough room. */
	if (lda > *nmax) {
	    goto L140;
	}
	if (packed) {
	    laa = n * (n + 1) / 2;
	} else {
	    laa = lda * n;
	}

	for (ic = 1; ic <= 2; ++ic) {
	    *(unsigned char *)uplo = *(unsigned char *)&ich[ic - 1];
	    if (*(unsigned char *)uplo == 'U') {
		s_copy(cuplo, "    CblasUpper", (ftnlen)14, (ftnlen)14);
	    } else {
		s_copy(cuplo, "    CblasLower", (ftnlen)14, (ftnlen)14);
	    }
	    upper = *(unsigned char *)uplo == 'U';

	    i__2 = *ninc;
	    for (ix = 1; ix <= i__2; ++ix) {
		incx = inc[ix];
		lx = abs(incx) * n;

/*              Generate the vector X. */

		transl.r = .5f, transl.i = 0.f;
		i__3 = abs(incx);
		i__4 = n - 1;
		cmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &xx[1], &i__3,
			 &c__0, &i__4, &reset, &transl, (ftnlen)2, (ftnlen)1, 
			(ftnlen)1);
		if (n > 1) {
		    i__3 = n / 2;
		    x[i__3].r = 0.f, x[i__3].i = 0.f;
		    i__3 = abs(incx) * (n / 2 - 1) + 1;
		    xx[i__3].r = 0.f, xx[i__3].i = 0.f;
		}

		i__3 = *ninc;
		for (iy = 1; iy <= i__3; ++iy) {
		    incy = inc[iy];
		    ly = abs(incy) * n;

/*                 Generate the vector Y. */

		    transl.r = 0.f, transl.i = 0.f;
		    i__4 = abs(incy);
		    i__5 = n - 1;
		    cmake_("ge", " ", " ", &c__1, &n, &y[1], &c__1, &yy[1], &
			    i__4, &c__0, &i__5, &reset, &transl, (ftnlen)2, (
			    ftnlen)1, (ftnlen)1);
		    if (n > 1) {
			i__4 = n / 2;
			y[i__4].r = 0.f, y[i__4].i = 0.f;
			i__4 = abs(incy) * (n / 2 - 1) + 1;
			yy[i__4].r = 0.f, yy[i__4].i = 0.f;
		    }

		    i__4 = *nalf;
		    for (ia = 1; ia <= i__4; ++ia) {
			i__5 = ia;
			alpha.r = alf[i__5].r, alpha.i = alf[i__5].i;
			null = n <= 0 || alpha.r == 0.f && alpha.i == 0.f;

/*                    Generate the matrix A. */

			transl.r = 0.f, transl.i = 0.f;
			i__5 = n - 1;
			i__6 = n - 1;
			cmake_(sname + 7, uplo, " ", &n, &n, &a[a_offset], 
				nmax, &aa[1], &lda, &i__5, &i__6, &reset, &
				transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);

			++nc;

/*                    Save every datum before calling the subroutine. */

			*(unsigned char *)uplos = *(unsigned char *)uplo;
			ns = n;
			als.r = alpha.r, als.i = alpha.i;
			i__5 = laa;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    i__6 = i__;
			    i__7 = i__;
			    as[i__6].r = aa[i__7].r, as[i__6].i = aa[i__7].i;
/* L10: */
			}
			ldas = lda;
			i__5 = lx;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    i__6 = i__;
			    i__7 = i__;
			    xs[i__6].r = xx[i__7].r, xs[i__6].i = xx[i__7].i;
/* L20: */
			}
			incxs = incx;
			i__5 = ly;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    i__6 = i__;
			    i__7 = i__;
			    ys[i__6].r = yy[i__7].r, ys[i__6].i = yy[i__7].i;
/* L30: */
			}
			incys = incy;

/*                    Call the subroutine. */

			if (full) {
			    if (*trace) {
				io___386.ciunit = *ntra;
				s_wsfe(&io___386);
				do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(
					integer));
				do_fio(&c__1, sname, (ftnlen)12);
				do_fio(&c__1, cuplo, (ftnlen)14);
				do_fio(&c__1, (char *)&n, (ftnlen)sizeof(
					integer));
				do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(
					real));
				do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(
					integer));
				do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(
					integer));
				do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(
					integer));
				e_wsfe();
			    }
			    if (*rewi) {
				al__1.aerr = 0;
				al__1.aunit = *ntra;
				f_rew(&al__1);
			    }
			    ccher2_(iorder, uplo, &n, &alpha, &xx[1], &incx, &
				    yy[1], &incy, &aa[1], &lda, (ftnlen)1);
			} else if (packed) {
			    if (*trace) {
				io___387.ciunit = *ntra;
				s_wsfe(&io___387);
				do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(
					integer));
				do_fio(&c__1, sname, (ftnlen)12);
				do_fio(&c__1, cuplo, (ftnlen)14);
				do_fio(&c__1, (char *)&n, (ftnlen)sizeof(
					integer));
				do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(
					real));
				do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(
					integer));
				do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(
					integer));
				e_wsfe();
			    }
			    if (*rewi) {
				al__1.aerr = 0;
				al__1.aunit = *ntra;
				f_rew(&al__1);
			    }
			    cchpr2_(iorder, uplo, &n, &alpha, &xx[1], &incx, &
				    yy[1], &incy, &aa[1], (ftnlen)1);
			}

/*                    Check if error-exit was taken incorrectly. */

			if (! infoc_1.ok) {
			    io___388.ciunit = *nout;
			    s_wsfe(&io___388);
			    e_wsfe();
			    *fatal = TRUE_;
			    goto L160;
			}

/*                    See what data changed inside subroutines. */

			isame[0] = *(unsigned char *)uplo == *(unsigned char *
				)uplos;
			isame[1] = ns == n;
			isame[2] = als.r == alpha.r && als.i == alpha.i;
			isame[3] = lce_(&xs[1], &xx[1], &lx);
			isame[4] = incxs == incx;
			isame[5] = lce_(&ys[1], &yy[1], &ly);
			isame[6] = incys == incy;
			if (null) {
			    isame[7] = lce_(&as[1], &aa[1], &laa);
			} else {
			    isame[7] = lceres_(sname + 7, uplo, &n, &n, &as[1]
				    , &aa[1], &lda, (ftnlen)2, (ftnlen)1);
			}
			if (! packed) {
			    isame[8] = ldas == lda;
			}

/*                   If data was incorrectly changed, report and return. */

			same = TRUE_;
			i__5 = nargs;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    same = same && isame[i__ - 1];
			    if (! isame[i__ - 1]) {
				io___391.ciunit = *nout;
				s_wsfe(&io___391);
				do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(
					integer));
				e_wsfe();
			    }
/* L40: */
			}
			if (! same) {
			    *fatal = TRUE_;
			    goto L160;
			}

			if (! null) {

/*                       Check the result column by column. */

			    if (incx > 0) {
				i__5 = n;
				for (i__ = 1; i__ <= i__5; ++i__) {
				    i__6 = i__ + z_dim1;
				    i__7 = i__;
				    z__[i__6].r = x[i__7].r, z__[i__6].i = x[
					    i__7].i;
/* L50: */
				}
			    } else {
				i__5 = n;
				for (i__ = 1; i__ <= i__5; ++i__) {
				    i__6 = i__ + z_dim1;
				    i__7 = n - i__ + 1;
				    z__[i__6].r = x[i__7].r, z__[i__6].i = x[
					    i__7].i;
/* L60: */
				}
			    }
			    if (incy > 0) {
				i__5 = n;
				for (i__ = 1; i__ <= i__5; ++i__) {
				    i__6 = i__ + (z_dim1 << 1);
				    i__7 = i__;
				    z__[i__6].r = y[i__7].r, z__[i__6].i = y[
					    i__7].i;
/* L70: */
				}
			    } else {
				i__5 = n;
				for (i__ = 1; i__ <= i__5; ++i__) {
				    i__6 = i__ + (z_dim1 << 1);
				    i__7 = n - i__ + 1;
				    z__[i__6].r = y[i__7].r, z__[i__6].i = y[
					    i__7].i;
/* L80: */
				}
			    }
			    ja = 1;
			    i__5 = n;
			    for (j = 1; j <= i__5; ++j) {
				r_cnjg(&q__2, &z__[j + (z_dim1 << 1)]);
				q__1.r = alpha.r * q__2.r - alpha.i * q__2.i, 
					q__1.i = alpha.r * q__2.i + alpha.i * 
					q__2.r;
				w[0].r = q__1.r, w[0].i = q__1.i;
				r_cnjg(&q__2, &alpha);
				r_cnjg(&q__3, &z__[j + z_dim1]);
				q__1.r = q__2.r * q__3.r - q__2.i * q__3.i, 
					q__1.i = q__2.r * q__3.i + q__2.i * 
					q__3.r;
				w[1].r = q__1.r, w[1].i = q__1.i;
				if (upper) {
				    jj = 1;
				    lj = j;
				} else {
				    jj = j;
				    lj = n - j + 1;
				}
				cmvch_("N", &lj, &c__2, &c_b2, &z__[jj + 
					z_dim1], nmax, w, &c__1, &c_b2, &a[jj 
					+ j * a_dim1], &c__1, &yt[1], &g[1], &
					aa[ja], eps, &err, fatal, nout, &
					c_true, (ftnlen)1);
				if (full) {
				    if (upper) {
					ja += lda;
				    } else {
					ja = ja + lda + 1;
				    }
				} else {
				    ja += lj;
				}
				errmax = max(errmax,err);
/*                          If got really bad answer, report and return. */
				if (*fatal) {
				    goto L150;
				}
/* L90: */
			    }
			} else {
/*                       Avoid repeating tests with N.le.0. */
			    if (n <= 0) {
				goto L140;
			    }
			}

/* L100: */
		    }

/* L110: */
		}

/* L120: */
	    }

/* L130: */
	}

L140:
	;
    }

/*     Report result. */

    if (errmax < *thresh) {
	io___398.ciunit = *nout;
	s_wsfe(&io___398);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	e_wsfe();
    } else {
	io___399.ciunit = *nout;
	s_wsfe(&io___399);
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
	e_wsfe();
    }
    goto L170;

L150:
    io___400.ciunit = *nout;
    s_wsfe(&io___400);
    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
    e_wsfe();

L160:
    io___401.ciunit = *nout;
    s_wsfe(&io___401);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    if (full) {
	io___402.ciunit = *nout;
	s_wsfe(&io___402);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (packed) {
	io___403.ciunit = *nout;
	s_wsfe(&io___403);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(real));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    }

L170:
    return 0;


/*     End of CCHK6. */

} /* cchk6_ */

/* Subroutine */ int cmvch_(char *trans, integer *m, integer *n, complex *
	alpha, complex *a, integer *nmax, complex *x, integer *incx, complex *
	beta, complex *y, integer *incy, complex *yt, real *g, complex *yy, 
	real *eps, real *err, logical *fatal, integer *nout, logical *mv, 
	ftnlen trans_len)
{
    /* Format strings */
    static char fmt_9999[] = "(\002 ******* FATAL ERROR - COMPUTED RESULT IS"
	    " LESS THAN HAL\002,\002F ACCURATE *******\002,/\002             "
	    "          EXPECTED RE\002,\002SULT                    COMPUTED R"
	    "ESULT\002)";
    static char fmt_9998[] = "(1x,i7,2(\002  (\002,g15.6,\002,\002,g15.6,"
	    "\002)\002))";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
    real r__1, r__2, r__3, r__4, r__5, r__6;
    complex q__1, q__2, q__3;

    /* Builtin functions */
    double r_imag(complex *);
    void r_cnjg(complex *, complex *);
    double c_abs(complex *), sqrt(doublereal);
    integer s_wsfe(cilist *), e_wsfe(void), do_fio(integer *, char *, ftnlen);

    /* Local variables */
    integer i__, j, ml, nl, iy, jx, kx, ky;
    real erri;
    logical tran, ctran;
    integer incxl, incyl;

    /* Fortran I/O blocks */
    static cilist io___417 = { 0, 0, 0, fmt_9999, 0 };
    static cilist io___418 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___419 = { 0, 0, 0, fmt_9998, 0 };



/*  Checks the results of the computational tests. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Parameters .. */
/*     .. Scalar Arguments .. */
/*     .. Array Arguments .. */
/*     .. Local Scalars .. */
/*     .. Intrinsic Functions .. */
/*     .. Statement Functions .. */
/*     .. Statement Function definitions .. */
/*     .. Executable Statements .. */
    /* Parameter adjustments */
    a_dim1 = *nmax;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --x;
    --y;
    --yt;
    --g;
    --yy;

    /* Function Body */
    tran = *(unsigned char *)trans == 'T';
    ctran = *(unsigned char *)trans == 'C';
    if (tran || ctran) {
	ml = *n;
	nl = *m;
    } else {
	ml = *m;
	nl = *n;
    }
    if (*incx < 0) {
	kx = nl;
	incxl = -1;
    } else {
	kx = 1;
	incxl = 1;
    }
    if (*incy < 0) {
	ky = ml;
	incyl = -1;
    } else {
	ky = 1;
	incyl = 1;
    }

/*     Compute expected result in YT using data in A, X and Y. */
/*     Compute gauges in G. */

    iy = ky;
    i__1 = ml;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = iy;
	yt[i__2].r = 0.f, yt[i__2].i = 0.f;
	g[iy] = 0.f;
	jx = kx;
	if (tran) {
	    i__2 = nl;
	    for (j = 1; j <= i__2; ++j) {
		i__3 = iy;
		i__4 = iy;
		i__5 = j + i__ * a_dim1;
		i__6 = jx;
		q__2.r = a[i__5].r * x[i__6].r - a[i__5].i * x[i__6].i, 
			q__2.i = a[i__5].r * x[i__6].i + a[i__5].i * x[i__6]
			.r;
		q__1.r = yt[i__4].r + q__2.r, q__1.i = yt[i__4].i + q__2.i;
		yt[i__3].r = q__1.r, yt[i__3].i = q__1.i;
		i__3 = j + i__ * a_dim1;
		i__4 = jx;
		g[iy] += ((r__1 = a[i__3].r, abs(r__1)) + (r__2 = r_imag(&a[j 
			+ i__ * a_dim1]), abs(r__2))) * ((r__3 = x[i__4].r, 
			abs(r__3)) + (r__4 = r_imag(&x[jx]), abs(r__4)));
		jx += incxl;
/* L10: */
	    }
	} else if (ctran) {
	    i__2 = nl;
	    for (j = 1; j <= i__2; ++j) {
		i__3 = iy;
		i__4 = iy;
		r_cnjg(&q__3, &a[j + i__ * a_dim1]);
		i__5 = jx;
		q__2.r = q__3.r * x[i__5].r - q__3.i * x[i__5].i, q__2.i = 
			q__3.r * x[i__5].i + q__3.i * x[i__5].r;
		q__1.r = yt[i__4].r + q__2.r, q__1.i = yt[i__4].i + q__2.i;
		yt[i__3].r = q__1.r, yt[i__3].i = q__1.i;
		i__3 = j + i__ * a_dim1;
		i__4 = jx;
		g[iy] += ((r__1 = a[i__3].r, abs(r__1)) + (r__2 = r_imag(&a[j 
			+ i__ * a_dim1]), abs(r__2))) * ((r__3 = x[i__4].r, 
			abs(r__3)) + (r__4 = r_imag(&x[jx]), abs(r__4)));
		jx += incxl;
/* L20: */
	    }
	} else {
	    i__2 = nl;
	    for (j = 1; j <= i__2; ++j) {
		i__3 = iy;
		i__4 = iy;
		i__5 = i__ + j * a_dim1;
		i__6 = jx;
		q__2.r = a[i__5].r * x[i__6].r - a[i__5].i * x[i__6].i, 
			q__2.i = a[i__5].r * x[i__6].i + a[i__5].i * x[i__6]
			.r;
		q__1.r = yt[i__4].r + q__2.r, q__1.i = yt[i__4].i + q__2.i;
		yt[i__3].r = q__1.r, yt[i__3].i = q__1.i;
		i__3 = i__ + j * a_dim1;
		i__4 = jx;
		g[iy] += ((r__1 = a[i__3].r, abs(r__1)) + (r__2 = r_imag(&a[
			i__ + j * a_dim1]), abs(r__2))) * ((r__3 = x[i__4].r, 
			abs(r__3)) + (r__4 = r_imag(&x[jx]), abs(r__4)));
		jx += incxl;
/* L30: */
	    }
	}
	i__2 = iy;
	i__3 = iy;
	q__2.r = alpha->r * yt[i__3].r - alpha->i * yt[i__3].i, q__2.i = 
		alpha->r * yt[i__3].i + alpha->i * yt[i__3].r;
	i__4 = iy;
	q__3.r = beta->r * y[i__4].r - beta->i * y[i__4].i, q__3.i = beta->r *
		 y[i__4].i + beta->i * y[i__4].r;
	q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
	yt[i__2].r = q__1.r, yt[i__2].i = q__1.i;
	i__2 = iy;
	g[iy] = ((r__1 = alpha->r, abs(r__1)) + (r__2 = r_imag(alpha), abs(
		r__2))) * g[iy] + ((r__3 = beta->r, abs(r__3)) + (r__4 = 
		r_imag(beta), abs(r__4))) * ((r__5 = y[i__2].r, abs(r__5)) + (
		r__6 = r_imag(&y[iy]), abs(r__6)));
	iy += incyl;
/* L40: */
    }

/*     Compute the error ratio for this result. */

    *err = 0.f;
    i__1 = ml;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = i__;
	i__3 = (i__ - 1) * abs(*incy) + 1;
	q__1.r = yt[i__2].r - yy[i__3].r, q__1.i = yt[i__2].i - yy[i__3].i;
	erri = c_abs(&q__1) / *eps;
	if (g[i__] != 0.f) {
	    erri /= g[i__];
	}
	*err = max(*err,erri);
	if (*err * sqrt(*eps) >= 1.f) {
	    goto L60;
	}
/* L50: */
    }
/*     If the loop completes, all results are at least half accurate. */
    goto L80;

/*     Report fatal error. */

L60:
    *fatal = TRUE_;
    io___417.ciunit = *nout;
    s_wsfe(&io___417);
    e_wsfe();
    i__1 = ml;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*mv) {
	    io___418.ciunit = *nout;
	    s_wsfe(&io___418);
	    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
	    do_fio(&c__2, (char *)&yt[i__], (ftnlen)sizeof(real));
	    do_fio(&c__2, (char *)&yy[(i__ - 1) * abs(*incy) + 1], (ftnlen)
		    sizeof(real));
	    e_wsfe();
	} else {
	    io___419.ciunit = *nout;
	    s_wsfe(&io___419);
	    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
	    do_fio(&c__2, (char *)&yy[(i__ - 1) * abs(*incy) + 1], (ftnlen)
		    sizeof(real));
	    do_fio(&c__2, (char *)&yt[i__], (ftnlen)sizeof(real));
	    e_wsfe();
	}
/* L70: */
    }

L80:
    return 0;


/*     End of CMVCH. */

} /* cmvch_ */

logical lce_(complex *ri, complex *rj, integer *lr)
{
    /* System generated locals */
    integer i__1, i__2, i__3;
    logical ret_val;

    /* Local variables */
    integer i__;


/*  Tests if two arrays are identical. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Scalar Arguments .. */
/*     .. Array Arguments .. */
/*     .. Local Scalars .. */
/*     .. Executable Statements .. */
    /* Parameter adjustments */
    --rj;
    --ri;

    /* Function Body */
    i__1 = *lr;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = i__;
	i__3 = i__;
	if (ri[i__2].r != rj[i__3].r || ri[i__2].i != rj[i__3].i) {
	    goto L20;
	}
/* L10: */
    }
    ret_val = TRUE_;
    goto L30;
L20:
    ret_val = FALSE_;
L30:
    return ret_val;

/*     End of LCE. */

} /* lce_ */

logical lceres_(char *type__, char *uplo, integer *m, integer *n, complex *aa,
	 complex *as, integer *lda, ftnlen type_len, ftnlen uplo_len)
{
    /* System generated locals */
    integer aa_dim1, aa_offset, as_dim1, as_offset, i__1, i__2, i__3, i__4;
    logical ret_val;

    /* Builtin functions */
    integer s_cmp(char *, char *, ftnlen, ftnlen);

    /* Local variables */
    integer i__, j, ibeg, iend;
    logical upper;


/*  Tests if selected elements in two arrays are equal. */

/*  TYPE is 'ge', 'he' or 'hp'. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Scalar Arguments .. */
/*     .. Array Arguments .. */
/*     .. Local Scalars .. */
/*     .. Executable Statements .. */
    /* Parameter adjustments */
    as_dim1 = *lda;
    as_offset = 1 + as_dim1;
    as -= as_offset;
    aa_dim1 = *lda;
    aa_offset = 1 + aa_dim1;
    aa -= aa_offset;

    /* Function Body */
    upper = *(unsigned char *)uplo == 'U';
    if (s_cmp(type__, "ge", (ftnlen)2, (ftnlen)2) == 0) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *lda;
	    for (i__ = *m + 1; i__ <= i__2; ++i__) {
		i__3 = i__ + j * aa_dim1;
		i__4 = i__ + j * as_dim1;
		if (aa[i__3].r != as[i__4].r || aa[i__3].i != as[i__4].i) {
		    goto L70;
		}
/* L10: */
	    }
/* L20: */
	}
    } else if (s_cmp(type__, "he", (ftnlen)2, (ftnlen)2) == 0) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    if (upper) {
		ibeg = 1;
		iend = j;
	    } else {
		ibeg = j;
		iend = *n;
	    }
	    i__2 = ibeg - 1;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		i__3 = i__ + j * aa_dim1;
		i__4 = i__ + j * as_dim1;
		if (aa[i__3].r != as[i__4].r || aa[i__3].i != as[i__4].i) {
		    goto L70;
		}
/* L30: */
	    }
	    i__2 = *lda;
	    for (i__ = iend + 1; i__ <= i__2; ++i__) {
		i__3 = i__ + j * aa_dim1;
		i__4 = i__ + j * as_dim1;
		if (aa[i__3].r != as[i__4].r || aa[i__3].i != as[i__4].i) {
		    goto L70;
		}
/* L40: */
	    }
/* L50: */
	}
    }

/* L60: */
    ret_val = TRUE_;
    goto L80;
L70:
    ret_val = FALSE_;
L80:
    return ret_val;

/*     End of LCERES. */

} /* lceres_ */

/* Complex */ VOID cbeg_(complex * ret_val, logical *reset)
{
    /* System generated locals */
    real r__1, r__2;
    complex q__1;

    /* Local variables */
    static integer i__, j, ic, mi, mj;


/*  Generates complex numbers as pairs of random numbers uniformly */
/*  distributed between -0.5 and 0.5. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Scalar Arguments .. */
/*     .. Local Scalars .. */
/*     .. Save statement .. */
/*     .. Intrinsic Functions .. */
/*     .. Executable Statements .. */
    if (*reset) {
/*        Initialize local variables. */
	mi = 891;
	mj = 457;
	i__ = 7;
	j = 7;
	ic = 0;
	*reset = FALSE_;
    }

/*     The sequence of values of I or J is bounded between 1 and 999. */
/*     If initial I or J = 1,2,3,6,7 or 9, the period will be 50. */
/*     If initial I or J = 4 or 8, the period will be 25. */
/*     If initial I or J = 5, the period will be 10. */
/*     IC is used to break up the period by skipping 1 value of I or J */
/*     in 6. */

    ++ic;
L10:
    i__ *= mi;
    j *= mj;
    i__ -= i__ / 1000 * 1000;
    j -= j / 1000 * 1000;
    if (ic >= 5) {
	ic = 0;
	goto L10;
    }
    r__1 = (i__ - 500) / 1001.f;
    r__2 = (j - 500) / 1001.f;
    q__1.r = r__1, q__1.i = r__2;
     ret_val->r = q__1.r,  ret_val->i = q__1.i;
    return ;

/*     End of CBEG. */

} /* cbeg_ */

real sdiff_(real *x, real *y)
{
    /* System generated locals */
    real ret_val;


/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */

/*     .. Scalar Arguments .. */
/*     .. Executable Statements .. */
    ret_val = *x - *y;
    return ret_val;

/*     End of SDIFF. */

} /* sdiff_ */

/* Subroutine */ int cmake_(char *type__, char *uplo, char *diag, integer *m, 
	integer *n, complex *a, integer *nmax, complex *aa, integer *lda, 
	integer *kl, integer *ku, logical *reset, complex *transl, ftnlen 
	type_len, ftnlen uplo_len, ftnlen diag_len)
{
    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4;
    real r__1;
    complex q__1, q__2;

    /* Builtin functions */
    void r_cnjg(complex *, complex *);
    integer s_cmp(char *, char *, ftnlen, ftnlen);

    /* Local variables */
    integer i__, j, i1, i2, i3, jj, kk;
    logical gen, tri, sym;
    extern /* Complex */ VOID cbeg_(complex *, logical *);
    integer ibeg, iend, ioff;
    logical unit, lower, upper;


/*  Generates values for an M by N matrix A within the bandwidth */
/*  defined by KL and KU. */
/*  Stores the values in the array AA in the data structure required */
/*  by the routine, with unwanted elements set to rogue value. */

/*  TYPE is 'ge', 'gb', 'he', 'hb', 'hp', 'tr', 'tb' OR 'tp'. */

/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */
/*     Jeremy Du Croz, NAG Central Office. */

/*     .. Parameters .. */
/*     .. Scalar Arguments .. */
/*     .. Array Arguments .. */
/*     .. Local Scalars .. */
/*     .. External Functions .. */
/*     .. Intrinsic Functions .. */
/*     .. Executable Statements .. */
    /* Parameter adjustments */
    a_dim1 = *nmax;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --aa;

    /* Function Body */
    gen = *(unsigned char *)type__ == 'g';
    sym = *(unsigned char *)type__ == 'h';
    tri = *(unsigned char *)type__ == 't';
    upper = (sym || tri) && *(unsigned char *)uplo == 'U';
    lower = (sym || tri) && *(unsigned char *)uplo == 'L';
    unit = tri && *(unsigned char *)diag == 'U';

/*     Generate data in array A. */

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	i__2 = *m;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    if (gen || upper && i__ <= j || lower && i__ >= j) {
		if (i__ <= j && j - i__ <= *ku || i__ >= j && i__ - j <= *kl) 
			{
		    i__3 = i__ + j * a_dim1;
		    cbeg_(&q__2, reset);
		    q__1.r = q__2.r + transl->r, q__1.i = q__2.i + transl->i;
		    a[i__3].r = q__1.r, a[i__3].i = q__1.i;
		} else {
		    i__3 = i__ + j * a_dim1;
		    a[i__3].r = 0.f, a[i__3].i = 0.f;
		}
		if (i__ != j) {
		    if (sym) {
			i__3 = j + i__ * a_dim1;
			r_cnjg(&q__1, &a[i__ + j * a_dim1]);
			a[i__3].r = q__1.r, a[i__3].i = q__1.i;
		    } else if (tri) {
			i__3 = j + i__ * a_dim1;
			a[i__3].r = 0.f, a[i__3].i = 0.f;
		    }
		}
	    }
/* L10: */
	}
	if (sym) {
	    i__2 = j + j * a_dim1;
	    i__3 = j + j * a_dim1;
	    r__1 = a[i__3].r;
	    q__1.r = r__1, q__1.i = 0.f;
	    a[i__2].r = q__1.r, a[i__2].i = q__1.i;
	}
	if (tri) {
	    i__2 = j + j * a_dim1;
	    i__3 = j + j * a_dim1;
	    q__1.r = a[i__3].r + 1.f, q__1.i = a[i__3].i + 0.f;
	    a[i__2].r = q__1.r, a[i__2].i = q__1.i;
	}
	if (unit) {
	    i__2 = j + j * a_dim1;
	    a[i__2].r = 1.f, a[i__2].i = 0.f;
	}
/* L20: */
    }

/*     Store elements in array AS in data structure required by routine. */

    if (s_cmp(type__, "ge", (ftnlen)2, (ftnlen)2) == 0) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *m;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		i__3 = i__ + (j - 1) * *lda;
		i__4 = i__ + j * a_dim1;
		aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
/* L30: */
	    }
	    i__2 = *lda;
	    for (i__ = *m + 1; i__ <= i__2; ++i__) {
		i__3 = i__ + (j - 1) * *lda;
		aa[i__3].r = -1e10f, aa[i__3].i = 1e10f;
/* L40: */
	    }
/* L50: */
	}
    } else if (s_cmp(type__, "gb", (ftnlen)2, (ftnlen)2) == 0) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *ku + 1 - j;
	    for (i1 = 1; i1 <= i__2; ++i1) {
		i__3 = i1 + (j - 1) * *lda;
		aa[i__3].r = -1e10f, aa[i__3].i = 1e10f;
/* L60: */
	    }
/* Computing MIN */
	    i__3 = *kl + *ku + 1, i__4 = *ku + 1 + *m - j;
	    i__2 = min(i__3,i__4);
	    for (i2 = i1; i2 <= i__2; ++i2) {
		i__3 = i2 + (j - 1) * *lda;
		i__4 = i2 + j - *ku - 1 + j * a_dim1;
		aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
/* L70: */
	    }
	    i__2 = *lda;
	    for (i3 = i2; i3 <= i__2; ++i3) {
		i__3 = i3 + (j - 1) * *lda;
		aa[i__3].r = -1e10f, aa[i__3].i = 1e10f;
/* L80: */
	    }
/* L90: */
	}
    } else if (s_cmp(type__, "he", (ftnlen)2, (ftnlen)2) == 0 || s_cmp(type__,
	     "tr", (ftnlen)2, (ftnlen)2) == 0) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    if (upper) {
		ibeg = 1;
		if (unit) {
		    iend = j - 1;
		} else {
		    iend = j;
		}
	    } else {
		if (unit) {
		    ibeg = j + 1;
		} else {
		    ibeg = j;
		}
		iend = *n;
	    }
	    i__2 = ibeg - 1;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		i__3 = i__ + (j - 1) * *lda;
		aa[i__3].r = -1e10f, aa[i__3].i = 1e10f;
/* L100: */
	    }
	    i__2 = iend;
	    for (i__ = ibeg; i__ <= i__2; ++i__) {
		i__3 = i__ + (j - 1) * *lda;
		i__4 = i__ + j * a_dim1;
		aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
/* L110: */
	    }
	    i__2 = *lda;
	    for (i__ = iend + 1; i__ <= i__2; ++i__) {
		i__3 = i__ + (j - 1) * *lda;
		aa[i__3].r = -1e10f, aa[i__3].i = 1e10f;
/* L120: */
	    }
	    if (sym) {
		jj = j + (j - 1) * *lda;
		i__2 = jj;
		i__3 = jj;
		r__1 = aa[i__3].r;
		q__1.r = r__1, q__1.i = -1e10f;
		aa[i__2].r = q__1.r, aa[i__2].i = q__1.i;
	    }
/* L130: */
	}
    } else if (s_cmp(type__, "hb", (ftnlen)2, (ftnlen)2) == 0 || s_cmp(type__,
	     "tb", (ftnlen)2, (ftnlen)2) == 0) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    if (upper) {
		kk = *kl + 1;
/* Computing MAX */
		i__2 = 1, i__3 = *kl + 2 - j;
		ibeg = max(i__2,i__3);
		if (unit) {
		    iend = *kl;
		} else {
		    iend = *kl + 1;
		}
	    } else {
		kk = 1;
		if (unit) {
		    ibeg = 2;
		} else {
		    ibeg = 1;
		}
/* Computing MIN */
		i__2 = *kl + 1, i__3 = *m + 1 - j;
		iend = min(i__2,i__3);
	    }
	    i__2 = ibeg - 1;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		i__3 = i__ + (j - 1) * *lda;
		aa[i__3].r = -1e10f, aa[i__3].i = 1e10f;
/* L140: */
	    }
	    i__2 = iend;
	    for (i__ = ibeg; i__ <= i__2; ++i__) {
		i__3 = i__ + (j - 1) * *lda;
		i__4 = i__ + j - kk + j * a_dim1;
		aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
/* L150: */
	    }
	    i__2 = *lda;
	    for (i__ = iend + 1; i__ <= i__2; ++i__) {
		i__3 = i__ + (j - 1) * *lda;
		aa[i__3].r = -1e10f, aa[i__3].i = 1e10f;
/* L160: */
	    }
	    if (sym) {
		jj = kk + (j - 1) * *lda;
		i__2 = jj;
		i__3 = jj;
		r__1 = aa[i__3].r;
		q__1.r = r__1, q__1.i = -1e10f;
		aa[i__2].r = q__1.r, aa[i__2].i = q__1.i;
	    }
/* L170: */
	}
    } else if (s_cmp(type__, "hp", (ftnlen)2, (ftnlen)2) == 0 || s_cmp(type__,
	     "tp", (ftnlen)2, (ftnlen)2) == 0) {
	ioff = 0;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    if (upper) {
		ibeg = 1;
		iend = j;
	    } else {
		ibeg = j;
		iend = *n;
	    }
	    i__2 = iend;
	    for (i__ = ibeg; i__ <= i__2; ++i__) {
		++ioff;
		i__3 = ioff;
		i__4 = i__ + j * a_dim1;
		aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
		if (i__ == j) {
		    if (unit) {
			i__3 = ioff;
			aa[i__3].r = -1e10f, aa[i__3].i = 1e10f;
		    }
		    if (sym) {
			i__3 = ioff;
			i__4 = ioff;
			r__1 = aa[i__4].r;
			q__1.r = r__1, q__1.i = -1e10f;
			aa[i__3].r = q__1.r, aa[i__3].i = q__1.i;
		    }
		}
/* L180: */
	    }
/* L190: */
	}
    }
    return 0;

/*     End of CMAKE. */

} /* cmake_ */

/* Main program alias */ int cblat2_ () { MAIN__ (); return 0; }
