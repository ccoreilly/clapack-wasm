/* testing/c_dblat2.f -- translated by f2c (version 20191129).
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

static integer c__9 = 9;
static integer c__1 = 1;
static integer c__3 = 3;
static integer c__8 = 8;
static integer c__5 = 5;
static integer c__65 = 65;
static integer c__7 = 7;
static integer c__2 = 2;
static doublereal c_b123 = 1.;
static doublereal c_b135 = 0.;
static integer c__6 = 6;
static logical c_true = TRUE_;
static integer c_n1 = -1;
static integer c__0 = 0;
static logical c_false = FALSE_;

/* Main program */ int MAIN__(void)
{
    /* Initialized data */

    static char snames[12*16] = "cblas_dgemv " "cblas_dgbmv " "cblas_dsymv " 
	    "cblas_dsbmv " "cblas_dspmv " "cblas_dtrmv " "cblas_dtbmv " "cbl"
	    "as_dtpmv " "cblas_dtrsv " "cblas_dtbsv " "cblas_dtpsv " "cblas_d"
	    "ger  " "cblas_dsyr  " "cblas_dspr  " "cblas_dsyr2 " "cblas_dspr2 "
	    ;

    /* Format strings */
    static char fmt_9997[] = "(\002 NUMBER OF VALUES OF \002,a,\002 IS LESS "
	    "THAN 1 OR GREATER \002,\002THAN \002,i2)";
    static char fmt_9996[] = "(\002 VALUE OF N IS LESS THAN 0 OR GREATER THA"
	    "N \002,i2)";
    static char fmt_9995[] = "(\002 VALUE OF K IS LESS THAN 0\002)";
    static char fmt_9994[] = "(\002 ABSOLUTE VALUE OF INCX OR INCY IS 0 OR G"
	    "REATER THAN \002,i2)";
    static char fmt_9993[] = "(\002 TESTS OF THE DOUBLE PRECISION LEVEL 2 BL"
	    "AS\002,//\002 THE F\002,\002OLLOWING PARAMETER VALUES WILL BE US"
	    "ED:\002)";
    static char fmt_9992[] = "(\002   FOR N              \002,9i6)";
    static char fmt_9991[] = "(\002   FOR K              \002,7i6)";
    static char fmt_9990[] = "(\002   FOR INCX AND INCY  \002,7i6)";
    static char fmt_9989[] = "(\002   FOR ALPHA          \002,7f6.1)";
    static char fmt_9988[] = "(\002   FOR BETA           \002,7f6.1)";
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
	    " BE\002,1p,d9.1)";
    static char fmt_9985[] = "(\002 ERROR IN DMVCH -  IN-LINE DOT PRODUCTS A"
	    "RE BEING EVALU\002,\002ATED WRONGLY.\002,/\002 DMVCH WAS CALLED "
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
    integer i__1, i__2, i__3;
    doublereal d__1;
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
    /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);

    /* Local variables */
    doublereal a[4225]	/* was [65][65] */, g[65];
    integer i__, j, n;
    doublereal x[65], y[65], z__[130], aa[4225];
    integer kb[7];
    doublereal as[4225], xs[130], ys[130], yt[65], xx[130], yy[130], alf[7];
    extern logical lde_(doublereal *, doublereal *, integer *);
    integer inc[7], nkb;
    doublereal bet[7], eps, err;
    integer nalf, idim[9];
    logical same;
    integer ninc, nbet, ntra;
    logical rewi;
    extern /* Subroutine */ int dchk1_(char *, doublereal *, doublereal *, 
	    integer *, integer *, logical *, logical *, logical *, integer *, 
	    integer *, integer *, integer *, integer *, doublereal *, integer 
	    *, doublereal *, integer *, integer *, integer *, integer *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, integer *, ftnlen), 
	    dchk2_(char *, doublereal *, doublereal *, integer *, integer *, 
	    logical *, logical *, logical *, integer *, integer *, integer *, 
	    integer *, integer *, doublereal *, integer *, doublereal *, 
	    integer *, integer *, integer *, integer *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, integer *, ftnlen), dchk3_(char *, 
	    doublereal *, doublereal *, integer *, integer *, logical *, 
	    logical *, logical *, integer *, integer *, integer *, integer *, 
	    integer *, integer *, integer *, integer *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, integer *,
	     ftnlen), dchk4_(char *, doublereal *, doublereal *, integer *, 
	    integer *, logical *, logical *, logical *, integer *, integer *, 
	    integer *, doublereal *, integer *, integer *, integer *, integer 
	    *, doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, integer *,
	     ftnlen), dchk5_(char *, doublereal *, doublereal *, integer *, 
	    integer *, logical *, logical *, logical *, integer *, integer *, 
	    integer *, doublereal *, integer *, integer *, integer *, integer 
	    *, doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, integer *,
	     ftnlen), dchk6_(char *, doublereal *, doublereal *, integer *, 
	    integer *, logical *, logical *, logical *, integer *, integer *, 
	    integer *, doublereal *, integer *, integer *, integer *, integer 
	    *, doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, integer *,
	     ftnlen);
    extern doublereal ddiff_(doublereal *, doublereal *);
    logical fatal, trace;
    integer nidim;
    extern /* Subroutine */ int dmvch_(char *, integer *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, doublereal *,
	     doublereal *, doublereal *, doublereal *, logical *, integer *, 
	    logical *, ftnlen);
    char snaps[32], trans[1];
    integer isnum;
    logical ltest[16], sfatal, corder;
    char snamet[12];
    doublereal thresh;
    logical rorder;
    extern /* Subroutine */ void cd2chke_(char *);
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



/*  Test program for the DOUBLE PRECISION Level 2 Blas. */

/*  The program must be driven by a short data file. The first 17 records */
/*  of the file are read using list-directed input, the last 16 records */
/*  are read using the format ( A12, L2 ). An annotated example of a data */
/*  file can be obtained by deleting the first 3 characters from the */
/*  following 33 lines: */
/*  'DBLAT2.SNAP'     NAME OF SNAPSHOT OUTPUT FILE */
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
/*  0.0 1.0 0.7       VALUES OF ALPHA */
/*  3                 NUMBER OF VALUES OF BETA */
/*  0.0 1.0 0.9       VALUES OF BETA */
/*  cblas_dgemv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dgbmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dsymv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dsbmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dspmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dtrmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dtbmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dtpmv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dtrsv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dtbsv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dtpsv  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dger   T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dsyr   T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dspr   T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dsyr2  T PUT F FOR NO TEST. SAME COLUMNS. */
/*  cblas_dspr2  T PUT F FOR NO TEST. SAME COLUMNS. */

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

/*     Read name and unit number for snapshot output file and open file. */

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
    do_lio(&c__5, &c__1, (char *)&thresh, (ftnlen)sizeof(doublereal));
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
	do_lio(&c__5, &c__1, (char *)&alf[i__ - 1], (ftnlen)sizeof(doublereal)
		);
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
	do_lio(&c__5, &c__1, (char *)&bet[i__ - 1], (ftnlen)sizeof(doublereal)
		);
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
	do_fio(&c__1, (char *)&alf[i__ - 1], (ftnlen)sizeof(doublereal));
    }
    e_wsfe();
    s_wsfe(&io___51);
    i__1 = nbet;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_fio(&c__1, (char *)&bet[i__ - 1], (ftnlen)sizeof(doublereal));
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
    do_fio(&c__1, (char *)&thresh, (ftnlen)sizeof(doublereal));
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

    for (i__ = 1; i__ <= 16; ++i__) {
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
    for (i__ = 1; i__ <= 16; ++i__) {
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

    eps = 1.;
L90:
    d__1 = eps + 1.;
    if (ddiff_(&d__1, &c_b123) == 0.) {
	goto L100;
    }
    eps *= .5;
    goto L90;
L100:
    eps += eps;
    s_wsfe(&io___69);
    do_fio(&c__1, (char *)&eps, (ftnlen)sizeof(doublereal));
    e_wsfe();

/*     Check the reliability of DMVCH using exact data. */

    n = 32;
    i__1 = n;
    for (j = 1; j <= i__1; ++j) {
	i__2 = n;
	for (i__ = 1; i__ <= i__2; ++i__) {
/* Computing MAX */
	    i__3 = i__ - j + 1;
	    a[i__ + j * 65 - 66] = (doublereal) max(i__3,0);
/* L110: */
	}
	x[j - 1] = (doublereal) j;
	y[j - 1] = 0.;
/* L120: */
    }
    i__1 = n;
    for (j = 1; j <= i__1; ++j) {
	yy[j - 1] = (doublereal) (j * ((j + 1) * j) / 2 - (j + 1) * j * (j - 
		1) / 3);
/* L130: */
    }
/*     YY holds the exact result. On exit from DMVCH YT holds */
/*     the result computed by DMVCH. */
    *(unsigned char *)trans = 'N';
    dmvch_(trans, &n, &n, &c_b123, a, &c__65, x, &c__1, &c_b135, y, &c__1, yt,
	     g, yy, &eps, &err, &fatal, &c__6, &c_true, (ftnlen)1);
    same = lde_(yy, yt, &n);
    if (! same || err != 0.) {
	s_wsfe(&io___82);
	do_fio(&c__1, trans, (ftnlen)1);
	do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
	do_fio(&c__1, (char *)&err, (ftnlen)sizeof(doublereal));
	e_wsfe();
	s_stop("", (ftnlen)0);
    }
    *(unsigned char *)trans = 'T';
    dmvch_(trans, &n, &n, &c_b123, a, &c__65, x, &c_n1, &c_b135, y, &c_n1, yt,
	     g, yy, &eps, &err, &fatal, &c__6, &c_true, (ftnlen)1);
    same = lde_(yy, yt, &n);
    if (! same || err != 0.) {
	s_wsfe(&io___83);
	do_fio(&c__1, trans, (ftnlen)1);
	do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
	do_fio(&c__1, (char *)&err, (ftnlen)sizeof(doublereal));
	e_wsfe();
	s_stop("", (ftnlen)0);
    }

/*     Test each subroutine in turn. */

    for (isnum = 1; isnum <= 16; ++isnum) {
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
		cd2chke_(snames + (isnum - 1) * 12);
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
		case 13:  goto L180;
		case 14:  goto L180;
		case 15:  goto L190;
		case 16:  goto L190;
	    }
/*           Test DGEMV, 01, and DGBMV, 02. */
L140:
	    if (corder) {
		dchk1_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf,
			 alf, &nbet, bet, &ninc, inc, &c__65, &c__2, a, aa, 
			as, x, xx, xs, y, yy, ys, yt, g, &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		dchk1_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf,
			 alf, &nbet, bet, &ninc, inc, &c__65, &c__2, a, aa, 
			as, x, xx, xs, y, yy, ys, yt, g, &c__1, (ftnlen)12);
	    }
	    goto L200;
/*           Test DSYMV, 03, DSBMV, 04, and DSPMV, 05. */
L150:
	    if (corder) {
		dchk2_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf,
			 alf, &nbet, bet, &ninc, inc, &c__65, &c__2, a, aa, 
			as, x, xx, xs, y, yy, ys, yt, g, &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		dchk2_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf,
			 alf, &nbet, bet, &ninc, inc, &c__65, &c__2, a, aa, 
			as, x, xx, xs, y, yy, ys, yt, g, &c__1, (ftnlen)12);
	    }
	    goto L200;
/*           Test DTRMV, 06, DTBMV, 07, DTPMV, 08, */
/*           DTRSV, 09, DTBSV, 10, and DTPSV, 11. */
L160:
	    if (corder) {
		dchk3_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &ninc,
			 inc, &c__65, &c__2, a, aa, as, y, yy, ys, yt, g, z__,
			 &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		dchk3_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nkb, kb, &ninc,
			 inc, &c__65, &c__2, a, aa, as, y, yy, ys, yt, g, z__,
			 &c__1, (ftnlen)12);
	    }
	    goto L200;
/*           Test DGER, 12. */
L170:
	    if (corder) {
		dchk4_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		dchk4_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__1, (ftnlen)12);
	    }
	    goto L200;
/*           Test DSYR, 13, and DSPR, 14. */
L180:
	    if (corder) {
		dchk5_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		dchk5_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__1, (ftnlen)12);
	    }
	    goto L200;
/*           Test DSYR2, 15, and DSPR2, 16. */
L190:
	    if (corder) {
		dchk6_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
			 &trace, &rewi, &fatal, &nidim, idim, &nalf, alf, &
			ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy,
			 ys, yt, g, z__, &c__0, (ftnlen)12);
	    }
	    if (rorder) {
		dchk6_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra,
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


/*     End of DBLAT2. */

    return 0;
} /* MAIN__ */

/* Subroutine */ int dchk1_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nkb, integer *kb, 
	integer *nalf, doublereal *alf, integer *nbet, doublereal *bet, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *y, doublereal *yy, 
	doublereal *ys, doublereal *yt, doublereal *g, integer *iorder, 
	ftnlen sname_len)
{
    /* Initialized data */

    static char ich[3] = "NTC";

    /* Format strings */
    static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "2(i3,\002,\002),f4.1,\002, A,\002,i3,\002, X,\002,i2,\002,\002,f"
	    "4.1,\002, Y,\002,i2,\002)         .\002)";
    static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "4(i3,\002,\002),f4.1,\002, A,\002,i3,\002,\002,/10x,\002X,\002,i"
	    "2,\002,\002,f4.1,\002, Y,\002,i2,\002) .\002)";
    static char fmt_9993[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
	    "N VALID CALL *\002,\002******\002)";
    static char fmt_9998[] = "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
	    " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
    static char fmt_10000[] = "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10001[] = "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10002[] = "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
	    "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_10003[] = "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
	    "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7, i__8;
    alist al__1;

    /* Builtin functions */
    /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
    integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
	     f_rew(alist *);

    /* Local variables */
    integer i__, m, n, ia, ib, ic, nc, nd, im, in, kl, ml, nk, nl, ku, ix, iy,
	     ms, lx, ly, ns, laa, lda;
    extern logical lde_(doublereal *, doublereal *, integer *);
    doublereal als, bls, err;
    integer iku, kls, kus;
    doublereal beta;
    integer ldas;
    logical same;
    integer incx, incy;
    logical full, tran, null;
    extern /* Subroutine */ int dmake_(char *, char *, char *, integer *, 
	    integer *, doublereal *, integer *, doublereal *, integer *, 
	    integer *, integer *, logical *, doublereal *, ftnlen, ftnlen, 
	    ftnlen);
    doublereal alpha;
    logical isame[13];
    extern /* Subroutine */ int dmvch_(char *, integer *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, doublereal *,
	     doublereal *, doublereal *, doublereal *, logical *, integer *, 
	    logical *, ftnlen);
    integer nargs;
    logical reset;
    integer incxs, incys;
    char trans[1];
    logical banded;
    extern /* Subroutine */ void cdgbmv_(integer *, char *, integer *, integer 
	    *, integer *, integer *, doublereal *, doublereal *, integer *, 
	    doublereal *, integer *, doublereal *, doublereal *, integer *),
	    cdgemv_(integer *, char *, integer *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, doublereal *, integer *);
    extern logical lderes_(char *, char *, integer *, integer *, doublereal *,
	     doublereal *, integer *, ftnlen, ftnlen);
    char ctrans[14];
    doublereal errmax, transl;
    char transs[1];

    /* Fortran I/O blocks */
    static cilist io___144 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___145 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___146 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___149 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___151 = { 0, 0, 0, fmt_10000, 0 };
    static cilist io___152 = { 0, 0, 0, fmt_10001, 0 };
    static cilist io___153 = { 0, 0, 0, fmt_10002, 0 };
    static cilist io___154 = { 0, 0, 0, fmt_10003, 0 };
    static cilist io___155 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___156 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___157 = { 0, 0, 0, fmt_9995, 0 };



/*  Tests DGEMV and DGBMV. */

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
    errmax = 0.;

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

		transl = 0.;
		dmake_(sname + 7, " ", " ", &m, &n, &a[a_offset], nmax, &aa[1]
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

			transl = .5;
			i__4 = abs(incx);
			i__5 = nl - 1;
			dmake_("ge", " ", " ", &c__1, &nl, &x[1], &c__1, &xx[
				1], &i__4, &c__0, &i__5, &reset, &transl, (
				ftnlen)2, (ftnlen)1, (ftnlen)1);
			if (nl > 1) {
			    x[nl / 2] = 0.;
			    xx[abs(incx) * (nl / 2 - 1) + 1] = 0.;
			}

			i__4 = *ninc;
			for (iy = 1; iy <= i__4; ++iy) {
			    incy = inc[iy];
			    ly = abs(incy) * ml;

			    i__5 = *nalf;
			    for (ia = 1; ia <= i__5; ++ia) {
				alpha = alf[ia];

				i__6 = *nbet;
				for (ib = 1; ib <= i__6; ++ib) {
				    beta = bet[ib];

/*                             Generate the vector Y. */

				    transl = 0.;
				    i__7 = abs(incy);
				    i__8 = ml - 1;
				    dmake_("ge", " ", " ", &c__1, &ml, &y[1], 
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
				    als = alpha;
				    i__7 = laa;
				    for (i__ = 1; i__ <= i__7; ++i__) {
					as[i__] = aa[i__];
/* L10: */
				    }
				    ldas = lda;
				    i__7 = lx;
				    for (i__ = 1; i__ <= i__7; ++i__) {
					xs[i__] = xx[i__];
/* L20: */
				    }
				    incxs = incx;
				    bls = beta;
				    i__7 = ly;
				    for (i__ = 1; i__ <= i__7; ++i__) {
					ys[i__] = yy[i__];
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
					    do_fio(&c__1, (char *)&alpha, (
						    ftnlen)sizeof(doublereal))
						    ;
					    do_fio(&c__1, (char *)&lda, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__1, (char *)&incx, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__1, (char *)&beta, (
						    ftnlen)sizeof(doublereal))
						    ;
					    do_fio(&c__1, (char *)&incy, (
						    ftnlen)sizeof(integer));
					    e_wsfe();
					}
					if (*rewi) {
					    al__1.aerr = 0;
					    al__1.aunit = *ntra;
					    f_rew(&al__1);
					}
					cdgemv_(iorder, trans, &m, &n, &alpha,
						 &aa[1], &lda, &xx[1], &incx, 
						&beta, &yy[1], &incy);
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
					    do_fio(&c__1, (char *)&alpha, (
						    ftnlen)sizeof(doublereal))
						    ;
					    do_fio(&c__1, (char *)&lda, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__1, (char *)&incx, (
						    ftnlen)sizeof(integer));
					    do_fio(&c__1, (char *)&beta, (
						    ftnlen)sizeof(doublereal))
						    ;
					    do_fio(&c__1, (char *)&incy, (
						    ftnlen)sizeof(integer));
					    e_wsfe();
					}
					if (*rewi) {
					    al__1.aerr = 0;
					    al__1.aunit = *ntra;
					    f_rew(&al__1);
					}
					cdgbmv_(iorder, trans, &m, &n, &kl, &
						ku, &alpha, &aa[1], &lda, &xx[
						1], &incx, &beta, &yy[1], &
						incy);
				    }

/*                             Check if error-exit was taken incorrectly. */

				    if (! infoc_1.ok) {
					io___146.ciunit = *nout;
					s_wsfe(&io___146);
					e_wsfe();
					*fatal = TRUE_;
					goto L130;
				    }

/*                             See what data changed inside subroutines. */

				    isame[0] = *(unsigned char *)trans == *(
					    unsigned char *)transs;
				    isame[1] = ms == m;
				    isame[2] = ns == n;
				    if (full) {
					isame[3] = als == alpha;
					isame[4] = lde_(&as[1], &aa[1], &laa);
					isame[5] = ldas == lda;
					isame[6] = lde_(&xs[1], &xx[1], &lx);
					isame[7] = incxs == incx;
					isame[8] = bls == beta;
					if (null) {
					    isame[9] = lde_(&ys[1], &yy[1], &
						    ly);
					} else {
					    i__7 = abs(incy);
					    isame[9] = lderes_("ge", " ", &
						    c__1, &ml, &ys[1], &yy[1],
						     &i__7, (ftnlen)2, (
						    ftnlen)1);
					}
					isame[10] = incys == incy;
				    } else if (banded) {
					isame[3] = kls == kl;
					isame[4] = kus == ku;
					isame[5] = als == alpha;
					isame[6] = lde_(&as[1], &aa[1], &laa);
					isame[7] = ldas == lda;
					isame[8] = lde_(&xs[1], &xx[1], &lx);
					isame[9] = incxs == incx;
					isame[10] = bls == beta;
					if (null) {
					    isame[11] = lde_(&ys[1], &yy[1], &
						    ly);
					} else {
					    i__7 = abs(incy);
					    isame[11] = lderes_("ge", " ", &
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

					dmvch_(trans, &m, &n, &alpha, &a[
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
	if (*iorder == 0) {
	    io___151.ciunit = *nout;
	    s_wsfe(&io___151);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___152.ciunit = *nout;
	    s_wsfe(&io___152);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    } else {
	if (*iorder == 0) {
	    io___153.ciunit = *nout;
	    s_wsfe(&io___153);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___154.ciunit = *nout;
	    s_wsfe(&io___154);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
    }
    goto L140;

L130:
    io___155.ciunit = *nout;
    s_wsfe(&io___155);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    if (full) {
	io___156.ciunit = *nout;
	s_wsfe(&io___156);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, ctrans, (ftnlen)14);
	do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&beta, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (banded) {
	io___157.ciunit = *nout;
	s_wsfe(&io___157);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, ctrans, (ftnlen)14);
	do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&kl, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&ku, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&beta, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    }

L140:
    return 0;

/* L9997: */

/*     End of DCHK1. */

} /* dchk1_ */

/* Subroutine */ int dchk2_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nkb, integer *kb, 
	integer *nalf, doublereal *alf, integer *nbet, doublereal *bet, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *y, doublereal *yy, 
	doublereal *ys, doublereal *yt, doublereal *g, integer *iorder, 
	ftnlen sname_len)
{
    /* Initialized data */

    static char ich[2] = "UL";

    /* Format strings */
    static char fmt_9993[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "i3,\002,\002,f4.1,\002, A,\002,i3,\002, X,\002,i2,\002,\002,f4.1,"
	    "\002, Y,\002,i2,\002) .\002)";
    static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "2(i3,\002,\002),f4.1,\002, A,\002,i3,\002, X,\002,i2,\002,\002,f"
	    "4.1,\002, Y,\002,i2,\002) .\002)";
    static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "i3,\002,\002,f4.1,\002, AP\002,\002, X,\002,i2,\002,\002,f4.1"
	    ",\002, Y,\002,i2,\002) .\002)";
    static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
	    "N VALID CALL *\002,\002******\002)";
    static char fmt_9998[] = "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
	    " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
    static char fmt_10000[] = "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10001[] = "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10002[] = "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
	    "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_10003[] = "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
	    "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7, i__8;
    alist al__1;

    /* Builtin functions */
    /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
    integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
	     f_rew(alist *);

    /* Local variables */
    integer i__, k, n, ia, ib, ic, nc, ik, in, nk, ks, ix, iy, ns, lx, ly, 
	    laa, lda;
    extern logical lde_(doublereal *, doublereal *, integer *);
    doublereal als, bls, err, beta;
    integer ldas;
    logical same;
    integer incx, incy;
    logical full, null;
    char uplo[1];
    extern /* Subroutine */ int dmake_(char *, char *, char *, integer *, 
	    integer *, doublereal *, integer *, doublereal *, integer *, 
	    integer *, integer *, logical *, doublereal *, ftnlen, ftnlen, 
	    ftnlen);
    doublereal alpha;
    logical isame[13];
    extern /* Subroutine */ int dmvch_(char *, integer *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, doublereal *,
	     doublereal *, doublereal *, doublereal *, logical *, integer *, 
	    logical *, ftnlen);
    integer nargs;
    logical reset;
    char cuplo[14];
    integer incxs, incys;
    char uplos[1];
    logical banded, packed;
    extern logical lderes_(char *, char *, integer *, integer *, doublereal *,
	     doublereal *, integer *, ftnlen, ftnlen);
    extern /* Subroutine */ void cdsbmv_(integer *, char *, integer *, integer 
	    *, doublereal *, doublereal *, integer *, doublereal *, integer *,
	     doublereal *, doublereal *, integer *), cdspmv_(integer *
	    , char *, integer *, doublereal *, doublereal *, doublereal *, 
	    integer *, doublereal *, doublereal *, integer *);
    doublereal errmax, transl;
    extern /* Subroutine */ void cdsymv_(integer *, char *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, doublereal *, integer *);

    /* Fortran I/O blocks */
    static cilist io___197 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___198 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___199 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___200 = { 0, 0, 0, fmt_9992, 0 };
    static cilist io___203 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___205 = { 0, 0, 0, fmt_10000, 0 };
    static cilist io___206 = { 0, 0, 0, fmt_10001, 0 };
    static cilist io___207 = { 0, 0, 0, fmt_10002, 0 };
    static cilist io___208 = { 0, 0, 0, fmt_10003, 0 };
    static cilist io___209 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___210 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___211 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___212 = { 0, 0, 0, fmt_9995, 0 };



/*  Tests DSYMV, DSBMV and DSPMV. */

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
    full = *(unsigned char *)&sname[8] == 'y';
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
    errmax = 0.;

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

		transl = 0.;
		dmake_(sname + 7, uplo, " ", &n, &n, &a[a_offset], nmax, &aa[
			1], &lda, &k, &k, &reset, &transl, (ftnlen)2, (ftnlen)
			1, (ftnlen)1);

		i__3 = *ninc;
		for (ix = 1; ix <= i__3; ++ix) {
		    incx = inc[ix];
		    lx = abs(incx) * n;

/*                 Generate the vector X. */

		    transl = .5;
		    i__4 = abs(incx);
		    i__5 = n - 1;
		    dmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &xx[1], &
			    i__4, &c__0, &i__5, &reset, &transl, (ftnlen)2, (
			    ftnlen)1, (ftnlen)1);
		    if (n > 1) {
			x[n / 2] = 0.;
			xx[abs(incx) * (n / 2 - 1) + 1] = 0.;
		    }

		    i__4 = *ninc;
		    for (iy = 1; iy <= i__4; ++iy) {
			incy = inc[iy];
			ly = abs(incy) * n;

			i__5 = *nalf;
			for (ia = 1; ia <= i__5; ++ia) {
			    alpha = alf[ia];

			    i__6 = *nbet;
			    for (ib = 1; ib <= i__6; ++ib) {
				beta = bet[ib];

/*                          Generate the vector Y. */

				transl = 0.;
				i__7 = abs(incy);
				i__8 = n - 1;
				dmake_("ge", " ", " ", &c__1, &n, &y[1], &
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
				als = alpha;
				i__7 = laa;
				for (i__ = 1; i__ <= i__7; ++i__) {
				    as[i__] = aa[i__];
/* L10: */
				}
				ldas = lda;
				i__7 = lx;
				for (i__ = 1; i__ <= i__7; ++i__) {
				    xs[i__] = xx[i__];
/* L20: */
				}
				incxs = incx;
				bls = beta;
				i__7 = ly;
				for (i__ = 1; i__ <= i__7; ++i__) {
				    ys[i__] = yy[i__];
/* L30: */
				}
				incys = incy;

/*                          Call the subroutine. */

				if (full) {
				    if (*trace) {
					io___197.ciunit = *ntra;
					s_wsfe(&io___197);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&alpha, (ftnlen)
						sizeof(doublereal));
					do_fio(&c__1, (char *)&lda, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&beta, (ftnlen)
						sizeof(doublereal));
					do_fio(&c__1, (char *)&incy, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cdsymv_(iorder, uplo, &n, &alpha, &aa[1], 
					    &lda, &xx[1], &incx, &beta, &yy[1]
					    , &incy);
				} else if (banded) {
				    if (*trace) {
					io___198.ciunit = *ntra;
					s_wsfe(&io___198);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&k, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&alpha, (ftnlen)
						sizeof(doublereal));
					do_fio(&c__1, (char *)&lda, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&beta, (ftnlen)
						sizeof(doublereal));
					do_fio(&c__1, (char *)&incy, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cdsbmv_(iorder, uplo, &n, &k, &alpha, &aa[
					    1], &lda, &xx[1], &incx, &beta, &
					    yy[1], &incy);
				} else if (packed) {
				    if (*trace) {
					io___199.ciunit = *ntra;
					s_wsfe(&io___199);
					do_fio(&c__1, (char *)&nc, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, sname, (ftnlen)12);
					do_fio(&c__1, cuplo, (ftnlen)14);
					do_fio(&c__1, (char *)&n, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&alpha, (ftnlen)
						sizeof(doublereal));
					do_fio(&c__1, (char *)&incx, (ftnlen)
						sizeof(integer));
					do_fio(&c__1, (char *)&beta, (ftnlen)
						sizeof(doublereal));
					do_fio(&c__1, (char *)&incy, (ftnlen)
						sizeof(integer));
					e_wsfe();
				    }
				    if (*rewi) {
					al__1.aerr = 0;
					al__1.aunit = *ntra;
					f_rew(&al__1);
				    }
				    cdspmv_(iorder, uplo, &n, &alpha, &aa[1], 
					    &xx[1], &incx, &beta, &yy[1], &
					    incy);
				}

/*                          Check if error-exit was taken incorrectly. */

				if (! infoc_1.ok) {
				    io___200.ciunit = *nout;
				    s_wsfe(&io___200);
				    e_wsfe();
				    *fatal = TRUE_;
				    goto L120;
				}

/*                          See what data changed inside subroutines. */

				isame[0] = *(unsigned char *)uplo == *(
					unsigned char *)uplos;
				isame[1] = ns == n;
				if (full) {
				    isame[2] = als == alpha;
				    isame[3] = lde_(&as[1], &aa[1], &laa);
				    isame[4] = ldas == lda;
				    isame[5] = lde_(&xs[1], &xx[1], &lx);
				    isame[6] = incxs == incx;
				    isame[7] = bls == beta;
				    if (null) {
					isame[8] = lde_(&ys[1], &yy[1], &ly);
				    } else {
					i__7 = abs(incy);
					isame[8] = lderes_("ge", " ", &c__1, &
						n, &ys[1], &yy[1], &i__7, (
						ftnlen)2, (ftnlen)1);
				    }
				    isame[9] = incys == incy;
				} else if (banded) {
				    isame[2] = ks == k;
				    isame[3] = als == alpha;
				    isame[4] = lde_(&as[1], &aa[1], &laa);
				    isame[5] = ldas == lda;
				    isame[6] = lde_(&xs[1], &xx[1], &lx);
				    isame[7] = incxs == incx;
				    isame[8] = bls == beta;
				    if (null) {
					isame[9] = lde_(&ys[1], &yy[1], &ly);
				    } else {
					i__7 = abs(incy);
					isame[9] = lderes_("ge", " ", &c__1, &
						n, &ys[1], &yy[1], &i__7, (
						ftnlen)2, (ftnlen)1);
				    }
				    isame[10] = incys == incy;
				} else if (packed) {
				    isame[2] = als == alpha;
				    isame[3] = lde_(&as[1], &aa[1], &laa);
				    isame[4] = lde_(&xs[1], &xx[1], &lx);
				    isame[5] = incxs == incx;
				    isame[6] = bls == beta;
				    if (null) {
					isame[7] = lde_(&ys[1], &yy[1], &ly);
				    } else {
					i__7 = abs(incy);
					isame[7] = lderes_("ge", " ", &c__1, &
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
					io___203.ciunit = *nout;
					s_wsfe(&io___203);
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

				    dmvch_("N", &n, &n, &alpha, &a[a_offset], 
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
	if (*iorder == 0) {
	    io___205.ciunit = *nout;
	    s_wsfe(&io___205);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___206.ciunit = *nout;
	    s_wsfe(&io___206);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    } else {
	if (*iorder == 0) {
	    io___207.ciunit = *nout;
	    s_wsfe(&io___207);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___208.ciunit = *nout;
	    s_wsfe(&io___208);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
    }
    goto L130;

L120:
    io___209.ciunit = *nout;
    s_wsfe(&io___209);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    if (full) {
	io___210.ciunit = *nout;
	s_wsfe(&io___210);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&beta, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (banded) {
	io___211.ciunit = *nout;
	s_wsfe(&io___211);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&beta, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (packed) {
	io___212.ciunit = *nout;
	s_wsfe(&io___212);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&beta, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    }

L130:
    return 0;

/* L9997: */

/*     End of DCHK2. */

} /* dchk2_ */

/* Subroutine */ int dchk3_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nkb, integer *kb, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *xt, doublereal *g, 
	doublereal *z__, integer *iorder, ftnlen sname_len)
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
    static char fmt_10000[] = "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10001[] = "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10002[] = "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
	    "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_10003[] = "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
	    "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5;
    alist al__1;

    /* Builtin functions */
    /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
    integer s_cmp(char *, char *, ftnlen, ftnlen), s_wsfe(cilist *), do_fio(
	    integer *, char *, ftnlen), e_wsfe(void), f_rew(alist *);

    /* Local variables */
    integer i__, k, n, nc, ik, in, nk, ks, ix, ns, lx, laa, icd, lda;
    extern logical lde_(doublereal *, doublereal *, integer *);
    integer ict, icu;
    doublereal err;
    char diag[1];
    integer ldas;
    logical same;
    integer incx;
    logical full, null;
    char uplo[1], cdiag[14];
    extern /* Subroutine */ int dmake_(char *, char *, char *, integer *, 
	    integer *, doublereal *, integer *, doublereal *, integer *, 
	    integer *, integer *, logical *, doublereal *, ftnlen, ftnlen, 
	    ftnlen);
    char diags[1];
    logical isame[13];
    extern /* Subroutine */ int dmvch_(char *, integer *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, doublereal *,
	     doublereal *, doublereal *, doublereal *, logical *, integer *, 
	    logical *, ftnlen);
    integer nargs;
    logical reset;
    char cuplo[14];
    integer incxs;
    char trans[1], uplos[1];
    logical banded, packed;
    extern logical lderes_(char *, char *, integer *, integer *, doublereal *,
	     doublereal *, integer *, ftnlen, ftnlen);
    extern /* Subroutine */ void cdtbmv_(integer *, char *, char *, char *, 
	    integer *, integer *, doublereal *, integer *, doublereal *, 
	    integer *), cdtbsv_(integer *, char *, 
	    char *, char *, integer *, integer *, doublereal *, integer *, 
	    doublereal *, integer *);
    char ctrans[14];
    doublereal errmax;
    extern /* Subroutine */ void cdtpmv_(integer *, char *, char *, char *, 
	    integer *, doublereal *, doublereal *, integer *),
	    cdtrmv_(integer *, char *, char *, char *, integer *, 
	    doublereal *, integer *, doublereal *, integer *);
    doublereal transl;
    extern /* Subroutine */ void cdtpsv_(integer *, char *, char *, char *, 
	    integer *, doublereal *, doublereal *, integer *),
	    cdtrsv_(integer *, char *, char *, char *, integer *, 
	    doublereal *, integer *, doublereal *, integer *);
    char transs[1];

    /* Fortran I/O blocks */
    static cilist io___252 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___253 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___254 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___255 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___256 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___257 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___258 = { 0, 0, 0, fmt_9992, 0 };
    static cilist io___261 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___263 = { 0, 0, 0, fmt_10000, 0 };
    static cilist io___264 = { 0, 0, 0, fmt_10001, 0 };
    static cilist io___265 = { 0, 0, 0, fmt_10002, 0 };
    static cilist io___266 = { 0, 0, 0, fmt_10003, 0 };
    static cilist io___267 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___268 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___269 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___270 = { 0, 0, 0, fmt_9995, 0 };



/*  Tests DTRMV, DTBMV, DTPMV, DTRSV, DTBSV and DTPSV. */

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
    errmax = 0.;
/*     Set up zero vector for DMVCH. */
    i__1 = *nmax;
    for (i__ = 1; i__ <= i__1; ++i__) {
	z__[i__] = 0.;
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

			transl = 0.;
			dmake_(sname + 7, uplo, diag, &n, &n, &a[a_offset], 
				nmax, &aa[1], &lda, &k, &k, &reset, &transl, (
				ftnlen)2, (ftnlen)1, (ftnlen)1);

			i__3 = *ninc;
			for (ix = 1; ix <= i__3; ++ix) {
			    incx = inc[ix];
			    lx = abs(incx) * n;

/*                       Generate the vector X. */

			    transl = .5;
			    i__4 = abs(incx);
			    i__5 = n - 1;
			    dmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &
				    xx[1], &i__4, &c__0, &i__5, &reset, &
				    transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);
			    if (n > 1) {
				x[n / 2] = 0.;
				xx[abs(incx) * (n / 2 - 1) + 1] = 0.;
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
				as[i__] = aa[i__];
/* L20: */
			    }
			    ldas = lda;
			    i__4 = lx;
			    for (i__ = 1; i__ <= i__4; ++i__) {
				xs[i__] = xx[i__];
/* L30: */
			    }
			    incxs = incx;

/*                       Call the subroutine. */

			    if (s_cmp(sname + 9, "mv", (ftnlen)2, (ftnlen)2) 
				    == 0) {
				if (full) {
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
				    cdtrmv_(iorder, uplo, trans, diag, &n, &
					    aa[1], &lda, &xx[1], &incx);
				} else if (banded) {
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
				    cdtbmv_(iorder, uplo, trans, diag, &n, &k,
					     &aa[1], &lda, &xx[1], &incx);
				} else if (packed) {
				    if (*trace) {
					io___254.ciunit = *ntra;
					s_wsfe(&io___254);
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
				    cdtpmv_(iorder, uplo, trans, diag, &n, &
					    aa[1], &xx[1], &incx);
				}
			    } else if (s_cmp(sname + 9, "sv", (ftnlen)2, (
				    ftnlen)2) == 0) {
				if (full) {
				    if (*trace) {
					io___255.ciunit = *ntra;
					s_wsfe(&io___255);
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
				    cdtrsv_(iorder, uplo, trans, diag, &n, &
					    aa[1], &lda, &xx[1], &incx);
				} else if (banded) {
				    if (*trace) {
					io___256.ciunit = *ntra;
					s_wsfe(&io___256);
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
				    cdtbsv_(iorder, uplo, trans, diag, &n, &k,
					     &aa[1], &lda, &xx[1], &incx);
				} else if (packed) {
				    if (*trace) {
					io___257.ciunit = *ntra;
					s_wsfe(&io___257);
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
				    cdtpsv_(iorder, uplo, trans, diag, &n, &
					    aa[1], &xx[1], &incx);
				}
			    }

/*                       Check if error-exit was taken incorrectly. */

			    if (! infoc_1.ok) {
				io___258.ciunit = *nout;
				s_wsfe(&io___258);
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
				isame[4] = lde_(&as[1], &aa[1], &laa);
				isame[5] = ldas == lda;
				if (null) {
				    isame[6] = lde_(&xs[1], &xx[1], &lx);
				} else {
				    i__4 = abs(incx);
				    isame[6] = lderes_("ge", " ", &c__1, &n, &
					    xs[1], &xx[1], &i__4, (ftnlen)2, (
					    ftnlen)1);
				}
				isame[7] = incxs == incx;
			    } else if (banded) {
				isame[4] = ks == k;
				isame[5] = lde_(&as[1], &aa[1], &laa);
				isame[6] = ldas == lda;
				if (null) {
				    isame[7] = lde_(&xs[1], &xx[1], &lx);
				} else {
				    i__4 = abs(incx);
				    isame[7] = lderes_("ge", " ", &c__1, &n, &
					    xs[1], &xx[1], &i__4, (ftnlen)2, (
					    ftnlen)1);
				}
				isame[8] = incxs == incx;
			    } else if (packed) {
				isame[4] = lde_(&as[1], &aa[1], &laa);
				if (null) {
				    isame[5] = lde_(&xs[1], &xx[1], &lx);
				} else {
				    i__4 = abs(incx);
				    isame[5] = lderes_("ge", " ", &c__1, &n, &
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
				    io___261.ciunit = *nout;
				    s_wsfe(&io___261);
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

				    dmvch_(trans, &n, &n, &c_b123, &a[
					    a_offset], nmax, &x[1], &incx, &
					    c_b135, &z__[1], &incx, &xt[1], &
					    g[1], &xx[1], eps, &err, fatal, 
					    nout, &c_true, (ftnlen)1);
				} else if (s_cmp(sname + 9, "sv", (ftnlen)2, (
					ftnlen)2) == 0) {

/*                             Compute approximation to original vector. */

				    i__4 = n;
				    for (i__ = 1; i__ <= i__4; ++i__) {
					z__[i__] = xx[(i__ - 1) * abs(incx) + 
						1];
					xx[(i__ - 1) * abs(incx) + 1] = x[i__]
						;
/* L50: */
				    }
				    dmvch_(trans, &n, &n, &c_b123, &a[
					    a_offset], nmax, &z__[1], &incx, &
					    c_b135, &x[1], &incx, &xt[1], &g[
					    1], &xx[1], eps, &err, fatal, 
					    nout, &c_false, (ftnlen)1);
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
	if (*iorder == 0) {
	    io___263.ciunit = *nout;
	    s_wsfe(&io___263);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___264.ciunit = *nout;
	    s_wsfe(&io___264);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    } else {
	if (*iorder == 0) {
	    io___265.ciunit = *nout;
	    s_wsfe(&io___265);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___266.ciunit = *nout;
	    s_wsfe(&io___266);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
    }
    goto L130;

L120:
    io___267.ciunit = *nout;
    s_wsfe(&io___267);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    if (full) {
	io___268.ciunit = *nout;
	s_wsfe(&io___268);
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
	io___269.ciunit = *nout;
	s_wsfe(&io___269);
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
	io___270.ciunit = *nout;
	s_wsfe(&io___270);
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

/* L9997: */

/*     End of DCHK3. */

} /* dchk3_ */

/* Subroutine */ int dchk4_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublereal *alf, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *y, doublereal *yy, 
	doublereal *ys, doublereal *yt, doublereal *g, doublereal *z__, 
	integer *iorder, ftnlen sname_len)
{
    /* Format strings */
    static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,2(i3,\002,\002"
	    "),f4.1,\002, X,\002,i2,\002, Y,\002,i2,\002, A,\002,i3,\002)    "
	    "              .\002)";
    static char fmt_9993[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
	    "N VALID CALL *\002,\002******\002)";
    static char fmt_9998[] = "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
	    " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
    static char fmt_10000[] = "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10001[] = "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10002[] = "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
	    "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_10003[] = "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
	    "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
	    " \002,i3)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
    alist al__1;

    /* Builtin functions */
    integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
	     f_rew(alist *);

    /* Local variables */
    integer i__, j, m, n;
    doublereal w[1];
    integer ia, nc, nd, im, in, ms, ix, iy, ns, lx, ly, laa, lda;
    extern logical lde_(doublereal *, doublereal *, integer *);
    doublereal als, err;
    integer ldas;
    logical same;
    integer incx, incy;
    logical null;
    extern /* Subroutine */ int dmake_(char *, char *, char *, integer *, 
	    integer *, doublereal *, integer *, doublereal *, integer *, 
	    integer *, integer *, logical *, doublereal *, ftnlen, ftnlen, 
	    ftnlen);
    void cdger_(integer *, integer *, integer *, doublereal *, 
	    doublereal *, integer *, doublereal *, integer *, doublereal *, 
	    integer *);
    doublereal alpha;
    logical isame[13];
    extern /* Subroutine */ int dmvch_(char *, integer *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, doublereal *,
	     doublereal *, doublereal *, doublereal *, logical *, integer *, 
	    logical *, ftnlen);
    integer nargs;
    logical reset;
    integer incxs, incys;
    extern logical lderes_(char *, char *, integer *, integer *, doublereal *,
	     doublereal *, integer *, ftnlen, ftnlen);
    doublereal errmax, transl;

    /* Fortran I/O blocks */
    static cilist io___299 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___300 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___303 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___307 = { 0, 0, 0, fmt_10000, 0 };
    static cilist io___308 = { 0, 0, 0, fmt_10001, 0 };
    static cilist io___309 = { 0, 0, 0, fmt_10002, 0 };
    static cilist io___310 = { 0, 0, 0, fmt_10003, 0 };
    static cilist io___311 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___312 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___313 = { 0, 0, 0, fmt_9994, 0 };



/*  Tests DGER. */

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
/*     Define the number of arguments. */
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
    nargs = 9;

    nc = 0;
    reset = TRUE_;
    errmax = 0.;

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

		transl = .5;
		i__3 = abs(incx);
		i__4 = m - 1;
		dmake_("ge", " ", " ", &c__1, &m, &x[1], &c__1, &xx[1], &i__3,
			 &c__0, &i__4, &reset, &transl, (ftnlen)2, (ftnlen)1, 
			(ftnlen)1);
		if (m > 1) {
		    x[m / 2] = 0.;
		    xx[abs(incx) * (m / 2 - 1) + 1] = 0.;
		}

		i__3 = *ninc;
		for (iy = 1; iy <= i__3; ++iy) {
		    incy = inc[iy];
		    ly = abs(incy) * n;

/*                 Generate the vector Y. */

		    transl = 0.;
		    i__4 = abs(incy);
		    i__5 = n - 1;
		    dmake_("ge", " ", " ", &c__1, &n, &y[1], &c__1, &yy[1], &
			    i__4, &c__0, &i__5, &reset, &transl, (ftnlen)2, (
			    ftnlen)1, (ftnlen)1);
		    if (n > 1) {
			y[n / 2] = 0.;
			yy[abs(incy) * (n / 2 - 1) + 1] = 0.;
		    }

		    i__4 = *nalf;
		    for (ia = 1; ia <= i__4; ++ia) {
			alpha = alf[ia];

/*                    Generate the matrix A. */

			transl = 0.;
			i__5 = m - 1;
			i__6 = n - 1;
			dmake_(sname + 7, " ", " ", &m, &n, &a[a_offset], 
				nmax, &aa[1], &lda, &i__5, &i__6, &reset, &
				transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);

			++nc;

/*                    Save every datum before calling the subroutine. */

			ms = m;
			ns = n;
			als = alpha;
			i__5 = laa;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    as[i__] = aa[i__];
/* L10: */
			}
			ldas = lda;
			i__5 = lx;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    xs[i__] = xx[i__];
/* L20: */
			}
			incxs = incx;
			i__5 = ly;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    ys[i__] = yy[i__];
/* L30: */
			}
			incys = incy;

/*                    Call the subroutine. */

			if (*trace) {
			    io___299.ciunit = *ntra;
			    s_wsfe(&io___299);
			    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer)
				    );
			    do_fio(&c__1, sname, (ftnlen)12);
			    do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer))
				    ;
			    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer))
				    ;
			    do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(
				    doublereal));
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
			cdger_(iorder, &m, &n, &alpha, &xx[1], &incx, &yy[1], 
				&incy, &aa[1], &lda);

/*                    Check if error-exit was taken incorrectly. */

			if (! infoc_1.ok) {
			    io___300.ciunit = *nout;
			    s_wsfe(&io___300);
			    e_wsfe();
			    *fatal = TRUE_;
			    goto L140;
			}

/*                    See what data changed inside subroutine. */

			isame[0] = ms == m;
			isame[1] = ns == n;
			isame[2] = als == alpha;
			isame[3] = lde_(&xs[1], &xx[1], &lx);
			isame[4] = incxs == incx;
			isame[5] = lde_(&ys[1], &yy[1], &ly);
			isame[6] = incys == incy;
			if (null) {
			    isame[7] = lde_(&as[1], &aa[1], &laa);
			} else {
			    isame[7] = lderes_("ge", " ", &m, &n, &as[1], &aa[
				    1], &lda, (ftnlen)2, (ftnlen)1);
			}
			isame[8] = ldas == lda;

/*                    If data was incorrectly changed, report and return. */

			same = TRUE_;
			i__5 = nargs;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    same = same && isame[i__ - 1];
			    if (! isame[i__ - 1]) {
				io___303.ciunit = *nout;
				s_wsfe(&io___303);
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
				    z__[i__] = x[i__];
/* L50: */
				}
			    } else {
				i__5 = m;
				for (i__ = 1; i__ <= i__5; ++i__) {
				    z__[i__] = x[m - i__ + 1];
/* L60: */
				}
			    }
			    i__5 = n;
			    for (j = 1; j <= i__5; ++j) {
				if (incy > 0) {
				    w[0] = y[j];
				} else {
				    w[0] = y[n - j + 1];
				}
				dmvch_("N", &m, &c__1, &alpha, &z__[1], nmax, 
					w, &c__1, &c_b123, &a[j * a_dim1 + 1],
					 &c__1, &yt[1], &g[1], &aa[(j - 1) * 
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
	if (*iorder == 0) {
	    io___307.ciunit = *nout;
	    s_wsfe(&io___307);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___308.ciunit = *nout;
	    s_wsfe(&io___308);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    } else {
	if (*iorder == 0) {
	    io___309.ciunit = *nout;
	    s_wsfe(&io___309);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___310.ciunit = *nout;
	    s_wsfe(&io___310);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
    }
    goto L150;

L130:
    io___311.ciunit = *nout;
    s_wsfe(&io___311);
    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
    e_wsfe();

L140:
    io___312.ciunit = *nout;
    s_wsfe(&io___312);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    io___313.ciunit = *nout;
    s_wsfe(&io___313);
    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
    do_fio(&c__1, sname, (ftnlen)12);
    do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
    e_wsfe();

L150:
    return 0;

/* L9997: */

/*     End of DCHK4. */

} /* dchk4_ */

/* Subroutine */ int dchk5_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublereal *alf, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *y, doublereal *yy, 
	doublereal *ys, doublereal *yt, doublereal *g, doublereal *z__, 
	integer *iorder, ftnlen sname_len)
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
    static char fmt_10000[] = "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10001[] = "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10002[] = "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
	    "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_10003[] = "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
	    "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
	    " \002,i3)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5;
    alist al__1;

    /* Builtin functions */
    /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
    integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
	     f_rew(alist *);

    /* Local variables */
    integer i__, j, n;
    doublereal w[1];
    integer ia, ja, ic, nc, jj, lj, in, ix, ns, lx, laa, lda;
    extern logical lde_(doublereal *, doublereal *, integer *);
    doublereal als, err;
    integer ldas;
    logical same;
    integer incx;
    logical full, null;
    char uplo[1];
    extern /* Subroutine */ int dmake_(char *, char *, char *, integer *, 
	    integer *, doublereal *, integer *, doublereal *, integer *, 
	    integer *, integer *, logical *, doublereal *, ftnlen, ftnlen, 
	    ftnlen);
    doublereal alpha;
    logical isame[13];
    extern /* Subroutine */ int dmvch_(char *, integer *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, doublereal *,
	     doublereal *, doublereal *, doublereal *, logical *, integer *, 
	    logical *, ftnlen);
    integer nargs;
    extern /* Subroutine */ void cdspr_(integer *, char *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *);
    logical reset;
    char cuplo[14];
    integer incxs;
    extern /* Subroutine */ void cdsyr_(integer *, char *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *);
    logical upper;
    char uplos[1];
    logical packed;
    extern logical lderes_(char *, char *, integer *, integer *, doublereal *,
	     doublereal *, integer *, ftnlen, ftnlen);
    doublereal errmax, transl;

    /* Fortran I/O blocks */
    static cilist io___342 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___343 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___344 = { 0, 0, 0, fmt_9992, 0 };
    static cilist io___347 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___354 = { 0, 0, 0, fmt_10000, 0 };
    static cilist io___355 = { 0, 0, 0, fmt_10001, 0 };
    static cilist io___356 = { 0, 0, 0, fmt_10002, 0 };
    static cilist io___357 = { 0, 0, 0, fmt_10003, 0 };
    static cilist io___358 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___359 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___360 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___361 = { 0, 0, 0, fmt_9994, 0 };



/*  Tests DSYR and DSPR. */

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
    full = *(unsigned char *)&sname[8] == 'y';
    packed = *(unsigned char *)&sname[8] == 'p';
/*     Define the number of arguments. */
    if (full) {
	nargs = 7;
    } else if (packed) {
	nargs = 6;
    }

    nc = 0;
    reset = TRUE_;
    errmax = 0.;

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

		transl = .5;
		i__3 = abs(incx);
		i__4 = n - 1;
		dmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &xx[1], &i__3,
			 &c__0, &i__4, &reset, &transl, (ftnlen)2, (ftnlen)1, 
			(ftnlen)1);
		if (n > 1) {
		    x[n / 2] = 0.;
		    xx[abs(incx) * (n / 2 - 1) + 1] = 0.;
		}

		i__3 = *nalf;
		for (ia = 1; ia <= i__3; ++ia) {
		    alpha = alf[ia];
		    null = n <= 0 || alpha == 0.;

/*                 Generate the matrix A. */

		    transl = 0.;
		    i__4 = n - 1;
		    i__5 = n - 1;
		    dmake_(sname + 7, uplo, " ", &n, &n, &a[a_offset], nmax, &
			    aa[1], &lda, &i__4, &i__5, &reset, &transl, (
			    ftnlen)2, (ftnlen)1, (ftnlen)1);

		    ++nc;

/*                 Save every datum before calling the subroutine. */

		    *(unsigned char *)uplos = *(unsigned char *)uplo;
		    ns = n;
		    als = alpha;
		    i__4 = laa;
		    for (i__ = 1; i__ <= i__4; ++i__) {
			as[i__] = aa[i__];
/* L10: */
		    }
		    ldas = lda;
		    i__4 = lx;
		    for (i__ = 1; i__ <= i__4; ++i__) {
			xs[i__] = xx[i__];
/* L20: */
		    }
		    incxs = incx;

/*                 Call the subroutine. */

		    if (full) {
			if (*trace) {
			    io___342.ciunit = *ntra;
			    s_wsfe(&io___342);
			    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer)
				    );
			    do_fio(&c__1, sname, (ftnlen)12);
			    do_fio(&c__1, cuplo, (ftnlen)14);
			    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer))
				    ;
			    do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(
				    doublereal));
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
			cdsyr_(iorder, uplo, &n, &alpha, &xx[1], &incx, &aa[1]
				, &lda);
		    } else if (packed) {
			if (*trace) {
			    io___343.ciunit = *ntra;
			    s_wsfe(&io___343);
			    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer)
				    );
			    do_fio(&c__1, sname, (ftnlen)12);
			    do_fio(&c__1, cuplo, (ftnlen)14);
			    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer))
				    ;
			    do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(
				    doublereal));
			    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(
				    integer));
			    e_wsfe();
			}
			if (*rewi) {
			    al__1.aerr = 0;
			    al__1.aunit = *ntra;
			    f_rew(&al__1);
			}
			cdspr_(iorder, uplo, &n, &alpha, &xx[1], &incx, &aa[1]);
		    }

/*                 Check if error-exit was taken incorrectly. */

		    if (! infoc_1.ok) {
			io___344.ciunit = *nout;
			s_wsfe(&io___344);
			e_wsfe();
			*fatal = TRUE_;
			goto L120;
		    }

/*                 See what data changed inside subroutines. */

		    isame[0] = *(unsigned char *)uplo == *(unsigned char *)
			    uplos;
		    isame[1] = ns == n;
		    isame[2] = als == alpha;
		    isame[3] = lde_(&xs[1], &xx[1], &lx);
		    isame[4] = incxs == incx;
		    if (null) {
			isame[5] = lde_(&as[1], &aa[1], &laa);
		    } else {
			isame[5] = lderes_(sname + 7, uplo, &n, &n, &as[1], &
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
			    io___347.ciunit = *nout;
			    s_wsfe(&io___347);
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
				z__[i__] = x[i__];
/* L40: */
			    }
			} else {
			    i__4 = n;
			    for (i__ = 1; i__ <= i__4; ++i__) {
				z__[i__] = x[n - i__ + 1];
/* L50: */
			    }
			}
			ja = 1;
			i__4 = n;
			for (j = 1; j <= i__4; ++j) {
			    w[0] = z__[j];
			    if (upper) {
				jj = 1;
				lj = j;
			    } else {
				jj = j;
				lj = n - j + 1;
			    }
			    dmvch_("N", &lj, &c__1, &alpha, &z__[jj], &lj, w, 
				    &c__1, &c_b123, &a[jj + j * a_dim1], &
				    c__1, &yt[1], &g[1], &aa[ja], eps, &err, 
				    fatal, nout, &c_true, (ftnlen)1);
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
	if (*iorder == 0) {
	    io___354.ciunit = *nout;
	    s_wsfe(&io___354);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___355.ciunit = *nout;
	    s_wsfe(&io___355);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    } else {
	if (*iorder == 0) {
	    io___356.ciunit = *nout;
	    s_wsfe(&io___356);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___357.ciunit = *nout;
	    s_wsfe(&io___357);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
    }
    goto L130;

L110:
    io___358.ciunit = *nout;
    s_wsfe(&io___358);
    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
    e_wsfe();

L120:
    io___359.ciunit = *nout;
    s_wsfe(&io___359);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    if (full) {
	io___360.ciunit = *nout;
	s_wsfe(&io___360);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (packed) {
	io___361.ciunit = *nout;
	s_wsfe(&io___361);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	e_wsfe();
    }

L130:
    return 0;

/* L9997: */

/*     End of DCHK5. */

} /* dchk5_ */

/* Subroutine */ int dchk6_(char *sname, doublereal *eps, doublereal *thresh, 
	integer *nout, integer *ntra, logical *trace, logical *rewi, logical *
	fatal, integer *nidim, integer *idim, integer *nalf, doublereal *alf, 
	integer *ninc, integer *inc, integer *nmax, integer *incmax, 
	doublereal *a, doublereal *aa, doublereal *as, doublereal *x, 
	doublereal *xx, doublereal *xs, doublereal *y, doublereal *yy, 
	doublereal *ys, doublereal *yt, doublereal *g, doublereal *z__, 
	integer *iorder, ftnlen sname_len)
{
    /* Initialized data */

    static char ich[2] = "UL";

    /* Format strings */
    static char fmt_9993[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "i3,\002,\002,f4.1,\002, X,\002,i2,\002, Y,\002,i2,\002, A,\002,i"
	    "3,\002) .\002)";
    static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
	    "i3,\002,\002,f4.1,\002, X,\002,i2,\002, Y,\002,i2,\002, AP) ."
	    "\002)";
    static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
	    "N VALID CALL *\002,\002******\002)";
    static char fmt_9998[] = "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
	    " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
    static char fmt_10000[] = "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10001[] = "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
	    "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
    static char fmt_10002[] = "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
	    "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_10003[] = "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
	    "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
	    "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
	    "ECT *******\002)";
    static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
	    " \002,i3)";
    static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
	    "BER:\002)";

    /* System generated locals */
    integer a_dim1, a_offset, z_dim1, z_offset, i__1, i__2, i__3, i__4, i__5, 
	    i__6;
    alist al__1;

    /* Builtin functions */
    /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
    integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
	     f_rew(alist *);

    /* Local variables */
    integer i__, j, n;
    doublereal w[2];
    integer ia, ja, ic, nc, jj, lj, in, ix, iy, ns, lx, ly, laa, lda;
    extern logical lde_(doublereal *, doublereal *, integer *);
    doublereal als, err;
    integer ldas;
    logical same;
    integer incx, incy;
    logical full, null;
    char uplo[1];
    extern /* Subroutine */ int dmake_(char *, char *, char *, integer *, 
	    integer *, doublereal *, integer *, doublereal *, integer *, 
	    integer *, integer *, logical *, doublereal *, ftnlen, ftnlen, 
	    ftnlen);
    doublereal alpha;
    logical isame[13];
    extern /* Subroutine */ int dmvch_(char *, integer *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, doublereal *,
	     doublereal *, doublereal *, doublereal *, logical *, integer *, 
	    logical *, ftnlen);
    integer nargs;
    logical reset;
    char cuplo[14];
    integer incxs, incys;
    logical upper;
    char uplos[1];
    extern /* Subroutine */ void cdspr2_(integer *, char *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *), cdsyr2_(integer *, char *, integer *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    doublereal *, integer *);
    logical packed;
    extern logical lderes_(char *, char *, integer *, integer *, doublereal *,
	     doublereal *, integer *, ftnlen, ftnlen);
    doublereal errmax, transl;

    /* Fortran I/O blocks */
    static cilist io___394 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___395 = { 0, 0, 0, fmt_9994, 0 };
    static cilist io___396 = { 0, 0, 0, fmt_9992, 0 };
    static cilist io___399 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___406 = { 0, 0, 0, fmt_10000, 0 };
    static cilist io___407 = { 0, 0, 0, fmt_10001, 0 };
    static cilist io___408 = { 0, 0, 0, fmt_10002, 0 };
    static cilist io___409 = { 0, 0, 0, fmt_10003, 0 };
    static cilist io___410 = { 0, 0, 0, fmt_9995, 0 };
    static cilist io___411 = { 0, 0, 0, fmt_9996, 0 };
    static cilist io___412 = { 0, 0, 0, fmt_9993, 0 };
    static cilist io___413 = { 0, 0, 0, fmt_9994, 0 };



/*  Tests DSYR2 and DSPR2. */

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
    full = *(unsigned char *)&sname[8] == 'y';
    packed = *(unsigned char *)&sname[8] == 'p';
/*     Define the number of arguments. */
    if (full) {
	nargs = 9;
    } else if (packed) {
	nargs = 8;
    }

    nc = 0;
    reset = TRUE_;
    errmax = 0.;

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

		transl = .5;
		i__3 = abs(incx);
		i__4 = n - 1;
		dmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &xx[1], &i__3,
			 &c__0, &i__4, &reset, &transl, (ftnlen)2, (ftnlen)1, 
			(ftnlen)1);
		if (n > 1) {
		    x[n / 2] = 0.;
		    xx[abs(incx) * (n / 2 - 1) + 1] = 0.;
		}

		i__3 = *ninc;
		for (iy = 1; iy <= i__3; ++iy) {
		    incy = inc[iy];
		    ly = abs(incy) * n;

/*                 Generate the vector Y. */

		    transl = 0.;
		    i__4 = abs(incy);
		    i__5 = n - 1;
		    dmake_("ge", " ", " ", &c__1, &n, &y[1], &c__1, &yy[1], &
			    i__4, &c__0, &i__5, &reset, &transl, (ftnlen)2, (
			    ftnlen)1, (ftnlen)1);
		    if (n > 1) {
			y[n / 2] = 0.;
			yy[abs(incy) * (n / 2 - 1) + 1] = 0.;
		    }

		    i__4 = *nalf;
		    for (ia = 1; ia <= i__4; ++ia) {
			alpha = alf[ia];
			null = n <= 0 || alpha == 0.;

/*                    Generate the matrix A. */

			transl = 0.;
			i__5 = n - 1;
			i__6 = n - 1;
			dmake_(sname + 7, uplo, " ", &n, &n, &a[a_offset], 
				nmax, &aa[1], &lda, &i__5, &i__6, &reset, &
				transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);

			++nc;

/*                    Save every datum before calling the subroutine. */

			*(unsigned char *)uplos = *(unsigned char *)uplo;
			ns = n;
			als = alpha;
			i__5 = laa;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    as[i__] = aa[i__];
/* L10: */
			}
			ldas = lda;
			i__5 = lx;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    xs[i__] = xx[i__];
/* L20: */
			}
			incxs = incx;
			i__5 = ly;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    ys[i__] = yy[i__];
/* L30: */
			}
			incys = incy;

/*                    Call the subroutine. */

			if (full) {
			    if (*trace) {
				io___394.ciunit = *ntra;
				s_wsfe(&io___394);
				do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(
					integer));
				do_fio(&c__1, sname, (ftnlen)12);
				do_fio(&c__1, cuplo, (ftnlen)14);
				do_fio(&c__1, (char *)&n, (ftnlen)sizeof(
					integer));
				do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(
					doublereal));
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
			    cdsyr2_(iorder, uplo, &n, &alpha, &xx[1], &incx, &
				    yy[1], &incy, &aa[1], &lda);
			} else if (packed) {
			    if (*trace) {
				io___395.ciunit = *ntra;
				s_wsfe(&io___395);
				do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(
					integer));
				do_fio(&c__1, sname, (ftnlen)12);
				do_fio(&c__1, cuplo, (ftnlen)14);
				do_fio(&c__1, (char *)&n, (ftnlen)sizeof(
					integer));
				do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(
					doublereal));
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
			    cdspr2_(iorder, uplo, &n, &alpha, &xx[1], &incx, &
				    yy[1], &incy, &aa[1]);
			}

/*                    Check if error-exit was taken incorrectly. */

			if (! infoc_1.ok) {
			    io___396.ciunit = *nout;
			    s_wsfe(&io___396);
			    e_wsfe();
			    *fatal = TRUE_;
			    goto L160;
			}

/*                    See what data changed inside subroutines. */

			isame[0] = *(unsigned char *)uplo == *(unsigned char *
				)uplos;
			isame[1] = ns == n;
			isame[2] = als == alpha;
			isame[3] = lde_(&xs[1], &xx[1], &lx);
			isame[4] = incxs == incx;
			isame[5] = lde_(&ys[1], &yy[1], &ly);
			isame[6] = incys == incy;
			if (null) {
			    isame[7] = lde_(&as[1], &aa[1], &laa);
			} else {
			    isame[7] = lderes_(sname + 7, uplo, &n, &n, &as[1]
				    , &aa[1], &lda, (ftnlen)2, (ftnlen)1);
			}
			if (! packed) {
			    isame[8] = ldas == lda;
			}

/*                    If data was incorrectly changed, report and return. */

			same = TRUE_;
			i__5 = nargs;
			for (i__ = 1; i__ <= i__5; ++i__) {
			    same = same && isame[i__ - 1];
			    if (! isame[i__ - 1]) {
				io___399.ciunit = *nout;
				s_wsfe(&io___399);
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
				    z__[i__ + z_dim1] = x[i__];
/* L50: */
				}
			    } else {
				i__5 = n;
				for (i__ = 1; i__ <= i__5; ++i__) {
				    z__[i__ + z_dim1] = x[n - i__ + 1];
/* L60: */
				}
			    }
			    if (incy > 0) {
				i__5 = n;
				for (i__ = 1; i__ <= i__5; ++i__) {
				    z__[i__ + (z_dim1 << 1)] = y[i__];
/* L70: */
				}
			    } else {
				i__5 = n;
				for (i__ = 1; i__ <= i__5; ++i__) {
				    z__[i__ + (z_dim1 << 1)] = y[n - i__ + 1];
/* L80: */
				}
			    }
			    ja = 1;
			    i__5 = n;
			    for (j = 1; j <= i__5; ++j) {
				w[0] = z__[j + (z_dim1 << 1)];
				w[1] = z__[j + z_dim1];
				if (upper) {
				    jj = 1;
				    lj = j;
				} else {
				    jj = j;
				    lj = n - j + 1;
				}
				dmvch_("N", &lj, &c__2, &alpha, &z__[jj + 
					z_dim1], nmax, w, &c__1, &c_b123, &a[
					jj + j * a_dim1], &c__1, &yt[1], &g[1]
					, &aa[ja], eps, &err, fatal, nout, &
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
	if (*iorder == 0) {
	    io___406.ciunit = *nout;
	    s_wsfe(&io___406);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___407.ciunit = *nout;
	    s_wsfe(&io___407);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    } else {
	if (*iorder == 0) {
	    io___408.ciunit = *nout;
	    s_wsfe(&io___408);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	if (*iorder == 1) {
	    io___409.ciunit = *nout;
	    s_wsfe(&io___409);
	    do_fio(&c__1, sname, (ftnlen)12);
	    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
    }
    goto L170;

L150:
    io___410.ciunit = *nout;
    s_wsfe(&io___410);
    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
    e_wsfe();

L160:
    io___411.ciunit = *nout;
    s_wsfe(&io___411);
    do_fio(&c__1, sname, (ftnlen)12);
    e_wsfe();
    if (full) {
	io___412.ciunit = *nout;
	s_wsfe(&io___412);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (packed) {
	io___413.ciunit = *nout;
	s_wsfe(&io___413);
	do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
	do_fio(&c__1, sname, (ftnlen)12);
	do_fio(&c__1, cuplo, (ftnlen)14);
	do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&alpha, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
	e_wsfe();
    }

L170:
    return 0;

/* L9997: */

/*     End of DCHK6. */

} /* dchk6_ */

/* Subroutine */ int dmake_(char *type__, char *uplo, char *diag, integer *m, 
	integer *n, doublereal *a, integer *nmax, doublereal *aa, integer *
	lda, integer *kl, integer *ku, logical *reset, doublereal *transl, 
	ftnlen type_len, ftnlen uplo_len, ftnlen diag_len)
{
    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4;

    /* Builtin functions */
    integer s_cmp(char *, char *, ftnlen, ftnlen);

    /* Local variables */
    integer i__, j, i1, i2, i3, kk;
    logical gen, tri, sym;
    extern doublereal dbeg_(logical *);
    integer ibeg, iend, ioff;
    logical unit, lower, upper;


/*  Generates values for an M by N matrix A within the bandwidth */
/*  defined by KL and KU. */
/*  Stores the values in the array AA in the data structure required */
/*  by the routine, with unwanted elements set to rogue value. */

/*  TYPE is 'ge', 'gb', 'sy', 'sb', 'sp', 'tr', 'tb' OR 'tp'. */

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
    sym = *(unsigned char *)type__ == 's';
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
		    a[i__ + j * a_dim1] = dbeg_(reset) + *transl;
		} else {
		    a[i__ + j * a_dim1] = 0.;
		}
		if (i__ != j) {
		    if (sym) {
			a[j + i__ * a_dim1] = a[i__ + j * a_dim1];
		    } else if (tri) {
			a[j + i__ * a_dim1] = 0.;
		    }
		}
	    }
/* L10: */
	}
	if (tri) {
	    a[j + j * a_dim1] += 1.;
	}
	if (unit) {
	    a[j + j * a_dim1] = 1.;
	}
/* L20: */
    }

/*     Store elements in array AS in data structure required by routine. */

    if (s_cmp(type__, "ge", (ftnlen)2, (ftnlen)2) == 0) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *m;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		aa[i__ + (j - 1) * *lda] = a[i__ + j * a_dim1];
/* L30: */
	    }
	    i__2 = *lda;
	    for (i__ = *m + 1; i__ <= i__2; ++i__) {
		aa[i__ + (j - 1) * *lda] = -1e10;
/* L40: */
	    }
/* L50: */
	}
    } else if (s_cmp(type__, "gb", (ftnlen)2, (ftnlen)2) == 0) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *ku + 1 - j;
	    for (i1 = 1; i1 <= i__2; ++i1) {
		aa[i1 + (j - 1) * *lda] = -1e10;
/* L60: */
	    }
/* Computing MIN */
	    i__3 = *kl + *ku + 1, i__4 = *ku + 1 + *m - j;
	    i__2 = min(i__3,i__4);
	    for (i2 = i1; i2 <= i__2; ++i2) {
		aa[i2 + (j - 1) * *lda] = a[i2 + j - *ku - 1 + j * a_dim1];
/* L70: */
	    }
	    i__2 = *lda;
	    for (i3 = i2; i3 <= i__2; ++i3) {
		aa[i3 + (j - 1) * *lda] = -1e10;
/* L80: */
	    }
/* L90: */
	}
    } else if (s_cmp(type__, "sy", (ftnlen)2, (ftnlen)2) == 0 || s_cmp(type__,
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
		aa[i__ + (j - 1) * *lda] = -1e10;
/* L100: */
	    }
	    i__2 = iend;
	    for (i__ = ibeg; i__ <= i__2; ++i__) {
		aa[i__ + (j - 1) * *lda] = a[i__ + j * a_dim1];
/* L110: */
	    }
	    i__2 = *lda;
	    for (i__ = iend + 1; i__ <= i__2; ++i__) {
		aa[i__ + (j - 1) * *lda] = -1e10;
/* L120: */
	    }
/* L130: */
	}
    } else if (s_cmp(type__, "sb", (ftnlen)2, (ftnlen)2) == 0 || s_cmp(type__,
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
		aa[i__ + (j - 1) * *lda] = -1e10;
/* L140: */
	    }
	    i__2 = iend;
	    for (i__ = ibeg; i__ <= i__2; ++i__) {
		aa[i__ + (j - 1) * *lda] = a[i__ + j - kk + j * a_dim1];
/* L150: */
	    }
	    i__2 = *lda;
	    for (i__ = iend + 1; i__ <= i__2; ++i__) {
		aa[i__ + (j - 1) * *lda] = -1e10;
/* L160: */
	    }
/* L170: */
	}
    } else if (s_cmp(type__, "sp", (ftnlen)2, (ftnlen)2) == 0 || s_cmp(type__,
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
		aa[ioff] = a[i__ + j * a_dim1];
		if (i__ == j) {
		    if (unit) {
			aa[ioff] = -1e10;
		    }
		}
/* L180: */
	    }
/* L190: */
	}
    }
    return 0;

/*     End of DMAKE. */

} /* dmake_ */

/* Subroutine */ int dmvch_(char *trans, integer *m, integer *n, doublereal *
	alpha, doublereal *a, integer *nmax, doublereal *x, integer *incx, 
	doublereal *beta, doublereal *y, integer *incy, doublereal *yt, 
	doublereal *g, doublereal *yy, doublereal *eps, doublereal *err, 
	logical *fatal, integer *nout, logical *mv, ftnlen trans_len)
{
    /* Format strings */
    static char fmt_9999[] = "(\002 ******* FATAL ERROR - COMPUTED RESULT IS"
	    " LESS THAN HAL\002,\002F ACCURATE *******\002,/\002           EX"
	    "PECTED RESULT   COMPU\002,\002TED RESULT\002)";
    static char fmt_9998[] = "(1x,i7,2g18.6)";

    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2;
    doublereal d__1;

    /* Builtin functions */
    double sqrt(doublereal);
    integer s_wsfe(cilist *), e_wsfe(void), do_fio(integer *, char *, ftnlen);

    /* Local variables */
    integer i__, j, ml, nl, iy, jx, kx, ky;
    doublereal erri;
    logical tran;
    integer incxl, incyl;

    /* Fortran I/O blocks */
    static cilist io___441 = { 0, 0, 0, fmt_9999, 0 };
    static cilist io___442 = { 0, 0, 0, fmt_9998, 0 };
    static cilist io___443 = { 0, 0, 0, fmt_9998, 0 };



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
    tran = *(unsigned char *)trans == 'T' || *(unsigned char *)trans == 'C';
    if (tran) {
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
	yt[iy] = 0.;
	g[iy] = 0.;
	jx = kx;
	if (tran) {
	    i__2 = nl;
	    for (j = 1; j <= i__2; ++j) {
		yt[iy] += a[j + i__ * a_dim1] * x[jx];
		g[iy] += (d__1 = a[j + i__ * a_dim1] * x[jx], abs(d__1));
		jx += incxl;
/* L10: */
	    }
	} else {
	    i__2 = nl;
	    for (j = 1; j <= i__2; ++j) {
		yt[iy] += a[i__ + j * a_dim1] * x[jx];
		g[iy] += (d__1 = a[i__ + j * a_dim1] * x[jx], abs(d__1));
		jx += incxl;
/* L20: */
	    }
	}
	yt[iy] = *alpha * yt[iy] + *beta * y[iy];
	g[iy] = abs(*alpha) * g[iy] + (d__1 = *beta * y[iy], abs(d__1));
	iy += incyl;
/* L30: */
    }

/*     Compute the error ratio for this result. */

    *err = 0.;
    i__1 = ml;
    for (i__ = 1; i__ <= i__1; ++i__) {
	erri = (d__1 = yt[i__] - yy[(i__ - 1) * abs(*incy) + 1], abs(d__1)) / 
		*eps;
	if (g[i__] != 0.) {
	    erri /= g[i__];
	}
	*err = max(*err,erri);
	if (*err * sqrt(*eps) >= 1.) {
	    goto L50;
	}
/* L40: */
    }
/*     If the loop completes, all results are at least half accurate. */
    goto L70;

/*     Report fatal error. */

L50:
    *fatal = TRUE_;
    io___441.ciunit = *nout;
    s_wsfe(&io___441);
    e_wsfe();
    i__1 = ml;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*mv) {
	    io___442.ciunit = *nout;
	    s_wsfe(&io___442);
	    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&yt[i__], (ftnlen)sizeof(doublereal));
	    do_fio(&c__1, (char *)&yy[(i__ - 1) * abs(*incy) + 1], (ftnlen)
		    sizeof(doublereal));
	    e_wsfe();
	} else {
	    io___443.ciunit = *nout;
	    s_wsfe(&io___443);
	    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&yy[(i__ - 1) * abs(*incy) + 1], (ftnlen)
		    sizeof(doublereal));
	    do_fio(&c__1, (char *)&yt[i__], (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
/* L60: */
    }

L70:
    return 0;


/*     End of DMVCH. */

} /* dmvch_ */

logical lde_(doublereal *ri, doublereal *rj, integer *lr)
{
    /* System generated locals */
    integer i__1;
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
	if (ri[i__] != rj[i__]) {
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

/*     End of LDE. */

} /* lde_ */

logical lderes_(char *type__, char *uplo, integer *m, integer *n, doublereal *
	aa, doublereal *as, integer *lda, ftnlen type_len, ftnlen uplo_len)
{
    /* System generated locals */
    integer aa_dim1, aa_offset, as_dim1, as_offset, i__1, i__2;
    logical ret_val;

    /* Builtin functions */
    integer s_cmp(char *, char *, ftnlen, ftnlen);

    /* Local variables */
    integer i__, j, ibeg, iend;
    logical upper;


/*  Tests if selected elements in two arrays are equal. */

/*  TYPE is 'ge', 'sy' or 'sp'. */

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
		if (aa[i__ + j * aa_dim1] != as[i__ + j * as_dim1]) {
		    goto L70;
		}
/* L10: */
	    }
/* L20: */
	}
    } else if (s_cmp(type__, "sy", (ftnlen)2, (ftnlen)2) == 0) {
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
		if (aa[i__ + j * aa_dim1] != as[i__ + j * as_dim1]) {
		    goto L70;
		}
/* L30: */
	    }
	    i__2 = *lda;
	    for (i__ = iend + 1; i__ <= i__2; ++i__) {
		if (aa[i__ + j * aa_dim1] != as[i__ + j * as_dim1]) {
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

/*     End of LDERES. */

} /* lderes_ */

doublereal dbeg_(logical *reset)
{
    /* System generated locals */
    doublereal ret_val;

    /* Local variables */
    static integer i__, ic, mi;


/*  Generates random numbers uniformly distributed between -0.5 and 0.5. */

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
	i__ = 7;
	ic = 0;
	*reset = FALSE_;
    }

/*     The sequence of values of I is bounded between 1 and 999. */
/*     If initial I = 1,2,3,6,7 or 9, the period will be 50. */
/*     If initial I = 4 or 8, the period will be 25. */
/*     If initial I = 5, the period will be 10. */
/*     IC is used to break up the period by skipping 1 value of I in 6. */

    ++ic;
L10:
    i__ *= mi;
    i__ -= i__ / 1000 * 1000;
    if (ic >= 5) {
	ic = 0;
	goto L10;
    }
    ret_val = (doublereal) (i__ - 500) / 1001.;
    return ret_val;

/*     End of DBEG. */

} /* dbeg_ */

doublereal ddiff_(doublereal *x, doublereal *y)
{
    /* System generated locals */
    doublereal ret_val;


/*  Auxiliary routine for test program for Level 2 Blas. */

/*  -- Written on 10-August-1987. */
/*     Richard Hanson, Sandia National Labs. */

/*     .. Scalar Arguments .. */
/*     .. Executable Statements .. */
    ret_val = *x - *y;
    return ret_val;

/*     End of DDIFF. */

} /* ddiff_ */

/* Main program alias */ int dblat2_ () { MAIN__ (); return 0; }
