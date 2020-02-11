/* testing/c_cblat3.f -- translated by f2c (version 20191129).
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
  logical ok, lerr;
} infoc_;

#define infoc_1 infoc_

struct {
  char srnamt[12];
} srnamc_;

#define srnamc_1 srnamc_

/* Table of constant values */

static complex c_b1 = {0.f, 0.f};
static complex c_b2 = {1.f, 0.f};
static integer c__9 = 9;
static integer c__1 = 1;
static integer c__3 = 3;
static integer c__8 = 8;
static integer c__4 = 4;
static integer c__65 = 65;
static integer c__7 = 7;
static integer c__6 = 6;
static integer c__2 = 2;
static real c_b91 = 1.f;
static logical c_true = TRUE_;
static integer c__0 = 0;
static logical c_false = FALSE_;

/* Main program */ int MAIN__(void) {
  /* Initialized data */

  static char snames[12 * 9] = "cblas_cgemm "
                               "cblas_chemm "
                               "cblas_csymm "
                               "cblas_ctrmm "
                               "cblas_ctrsm "
                               "cblas_cherk "
                               "cblas_csyrk "
                               "cbl"
                               "as_cher2k"
                               "cblas_csyr2k";

  /* Format strings */
  static char fmt_9997[] = "(\002 NUMBER OF VALUES OF \002,a,\002 IS LESS "
                           "THAN 1 OR GREATER \002,\002THAN \002,i2)";
  static char fmt_9996[] = "(\002 VALUE OF N IS LESS THAN 0 OR GREATER THA"
                           "N \002,i2)";
  static char fmt_9995[] =
      "(\002 TESTS OF THE COMPLEX          LEVEL 3 BL"
      "AS\002,//\002 THE F\002,\002OLLOWING PARAMETER VALUES WILL BE US"
      "ED:\002)";
  static char fmt_9994[] = "(\002   FOR N              \002,9i6)";
  static char fmt_9993[] = "(\002   FOR ALPHA          \002,7(\002(\002,f4"
                           ".1,\002,\002,f4.1,\002)  \002,:))";
  static char fmt_9992[] = "(\002   FOR BETA           \002,7(\002(\002,f4"
                           ".1,\002,\002,f4.1,\002)  \002,:))";
  static char fmt_9984[] = "(\002 ERROR-EXITS WILL NOT BE TESTED\002)";
  static char fmt_9999[] = "(\002 ROUTINES PASS COMPUTATIONAL TESTS IF TES"
                           "T RATIO IS LES\002,\002S THAN\002,f8.2)";
  static char fmt_10002[] = "(\002 COLUMN-MAJOR AND ROW-MAJOR DATA LAYOUTS"
                            " ARE TESTED\002)";
  static char fmt_10001[] = "(\002 ROW-MAJOR DATA LAYOUT IS TESTED\002)";
  static char fmt_10000[] = "(\002 COLUMN-MAJOR DATA LAYOUT IS TESTED\002)";
  static char fmt_9988[] = "(a12,l2)";
  static char fmt_9990[] =
      "(\002 SUBPROGRAM NAME \002,a12,\002 NOT RECOGN"
      "IZED\002,/\002 ******* T\002,\002ESTS ABANDONED *******\002)";
  static char fmt_9998[] = "(\002 RELATIVE MACHINE PRECISION IS TAKEN TO"
                           " BE\002,1p,e9.1)";
  static char fmt_9989[] =
      "(\002 ERROR IN CMMCH -  IN-LINE DOT PRODUCTS A"
      "RE BEING EVALU\002,\002ATED WRONGLY.\002,/\002 CMMCH WAS CALLED "
      "WITH TRANSA = \002,a1,\002AND TRANSB = \002,a1,/\002 AND RETURNE"
      "D SAME = \002,l1,\002 AND \002,\002 ERR = \002,f12.3,\002.\002,"
      "/\002 THIS MAY BE DUE TO FAULTS IN THE \002,\002ARITHMETIC OR TH"
      "E COMPILER.\002,/\002 ******* TESTS ABANDONED \002,\002******"
      "*\002)";
  static char fmt_9987[] = "(1x,a12,\002 WAS NOT TESTED\002)";
  static char fmt_9986[] = "(/\002 END OF TESTS\002)";
  static char fmt_9985[] = "(/\002 ******* FATAL ERROR - TESTS ABANDONED *"
                           "******\002)";
  static char fmt_9991[] =
      "(\002 AMEND DATA FILE OR INCREASE ARRAY SIZES "
      "IN PROGRAM\002,/\002 ******* TESTS ABANDONED *******\002)";

  /* System generated locals */
  integer i__1, i__2, i__3, i__4, i__5;
  real r__1;
  olist o__1;
  cllist cl__1;

  /* Builtin functions */
  integer s_rsle(cilist *), do_lio(integer *, integer *, char *, ftnlen),
      e_rsle(void), f_open(olist *), s_wsfe(cilist *),
      do_fio(integer *, char *, ftnlen), e_wsfe(void), s_wsle(cilist *),
      e_wsle(void), s_rsfe(cilist *), e_rsfe(void),
      s_cmp(char *, char *, ftnlen, ftnlen);
  /* Subroutine */ int s_stop(char *, ftnlen);
  integer f_clos(cllist *);
  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);

  /* Local variables */
  complex c__[4225] /* was [65][65] */;
  real g[65];
  integer i__, j, n;
  complex w[130], aa[4225], ab[8450] /* was [65][130] */, bb[4225], cc[4225],
      as[4225], bs[4225], cs[4225], ct[65], alf[7];
  extern logical lce_(complex *, complex *, integer *);
  complex bet[7];
  real eps, err;
  integer nalf, idim[9];
  logical same;
  integer nbet, ntra;
  logical rewi;
  extern /* Subroutine */ int cchk1_(
      char *, real *, real *, integer *, integer *, logical *, logical *,
      logical *, integer *, integer *, integer *, complex *, integer *,
      complex *, integer *, complex *, complex *, complex *, complex *,
      complex *, complex *, complex *, complex *, complex *, complex *, real *,
      integer *, ftnlen),
      cchk2_(char *, real *, real *, integer *, integer *, logical *, logical *,
             logical *, integer *, integer *, integer *, complex *, integer *,
             complex *, integer *, complex *, complex *, complex *, complex *,
             complex *, complex *, complex *, complex *, complex *, complex *,
             real *, integer *, ftnlen),
      cchk3_(char *, real *, real *, integer *, integer *, logical *, logical *,
             logical *, integer *, integer *, integer *, complex *, integer *,
             complex *, complex *, complex *, complex *, complex *, complex *,
             complex *, real *, complex *, integer *, ftnlen),
      cchk4_(char *, real *, real *, integer *, integer *, logical *, logical *,
             logical *, integer *, integer *, integer *, complex *, integer *,
             complex *, integer *, complex *, complex *, complex *, complex *,
             complex *, complex *, complex *, complex *, complex *, complex *,
             real *, integer *, ftnlen),
      cchk5_(char *, real *, real *, integer *, integer *, logical *, logical *,
             logical *, integer *, integer *, integer *, complex *, integer *,
             complex *, integer *, complex *, complex *, complex *, complex *,
             complex *, complex *, complex *, complex *, complex *, real *,
             complex *, integer *, ftnlen);
  logical fatal;
  extern /* Subroutine */ int cmmch_(
      char *, char *, integer *, integer *, integer *, complex *, complex *,
      integer *, complex *, integer *, complex *, complex *, integer *,
      complex *, real *, complex *, integer *, real *, real *, logical *,
      integer *, logical *, ftnlen, ftnlen);
  extern real sdiff_(real *, real *);
  logical trace;
  integer nidim;
  char snaps[32];
  integer isnum;
  logical ltest[9], sfatal, corder;
  char snamet[12], transa[1], transb[1];
  real thresh;
  logical rorder;
  extern /* Subroutine */ void cc3chke_(char *);
  integer layout;
  logical ltestt, tsterr;

  /* Fortran I/O blocks */
  static cilist io___2 = {0, 5, 0, 0, 0};
  static cilist io___4 = {0, 5, 0, 0, 0};
  static cilist io___7 = {0, 5, 0, 0, 0};
  static cilist io___9 = {0, 5, 0, 0, 0};
  static cilist io___11 = {0, 5, 0, 0, 0};
  static cilist io___13 = {0, 5, 0, 0, 0};
  static cilist io___15 = {0, 5, 0, 0, 0};
  static cilist io___17 = {0, 5, 0, 0, 0};
  static cilist io___19 = {0, 6, 0, fmt_9997, 0};
  static cilist io___20 = {0, 5, 0, 0, 0};
  static cilist io___23 = {0, 6, 0, fmt_9996, 0};
  static cilist io___24 = {0, 5, 0, 0, 0};
  static cilist io___26 = {0, 6, 0, fmt_9997, 0};
  static cilist io___27 = {0, 5, 0, 0, 0};
  static cilist io___29 = {0, 5, 0, 0, 0};
  static cilist io___31 = {0, 6, 0, fmt_9997, 0};
  static cilist io___32 = {0, 5, 0, 0, 0};
  static cilist io___34 = {0, 6, 0, fmt_9995, 0};
  static cilist io___35 = {0, 6, 0, fmt_9994, 0};
  static cilist io___36 = {0, 6, 0, fmt_9993, 0};
  static cilist io___37 = {0, 6, 0, fmt_9992, 0};
  static cilist io___38 = {0, 6, 0, 0, 0};
  static cilist io___39 = {0, 6, 0, fmt_9984, 0};
  static cilist io___40 = {0, 6, 0, 0, 0};
  static cilist io___41 = {0, 6, 0, fmt_9999, 0};
  static cilist io___42 = {0, 6, 0, 0, 0};
  static cilist io___45 = {0, 6, 0, fmt_10002, 0};
  static cilist io___46 = {0, 6, 0, fmt_10001, 0};
  static cilist io___47 = {0, 6, 0, fmt_10000, 0};
  static cilist io___48 = {0, 6, 0, 0, 0};
  static cilist io___50 = {0, 5, 1, fmt_9988, 0};
  static cilist io___53 = {0, 6, 0, fmt_9990, 0};
  static cilist io___55 = {0, 6, 0, fmt_9998, 0};
  static cilist io___68 = {0, 6, 0, fmt_9989, 0};
  static cilist io___69 = {0, 6, 0, fmt_9989, 0};
  static cilist io___70 = {0, 6, 0, fmt_9989, 0};
  static cilist io___71 = {0, 6, 0, fmt_9989, 0};
  static cilist io___73 = {0, 6, 0, 0, 0};
  static cilist io___74 = {0, 6, 0, fmt_9987, 0};
  static cilist io___75 = {0, 6, 0, 0, 0};
  static cilist io___82 = {0, 6, 0, fmt_9986, 0};
  static cilist io___83 = {0, 6, 0, fmt_9985, 0};
  static cilist io___84 = {0, 6, 0, fmt_9991, 0};

  /*  Test program for the COMPLEX          Level 3 Blas. */

  /*  The program must be driven by a short data file. The first 13 records */
  /*  of the file are read using list-directed input, the last 9 records */
  /*  are read using the format ( A12, L2 ). An annotated example of a data */
  /*  file can be obtained by deleting the first 3 characters from the */
  /*  following 22 lines: */
  /*  'CBLAT3.SNAP'     NAME OF SNAPSHOT OUTPUT FILE */
  /*  -1                UNIT NUMBER OF SNAPSHOT FILE (NOT USED IF .LT. 0) */
  /*  F        LOGICAL FLAG, T TO REWIND SNAPSHOT FILE AFTER EACH RECORD. */
  /*  F        LOGICAL FLAG, T TO STOP ON FAILURES. */
  /*  T        LOGICAL FLAG, T TO TEST ERROR EXITS. */
  /*  2        0 TO TEST COLUMN-MAJOR, 1 TO TEST ROW-MAJOR, 2 TO TEST BOTH */
  /*  16.0     THRESHOLD VALUE OF TEST RATIO */
  /*  6                 NUMBER OF VALUES OF N */
  /*  0 1 2 3 5 9       VALUES OF N */
  /*  3                 NUMBER OF VALUES OF ALPHA */
  /*  (0.0,0.0) (1.0,0.0) (0.7,-0.9)       VALUES OF ALPHA */
  /*  3                 NUMBER OF VALUES OF BETA */
  /*  (0.0,0.0) (1.0,0.0) (1.3,-1.1)       VALUES OF BETA */
  /*  cblas_cgemm  T PUT F FOR NO TEST. SAME COLUMNS. */
  /*  cblas_chemm  T PUT F FOR NO TEST. SAME COLUMNS. */
  /*  cblas_csymm  T PUT F FOR NO TEST. SAME COLUMNS. */
  /*  cblas_ctrmm  T PUT F FOR NO TEST. SAME COLUMNS. */
  /*  cblas_ctrsm  T PUT F FOR NO TEST. SAME COLUMNS. */
  /*  cblas_cherk  T PUT F FOR NO TEST. SAME COLUMNS. */
  /*  cblas_csyrk  T PUT F FOR NO TEST. SAME COLUMNS. */
  /*  cblas_cher2k T PUT F FOR NO TEST. SAME COLUMNS. */
  /*  cblas_csyr2k T PUT F FOR NO TEST. SAME COLUMNS. */

  /*  See: */

  /*     Dongarra J. J., Du Croz J. J., Duff I. S. and Hammarling S. */
  /*     A Set of Level 3 Basic Linear Algebra Subprograms. */

  /*     Technical Memorandum No.88 (Revision 1), Mathematics and */
  /*     Computer Science Division, Argonne National Laboratory, 9700 */
  /*     South Cass Avenue, Argonne, Illinois 60439, US. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

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
  /*     Read the flag that indicates whether row-major data layout to be
   * tested. */
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
    goto L220;
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
      goto L220;
    }
    /* L10: */
  }
  /*     Values of ALPHA */
  s_rsle(&io___24);
  do_lio(&c__3, &c__1, (char *)&nalf, (ftnlen)sizeof(integer));
  e_rsle();
  if (nalf < 1 || nalf > 7) {
    s_wsfe(&io___26);
    do_fio(&c__1, "ALPHA", (ftnlen)5);
    do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
    e_wsfe();
    goto L220;
  }
  s_rsle(&io___27);
  i__1 = nalf;
  for (i__ = 1; i__ <= i__1; ++i__) {
    do_lio(&c__6, &c__1, (char *)&alf[i__ - 1], (ftnlen)sizeof(complex));
  }
  e_rsle();
  /*     Values of BETA */
  s_rsle(&io___29);
  do_lio(&c__3, &c__1, (char *)&nbet, (ftnlen)sizeof(integer));
  e_rsle();
  if (nbet < 1 || nbet > 7) {
    s_wsfe(&io___31);
    do_fio(&c__1, "BETA", (ftnlen)4);
    do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
    e_wsfe();
    goto L220;
  }
  s_rsle(&io___32);
  i__1 = nbet;
  for (i__ = 1; i__ <= i__1; ++i__) {
    do_lio(&c__6, &c__1, (char *)&bet[i__ - 1], (ftnlen)sizeof(complex));
  }
  e_rsle();

  /*     Report values of parameters. */

  s_wsfe(&io___34);
  e_wsfe();
  s_wsfe(&io___35);
  i__1 = nidim;
  for (i__ = 1; i__ <= i__1; ++i__) {
    do_fio(&c__1, (char *)&idim[i__ - 1], (ftnlen)sizeof(integer));
  }
  e_wsfe();
  s_wsfe(&io___36);
  i__1 = nalf;
  for (i__ = 1; i__ <= i__1; ++i__) {
    do_fio(&c__2, (char *)&alf[i__ - 1], (ftnlen)sizeof(real));
  }
  e_wsfe();
  s_wsfe(&io___37);
  i__1 = nbet;
  for (i__ = 1; i__ <= i__1; ++i__) {
    do_fio(&c__2, (char *)&bet[i__ - 1], (ftnlen)sizeof(real));
  }
  e_wsfe();
  if (!tsterr) {
    s_wsle(&io___38);
    e_wsle();
    s_wsfe(&io___39);
    e_wsfe();
  }
  s_wsle(&io___40);
  e_wsle();
  s_wsfe(&io___41);
  do_fio(&c__1, (char *)&thresh, (ftnlen)sizeof(real));
  e_wsfe();
  s_wsle(&io___42);
  e_wsle();
  rorder = FALSE_;
  corder = FALSE_;
  if (layout == 2) {
    rorder = TRUE_;
    corder = TRUE_;
    s_wsfe(&io___45);
    e_wsfe();
  } else if (layout == 1) {
    rorder = TRUE_;
    s_wsfe(&io___46);
    e_wsfe();
  } else if (layout == 0) {
    corder = TRUE_;
    s_wsfe(&io___47);
    e_wsfe();
  }
  s_wsle(&io___48);
  e_wsle();

  /*     Read names of subroutines and flags which indicate */
  /*     whether they are to be tested. */

  for (i__ = 1; i__ <= 9; ++i__) {
    ltest[i__ - 1] = FALSE_;
    /* L20: */
  }
L30:
  i__1 = s_rsfe(&io___50);
  if (i__1 != 0) {
    goto L60;
  }
  i__1 = do_fio(&c__1, snamet, (ftnlen)12);
  if (i__1 != 0) {
    goto L60;
  }
  i__1 = do_fio(&c__1, (char *)&ltestt, (ftnlen)sizeof(logical));
  if (i__1 != 0) {
    goto L60;
  }
  i__1 = e_rsfe();
  if (i__1 != 0) {
    goto L60;
  }
  for (i__ = 1; i__ <= 9; ++i__) {
    if (s_cmp(snamet, snames + (i__ - 1) * 12, (ftnlen)12, (ftnlen)12) == 0) {
      goto L50;
    }
    /* L40: */
  }
  s_wsfe(&io___53);
  do_fio(&c__1, snamet, (ftnlen)12);
  e_wsfe();
  s_stop("", (ftnlen)0);
L50:
  ltest[i__ - 1] = ltestt;
  goto L30;

L60:
  cl__1.cerr = 0;
  cl__1.cunit = 5;
  cl__1.csta = 0;
  f_clos(&cl__1);

  /*     Compute EPS (the machine precision). */

  eps = 1.f;
L70:
  r__1 = eps + 1.f;
  if (sdiff_(&r__1, &c_b91) == 0.f) {
    goto L80;
  }
  eps *= .5f;
  goto L70;
L80:
  eps += eps;
  s_wsfe(&io___55);
  do_fio(&c__1, (char *)&eps, (ftnlen)sizeof(real));
  e_wsfe();

  /*     Check the reliability of CMMCH using exact data. */

  n = 32;
  i__1 = n;
  for (j = 1; j <= i__1; ++j) {
    i__2 = n;
    for (i__ = 1; i__ <= i__2; ++i__) {
      i__3 = i__ + j * 65 - 66;
      /* Computing MAX */
      i__5 = i__ - j + 1;
      i__4 = max(i__5, 0);
      ab[i__3].r = (real)i__4, ab[i__3].i = 0.f;
      /* L90: */
    }
    i__2 = j + 4224;
    ab[i__2].r = (real)j, ab[i__2].i = 0.f;
    i__2 = (j + 65) * 65 - 65;
    ab[i__2].r = (real)j, ab[i__2].i = 0.f;
    i__2 = j - 1;
    c__[i__2].r = 0.f, c__[i__2].i = 0.f;
    /* L100: */
  }
  i__1 = n;
  for (j = 1; j <= i__1; ++j) {
    i__2 = j - 1;
    i__3 = j * ((j + 1) * j) / 2 - (j + 1) * j * (j - 1) / 3;
    cc[i__2].r = (real)i__3, cc[i__2].i = 0.f;
    /* L110: */
  }
  /*     CC holds the exact result. On exit from CMMCH CT holds */
  /*     the result computed by CMMCH. */
  *(unsigned char *)transa = 'N';
  *(unsigned char *)transb = 'N';
  cmmch_(transa, transb, &n, &c__1, &n, &c_b2, ab, &c__65, &ab[4225], &c__65,
         &c_b1, c__, &c__65, ct, g, cc, &c__65, &eps, &err, &fatal, &c__6,
         &c_true, (ftnlen)1, (ftnlen)1);
  same = lce_(cc, ct, &n);
  if (!same || err != 0.f) {
    s_wsfe(&io___68);
    do_fio(&c__1, transa, (ftnlen)1);
    do_fio(&c__1, transb, (ftnlen)1);
    do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&err, (ftnlen)sizeof(real));
    e_wsfe();
    s_stop("", (ftnlen)0);
  }
  *(unsigned char *)transb = 'C';
  cmmch_(transa, transb, &n, &c__1, &n, &c_b2, ab, &c__65, &ab[4225], &c__65,
         &c_b1, c__, &c__65, ct, g, cc, &c__65, &eps, &err, &fatal, &c__6,
         &c_true, (ftnlen)1, (ftnlen)1);
  same = lce_(cc, ct, &n);
  if (!same || err != 0.f) {
    s_wsfe(&io___69);
    do_fio(&c__1, transa, (ftnlen)1);
    do_fio(&c__1, transb, (ftnlen)1);
    do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&err, (ftnlen)sizeof(real));
    e_wsfe();
    s_stop("", (ftnlen)0);
  }
  i__1 = n;
  for (j = 1; j <= i__1; ++j) {
    i__2 = j + 4224;
    i__3 = n - j + 1;
    ab[i__2].r = (real)i__3, ab[i__2].i = 0.f;
    i__2 = (j + 65) * 65 - 65;
    i__3 = n - j + 1;
    ab[i__2].r = (real)i__3, ab[i__2].i = 0.f;
    /* L120: */
  }
  i__1 = n;
  for (j = 1; j <= i__1; ++j) {
    i__2 = n - j;
    i__3 = j * ((j + 1) * j) / 2 - (j + 1) * j * (j - 1) / 3;
    cc[i__2].r = (real)i__3, cc[i__2].i = 0.f;
    /* L130: */
  }
  *(unsigned char *)transa = 'C';
  *(unsigned char *)transb = 'N';
  cmmch_(transa, transb, &n, &c__1, &n, &c_b2, ab, &c__65, &ab[4225], &c__65,
         &c_b1, c__, &c__65, ct, g, cc, &c__65, &eps, &err, &fatal, &c__6,
         &c_true, (ftnlen)1, (ftnlen)1);
  same = lce_(cc, ct, &n);
  if (!same || err != 0.f) {
    s_wsfe(&io___70);
    do_fio(&c__1, transa, (ftnlen)1);
    do_fio(&c__1, transb, (ftnlen)1);
    do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&err, (ftnlen)sizeof(real));
    e_wsfe();
    s_stop("", (ftnlen)0);
  }
  *(unsigned char *)transb = 'C';
  cmmch_(transa, transb, &n, &c__1, &n, &c_b2, ab, &c__65, &ab[4225], &c__65,
         &c_b1, c__, &c__65, ct, g, cc, &c__65, &eps, &err, &fatal, &c__6,
         &c_true, (ftnlen)1, (ftnlen)1);
  same = lce_(cc, ct, &n);
  if (!same || err != 0.f) {
    s_wsfe(&io___71);
    do_fio(&c__1, transa, (ftnlen)1);
    do_fio(&c__1, transb, (ftnlen)1);
    do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
    do_fio(&c__1, (char *)&err, (ftnlen)sizeof(real));
    e_wsfe();
    s_stop("", (ftnlen)0);
  }

  /*     Test each subroutine in turn. */

  for (isnum = 1; isnum <= 9; ++isnum) {
    s_wsle(&io___73);
    e_wsle();
    if (!ltest[isnum - 1]) {
      /*           Subprogram is not to be tested. */
      s_wsfe(&io___74);
      do_fio(&c__1, snames + (isnum - 1) * 12, (ftnlen)12);
      e_wsfe();
    } else {
      s_copy(srnamc_1.srnamt, snames + (isnum - 1) * 12, (ftnlen)12,
             (ftnlen)12);
      /*           Test error exits. */
      if (tsterr) {
        cc3chke_(snames + (isnum - 1) * 12);
        s_wsle(&io___75);
        e_wsle();
      }
      /*           Test computations. */
      infoc_1.infot = 0;
      infoc_1.ok = TRUE_;
      fatal = FALSE_;
      switch (isnum) {
      case 1:
        goto L140;
      case 2:
        goto L150;
      case 3:
        goto L150;
      case 4:
        goto L160;
      case 5:
        goto L160;
      case 6:
        goto L170;
      case 7:
        goto L170;
      case 8:
        goto L180;
      case 9:
        goto L180;
      }
    /*           Test CGEMM, 01. */
    L140:
      if (corder) {
        cchk1_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__0,
               (ftnlen)12);
      }
      if (rorder) {
        cchk1_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__1,
               (ftnlen)12);
      }
      goto L190;
    /*           Test CHEMM, 02, CSYMM, 03. */
    L150:
      if (corder) {
        cchk2_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__0,
               (ftnlen)12);
      }
      if (rorder) {
        cchk2_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__1,
               (ftnlen)12);
      }
      goto L190;
    /*           Test CTRMM, 04, CTRSM, 05. */
    L160:
      if (corder) {
        cchk3_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
               &rewi, &fatal, &nidim, idim, &nalf, alf, &c__65, ab, aa, as,
               &ab[4225], bb, bs, ct, g, c__, &c__0, (ftnlen)12);
      }
      if (rorder) {
        cchk3_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
               &rewi, &fatal, &nidim, idim, &nalf, alf, &c__65, ab, aa, as,
               &ab[4225], bb, bs, ct, g, c__, &c__1, (ftnlen)12);
      }
      goto L190;
    /*           Test CHERK, 06, CSYRK, 07. */
    L170:
      if (corder) {
        cchk4_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__0,
               (ftnlen)12);
      }
      if (rorder) {
        cchk4_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__1,
               (ftnlen)12);
      }
      goto L190;
    /*           Test CHER2K, 08, CSYR2K, 09. */
    L180:
      if (corder) {
        cchk5_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
               aa, as, bb, bs, c__, cc, cs, ct, g, w, &c__0, (ftnlen)12);
      }
      if (rorder) {
        cchk5_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
               aa, as, bb, bs, c__, cc, cs, ct, g, w, &c__1, (ftnlen)12);
      }
      goto L190;

    L190:
      if (fatal && sfatal) {
        goto L210;
      }
    }
    /* L200: */
  }
  s_wsfe(&io___82);
  e_wsfe();
  goto L230;

L210:
  s_wsfe(&io___83);
  e_wsfe();
  goto L230;

L220:
  s_wsfe(&io___84);
  e_wsfe();

L230:
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

  /*     End of CBLAT3. */

  return 0;
} /* MAIN__ */

/* Subroutine */ int
cchk1_(char *sname, real *eps, real *thresh, integer *nout, integer *ntra,
       logical *trace, logical *rewi, logical *fatal, integer *nidim,
       integer *idim, integer *nalf, complex *alf, integer *nbet, complex *bet,
       integer *nmax, complex *a, complex *aa, complex *as, complex *b,
       complex *bb, complex *bs, complex *c__, complex *cc, complex *cs,
       complex *ct, real *g, integer *iorder, ftnlen sname_len) {
  /* Initialized data */

  static char ich[3] = "NTC";

  /* Format strings */
  static char fmt_9994[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
                           "N VALID CALL *\002,\002******\002)";
  static char fmt_9998[] =
      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
  static char fmt_10000[] =
      "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
  static char fmt_10001[] =
      "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
  static char fmt_10002[] =
      "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
      "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
      "ECT *******\002)";
  static char fmt_10003[] =
      "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
      "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
      "ECT *******\002)";
  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
                           "BER:\002)";

  /* System generated locals */
  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2,
      i__3, i__4, i__5, i__6, i__7, i__8;
  alist al__1;

  /* Builtin functions */
  integer f_rew(alist *), s_wsfe(cilist *), e_wsfe(void),
      do_fio(integer *, char *, ftnlen);

  /* Local variables */
  integer i__, k, m, n, ia, ib, ma, mb, na, nb, nc, ik, im, in, ks, ms, ns, ica,
      icb, laa, lbb, lda, lcc, ldb, ldc;
  extern logical lce_(complex *, complex *, integer *);
  complex als, bls;
  real err;
  complex beta;
  integer ldas, ldbs, ldcs;
  logical same, null;
  extern /* Subroutine */ int cmake_(
      char *, char *, char *, integer *, integer *, complex *, integer *,
      complex *, integer *, logical *, complex *, ftnlen, ftnlen, ftnlen);
  complex alpha;
  extern /* Subroutine */ int cmmch_(
      char *, char *, integer *, integer *, integer *, complex *, complex *,
      integer *, complex *, integer *, complex *, complex *, integer *,
      complex *, real *, complex *, integer *, real *, real *, logical *,
      integer *, logical *, ftnlen, ftnlen);
  logical isame[13], trana, tranb;
  integer nargs;
  logical reset;
  extern /* Subroutine */ int cprcn1_(
      integer *, integer *, char *, integer *, char *, char *, integer *,
      integer *, integer *, complex *, integer *, integer *, complex *,
      integer *, ftnlen, ftnlen, ftnlen);

  extern void ccgemm_(integer *, char *, char *, integer *, integer *, integer *,
                      complex *, complex *, integer *, complex *, integer *, complex *,
                      complex *, integer *);
  extern logical lceres_(char *, char *, integer *, integer *, complex *,
                         complex *, integer *, ftnlen, ftnlen);
  char tranas[1], tranbs[1], transa[1], transb[1];
  real errmax;

  /* Fortran I/O blocks */
  static cilist io___128 = {0, 0, 0, fmt_9994, 0};
  static cilist io___131 = {0, 0, 0, fmt_9998, 0};
  static cilist io___133 = {0, 0, 0, fmt_10000, 0};
  static cilist io___134 = {0, 0, 0, fmt_10001, 0};
  static cilist io___135 = {0, 0, 0, fmt_10002, 0};
  static cilist io___136 = {0, 0, 0, fmt_10003, 0};
  static cilist io___137 = {0, 0, 0, fmt_9996, 0};

  /*  Tests CGEMM. */

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

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
  --bet;
  --g;
  --ct;
  --cs;
  --cc;
  c_dim1 = *nmax;
  c_offset = 1 + c_dim1;
  c__ -= c_offset;
  --bs;
  --bb;
  b_dim1 = *nmax;
  b_offset = 1 + b_dim1;
  b -= b_offset;
  --as;
  --aa;
  a_dim1 = *nmax;
  a_offset = 1 + a_dim1;
  a -= a_offset;

  /* Function Body */
  /*     .. Executable Statements .. */

  nargs = 13;
  nc = 0;
  reset = TRUE_;
  errmax = 0.f;

  i__1 = *nidim;
  for (im = 1; im <= i__1; ++im) {
    m = idim[im];

    i__2 = *nidim;
    for (in = 1; in <= i__2; ++in) {
      n = idim[in];
      /*           Set LDC to 1 more than minimum value if room. */
      ldc = m;
      if (ldc < *nmax) {
        ++ldc;
      }
      /*           Skip tests if not enough room. */
      if (ldc > *nmax) {
        goto L100;
      }
      lcc = ldc * n;
      null = n <= 0 || m <= 0;

      i__3 = *nidim;
      for (ik = 1; ik <= i__3; ++ik) {
        k = idim[ik];

        for (ica = 1; ica <= 3; ++ica) {
          *(unsigned char *)transa = *(unsigned char *)&ich[ica - 1];
          trana = *(unsigned char *)transa == 'T' ||
                  *(unsigned char *)transa == 'C';

          if (trana) {
            ma = k;
            na = m;
          } else {
            ma = m;
            na = k;
          }
          /*                 Set LDA to 1 more than minimum value if room. */
          lda = ma;
          if (lda < *nmax) {
            ++lda;
          }
          /*                 Skip tests if not enough room. */
          if (lda > *nmax) {
            goto L80;
          }
          laa = lda * na;

          /*                 Generate the matrix A. */

          cmake_("ge", " ", " ", &ma, &na, &a[a_offset], nmax, &aa[1], &lda,
                 &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

          for (icb = 1; icb <= 3; ++icb) {
            *(unsigned char *)transb = *(unsigned char *)&ich[icb - 1];
            tranb = *(unsigned char *)transb == 'T' ||
                    *(unsigned char *)transb == 'C';

            if (tranb) {
              mb = n;
              nb = k;
            } else {
              mb = k;
              nb = n;
            }
            /*                    Set LDB to 1 more than minimum value if room.
             */
            ldb = mb;
            if (ldb < *nmax) {
              ++ldb;
            }
            /*                    Skip tests if not enough room. */
            if (ldb > *nmax) {
              goto L70;
            }
            lbb = ldb * nb;

            /*                    Generate the matrix B. */

            cmake_("ge", " ", " ", &mb, &nb, &b[b_offset], nmax, &bb[1], &ldb,
                   &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

            i__4 = *nalf;
            for (ia = 1; ia <= i__4; ++ia) {
              i__5 = ia;
              alpha.r = alf[i__5].r, alpha.i = alf[i__5].i;

              i__5 = *nbet;
              for (ib = 1; ib <= i__5; ++ib) {
                i__6 = ib;
                beta.r = bet[i__6].r, beta.i = bet[i__6].i;

                /*                          Generate the matrix C. */

                cmake_("ge", " ", " ", &m, &n, &c__[c_offset], nmax, &cc[1],
                       &ldc, &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

                ++nc;

                /*                          Save every datum before calling the
                 */
                /*                          subroutine. */

                *(unsigned char *)tranas = *(unsigned char *)transa;
                *(unsigned char *)tranbs = *(unsigned char *)transb;
                ms = m;
                ns = n;
                ks = k;
                als.r = alpha.r, als.i = alpha.i;
                i__6 = laa;
                for (i__ = 1; i__ <= i__6; ++i__) {
                  i__7 = i__;
                  i__8 = i__;
                  as[i__7].r = aa[i__8].r, as[i__7].i = aa[i__8].i;
                  /* L10: */
                }
                ldas = lda;
                i__6 = lbb;
                for (i__ = 1; i__ <= i__6; ++i__) {
                  i__7 = i__;
                  i__8 = i__;
                  bs[i__7].r = bb[i__8].r, bs[i__7].i = bb[i__8].i;
                  /* L20: */
                }
                ldbs = ldb;
                bls.r = beta.r, bls.i = beta.i;
                i__6 = lcc;
                for (i__ = 1; i__ <= i__6; ++i__) {
                  i__7 = i__;
                  i__8 = i__;
                  cs[i__7].r = cc[i__8].r, cs[i__7].i = cc[i__8].i;
                  /* L30: */
                }
                ldcs = ldc;

                /*                          Call the subroutine. */

                if (*trace) {
                  cprcn1_(ntra, &nc, sname, iorder, transa, transb, &m, &n, &k,
                          &alpha, &lda, &ldb, &beta, &ldc, (ftnlen)12,
                          (ftnlen)1, (ftnlen)1);
                }
                if (*rewi) {
                  al__1.aerr = 0;
                  al__1.aunit = *ntra;
                  f_rew(&al__1);
                }
                ccgemm_(iorder, transa, transb, &m, &n, &k, &alpha, &aa[1],
                        &lda, &bb[1], &ldb, &beta, &cc[1], &ldc);

                /*                          Check if error-exit was taken
                 * incorrectly. */

                if (!infoc_1.ok) {
                  io___128.ciunit = *nout;
                  s_wsfe(&io___128);
                  e_wsfe();
                  *fatal = TRUE_;
                  goto L120;
                }

                /*                          See what data changed inside
                 * subroutines. */

                isame[0] = *(unsigned char *)transa == *(unsigned char *)tranas;
                isame[1] = *(unsigned char *)transb == *(unsigned char *)tranbs;
                isame[2] = ms == m;
                isame[3] = ns == n;
                isame[4] = ks == k;
                isame[5] = als.r == alpha.r && als.i == alpha.i;
                isame[6] = lce_(&as[1], &aa[1], &laa);
                isame[7] = ldas == lda;
                isame[8] = lce_(&bs[1], &bb[1], &lbb);
                isame[9] = ldbs == ldb;
                isame[10] = bls.r == beta.r && bls.i == beta.i;
                if (null) {
                  isame[11] = lce_(&cs[1], &cc[1], &lcc);
                } else {
                  isame[11] = lceres_("ge", " ", &m, &n, &cs[1], &cc[1], &ldc,
                                      (ftnlen)2, (ftnlen)1);
                }
                isame[12] = ldcs == ldc;

                /*                          If data was incorrectly changed,
                 * report */
                /*                          and return. */

                same = TRUE_;
                i__6 = nargs;
                for (i__ = 1; i__ <= i__6; ++i__) {
                  same = same && isame[i__ - 1];
                  if (!isame[i__ - 1]) {
                    io___131.ciunit = *nout;
                    s_wsfe(&io___131);
                    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
                    e_wsfe();
                  }
                  /* L40: */
                }
                if (!same) {
                  *fatal = TRUE_;
                  goto L120;
                }

                if (!null) {

                  /*                             Check the result. */

                  cmmch_(transa, transb, &m, &n, &k, &alpha, &a[a_offset], nmax,
                         &b[b_offset], nmax, &beta, &c__[c_offset], nmax,
                         &ct[1], &g[1], &cc[1], &ldc, eps, &err, fatal, nout,
                         &c_true, (ftnlen)1, (ftnlen)1);
                  errmax = max(errmax, err);
                  /*                             If got really bad answer,
                   * report and */
                  /*                             return. */
                  if (*fatal) {
                    goto L120;
                  }
                }

                /* L50: */
              }

              /* L60: */
            }

          L70:;
          }

        L80:;
        }

        /* L90: */
      }

    L100:;
    }

    /* L110: */
  }

  /*     Report result. */

  if (errmax < *thresh) {
    if (*iorder == 0) {
      io___133.ciunit = *nout;
      s_wsfe(&io___133);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      e_wsfe();
    }
    if (*iorder == 1) {
      io___134.ciunit = *nout;
      s_wsfe(&io___134);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      e_wsfe();
    }
  } else {
    if (*iorder == 0) {
      io___135.ciunit = *nout;
      s_wsfe(&io___135);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
      e_wsfe();
    }
    if (*iorder == 1) {
      io___136.ciunit = *nout;
      s_wsfe(&io___136);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
      e_wsfe();
    }
  }
  goto L130;

L120:
  io___137.ciunit = *nout;
  s_wsfe(&io___137);
  do_fio(&c__1, sname, (ftnlen)12);
  e_wsfe();
  cprcn1_(nout, &nc, sname, iorder, transa, transb, &m, &n, &k, &alpha, &lda,
          &ldb, &beta, &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);

L130:
  return 0;

  /* L9995: */

  /*     End of CCHK1. */

} /* cchk1_ */

/* Subroutine */ int cprcn1_(integer *nout, integer *nc, char *sname,
                             integer *iorder, char *transa, char *transb,
                             integer *m, integer *n, integer *k, complex *alpha,
                             integer *lda, integer *ldb, complex *beta,
                             integer *ldc, ftnlen sname_len, ftnlen transa_len,
                             ftnlen transb_len) {
  /* Format strings */
  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
                           "a14,\002,\002,a14,\002,\002)";
  static char fmt_9994[] =
      "(10x,3(i3,\002,\002),\002 (\002,f4.1,\002,\002"
      ",f4.1,\002) , A,\002,i3,\002, B,\002,i3,\002, (\002,f4.1,\002"
      ",\002,f4.1,\002) , C,\002,i3,\002).\002)";

  /* Builtin functions */
  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);

  /* Local variables */
  char crc[14], cta[14], ctb[14];

  /* Fortran I/O blocks */
  static cilist io___141 = {0, 0, 0, fmt_9995, 0};
  static cilist io___142 = {0, 0, 0, fmt_9994, 0};

  if (*(unsigned char *)transa == 'N') {
    s_copy(cta, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
  } else if (*(unsigned char *)transa == 'T') {
    s_copy(cta, "    CblasTrans", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(cta, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
  }
  if (*(unsigned char *)transb == 'N') {
    s_copy(ctb, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
  } else if (*(unsigned char *)transb == 'T') {
    s_copy(ctb, "    CblasTrans", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(ctb, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
  }
  if (*iorder == 1) {
    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
  }
  io___141.ciunit = *nout;
  s_wsfe(&io___141);
  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
  do_fio(&c__1, sname, (ftnlen)12);
  do_fio(&c__1, crc, (ftnlen)14);
  do_fio(&c__1, cta, (ftnlen)14);
  do_fio(&c__1, ctb, (ftnlen)14);
  e_wsfe();
  io___142.ciunit = *nout;
  s_wsfe(&io___142);
  do_fio(&c__1, (char *)&(*m), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*k), (ftnlen)sizeof(integer));
  do_fio(&c__2, (char *)&(*alpha), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*ldb), (ftnlen)sizeof(integer));
  do_fio(&c__2, (char *)&(*beta), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*ldc), (ftnlen)sizeof(integer));
  e_wsfe();
  return 0;
} /* cprcn1_ */

/* Subroutine */ int
cchk2_(char *sname, real *eps, real *thresh, integer *nout, integer *ntra,
       logical *trace, logical *rewi, logical *fatal, integer *nidim,
       integer *idim, integer *nalf, complex *alf, integer *nbet, complex *bet,
       integer *nmax, complex *a, complex *aa, complex *as, complex *b,
       complex *bb, complex *bs, complex *c__, complex *cc, complex *cs,
       complex *ct, real *g, integer *iorder, ftnlen sname_len) {
  /* Initialized data */

  static char ichs[2] = "LR";
  static char ichu[2] = "UL";

  /* Format strings */
  static char fmt_9994[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
                           "N VALID CALL *\002,\002******\002)";
  static char fmt_9998[] =
      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
  static char fmt_10000[] =
      "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
  static char fmt_10001[] =
      "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
  static char fmt_10002[] =
      "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
      "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
      "ECT *******\002)";
  static char fmt_10003[] =
      "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
      "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
      "ECT *******\002)";
  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
                           "BER:\002)";

  /* System generated locals */
  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2,
      i__3, i__4, i__5, i__6, i__7;
  alist al__1;

  /* Builtin functions */
  integer s_cmp(char *, char *, ftnlen, ftnlen), f_rew(alist *),
      s_wsfe(cilist *), e_wsfe(void), do_fio(integer *, char *, ftnlen);

  /* Local variables */
  integer i__, m, n, ia, ib, na, nc, im, in, ms, ns, laa, lbb, lda, lcc, ldb,
      ldc;
  extern logical lce_(complex *, complex *, integer *);
  integer ics;
  complex als, bls;
  integer icu;
  real err;
  complex beta;
  integer ldas, ldbs, ldcs;
  logical same;
  char side[1];
  logical conj, left, null;
  char uplo[1];
  extern /* Subroutine */ int cmake_(
      char *, char *, char *, integer *, integer *, complex *, integer *,
      complex *, integer *, logical *, complex *, ftnlen, ftnlen, ftnlen);
  complex alpha;
  extern /* Subroutine */ int cmmch_(
      char *, char *, integer *, integer *, integer *, complex *, complex *,
      integer *, complex *, integer *, complex *, complex *, integer *,
      complex *, real *, complex *, integer *, real *, real *, logical *,
      integer *, logical *, ftnlen, ftnlen);
  logical isame[13];
  char sides[1];
  integer nargs;
  logical reset;
  char uplos[1];
  extern /* Subroutine */ int cprcn2_(
      integer *, integer *, char *, integer *, char *, char *, integer *,
      integer *, complex *, integer *, integer *, complex *, integer *, ftnlen,
      ftnlen, ftnlen);
  extern void cchemm_(integer *, char *, char *, integer *, integer *, complex *,
              complex *, integer *, complex *, integer *, complex *, complex *,
              integer *);
  extern logical lceres_(char *, char *, integer *, integer *, complex *,
                         complex *, integer *, ftnlen, ftnlen);
  extern /* Subroutine */ void ccsymm_(
      integer *, char *, char *, integer *, integer *, complex *, complex *,
      integer *, complex *, integer *, complex *, complex *, integer *);
  real errmax;

  /* Fortran I/O blocks */
  static cilist io___181 = {0, 0, 0, fmt_9994, 0};
  static cilist io___184 = {0, 0, 0, fmt_9998, 0};
  static cilist io___186 = {0, 0, 0, fmt_10000, 0};
  static cilist io___187 = {0, 0, 0, fmt_10001, 0};
  static cilist io___188 = {0, 0, 0, fmt_10002, 0};
  static cilist io___189 = {0, 0, 0, fmt_10003, 0};
  static cilist io___190 = {0, 0, 0, fmt_9996, 0};

  /*  Tests CHEMM and CSYMM. */

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

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
  --bet;
  --g;
  --ct;
  --cs;
  --cc;
  c_dim1 = *nmax;
  c_offset = 1 + c_dim1;
  c__ -= c_offset;
  --bs;
  --bb;
  b_dim1 = *nmax;
  b_offset = 1 + b_dim1;
  b -= b_offset;
  --as;
  --aa;
  a_dim1 = *nmax;
  a_offset = 1 + a_dim1;
  a -= a_offset;

  /* Function Body */
  /*     .. Executable Statements .. */
  conj = s_cmp(sname + 7, "he", (ftnlen)2, (ftnlen)2) == 0;

  nargs = 12;
  nc = 0;
  reset = TRUE_;
  errmax = 0.f;

  i__1 = *nidim;
  for (im = 1; im <= i__1; ++im) {
    m = idim[im];

    i__2 = *nidim;
    for (in = 1; in <= i__2; ++in) {
      n = idim[in];
      /*           Set LDC to 1 more than minimum value if room. */
      ldc = m;
      if (ldc < *nmax) {
        ++ldc;
      }
      /*           Skip tests if not enough room. */
      if (ldc > *nmax) {
        goto L90;
      }
      lcc = ldc * n;
      null = n <= 0 || m <= 0;
      /*           Set LDB to 1 more than minimum value if room. */
      ldb = m;
      if (ldb < *nmax) {
        ++ldb;
      }
      /*           Skip tests if not enough room. */
      if (ldb > *nmax) {
        goto L90;
      }
      lbb = ldb * n;

      /*           Generate the matrix B. */

      cmake_("ge", " ", " ", &m, &n, &b[b_offset], nmax, &bb[1], &ldb, &reset,
             &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

      for (ics = 1; ics <= 2; ++ics) {
        *(unsigned char *)side = *(unsigned char *)&ichs[ics - 1];
        left = *(unsigned char *)side == 'L';

        if (left) {
          na = m;
        } else {
          na = n;
        }
        /*              Set LDA to 1 more than minimum value if room. */
        lda = na;
        if (lda < *nmax) {
          ++lda;
        }
        /*              Skip tests if not enough room. */
        if (lda > *nmax) {
          goto L80;
        }
        laa = lda * na;

        for (icu = 1; icu <= 2; ++icu) {
          *(unsigned char *)uplo = *(unsigned char *)&ichu[icu - 1];

          /*                 Generate the hermitian or symmetric matrix A. */

          cmake_(sname + 7, uplo, " ", &na, &na, &a[a_offset], nmax, &aa[1],
                 &lda, &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

          i__3 = *nalf;
          for (ia = 1; ia <= i__3; ++ia) {
            i__4 = ia;
            alpha.r = alf[i__4].r, alpha.i = alf[i__4].i;

            i__4 = *nbet;
            for (ib = 1; ib <= i__4; ++ib) {
              i__5 = ib;
              beta.r = bet[i__5].r, beta.i = bet[i__5].i;

              /*                       Generate the matrix C. */

              cmake_("ge", " ", " ", &m, &n, &c__[c_offset], nmax, &cc[1], &ldc,
                     &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

              ++nc;

              /*                       Save every datum before calling the */
              /*                       subroutine. */

              *(unsigned char *)sides = *(unsigned char *)side;
              *(unsigned char *)uplos = *(unsigned char *)uplo;
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
              i__5 = lbb;
              for (i__ = 1; i__ <= i__5; ++i__) {
                i__6 = i__;
                i__7 = i__;
                bs[i__6].r = bb[i__7].r, bs[i__6].i = bb[i__7].i;
                /* L20: */
              }
              ldbs = ldb;
              bls.r = beta.r, bls.i = beta.i;
              i__5 = lcc;
              for (i__ = 1; i__ <= i__5; ++i__) {
                i__6 = i__;
                i__7 = i__;
                cs[i__6].r = cc[i__7].r, cs[i__6].i = cc[i__7].i;
                /* L30: */
              }
              ldcs = ldc;

              /*                       Call the subroutine. */

              if (*trace) {
                cprcn2_(ntra, &nc, sname, iorder, side, uplo, &m, &n, &alpha,
                        &lda, &ldb, &beta, &ldc, (ftnlen)12, (ftnlen)1,
                        (ftnlen)1);
              }
              if (*rewi) {
                al__1.aerr = 0;
                al__1.aunit = *ntra;
                f_rew(&al__1);
              }
              if (conj) {
                cchemm_(iorder, side, uplo, &m, &n, &alpha, &aa[1], &lda,
                        &bb[1], &ldb, &beta, &cc[1], &ldc);
              } else {
                ccsymm_(iorder, side, uplo, &m, &n, &alpha, &aa[1], &lda,
                        &bb[1], &ldb, &beta, &cc[1], &ldc);
              }

              /*                       Check if error-exit was taken
               * incorrectly. */

              if (!infoc_1.ok) {
                io___181.ciunit = *nout;
                s_wsfe(&io___181);
                e_wsfe();
                *fatal = TRUE_;
                goto L110;
              }

              /*                       See what data changed inside subroutines.
               */

              isame[0] = *(unsigned char *)sides == *(unsigned char *)side;
              isame[1] = *(unsigned char *)uplos == *(unsigned char *)uplo;
              isame[2] = ms == m;
              isame[3] = ns == n;
              isame[4] = als.r == alpha.r && als.i == alpha.i;
              isame[5] = lce_(&as[1], &aa[1], &laa);
              isame[6] = ldas == lda;
              isame[7] = lce_(&bs[1], &bb[1], &lbb);
              isame[8] = ldbs == ldb;
              isame[9] = bls.r == beta.r && bls.i == beta.i;
              if (null) {
                isame[10] = lce_(&cs[1], &cc[1], &lcc);
              } else {
                isame[10] = lceres_("ge", " ", &m, &n, &cs[1], &cc[1], &ldc,
                                    (ftnlen)2, (ftnlen)1);
              }
              isame[11] = ldcs == ldc;

              /*                       If data was incorrectly changed, report
               * and */
              /*                       return. */

              same = TRUE_;
              i__5 = nargs;
              for (i__ = 1; i__ <= i__5; ++i__) {
                same = same && isame[i__ - 1];
                if (!isame[i__ - 1]) {
                  io___184.ciunit = *nout;
                  s_wsfe(&io___184);
                  do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
                  e_wsfe();
                }
                /* L40: */
              }
              if (!same) {
                *fatal = TRUE_;
                goto L110;
              }

              if (!null) {

                /*                          Check the result. */

                if (left) {
                  cmmch_("N", "N", &m, &n, &m, &alpha, &a[a_offset], nmax,
                         &b[b_offset], nmax, &beta, &c__[c_offset], nmax,
                         &ct[1], &g[1], &cc[1], &ldc, eps, &err, fatal, nout,
                         &c_true, (ftnlen)1, (ftnlen)1);
                } else {
                  cmmch_("N", "N", &m, &n, &n, &alpha, &b[b_offset], nmax,
                         &a[a_offset], nmax, &beta, &c__[c_offset], nmax,
                         &ct[1], &g[1], &cc[1], &ldc, eps, &err, fatal, nout,
                         &c_true, (ftnlen)1, (ftnlen)1);
                }
                errmax = max(errmax, err);
                /*                          If got really bad answer, report and
                 */
                /*                          return. */
                if (*fatal) {
                  goto L110;
                }
              }

              /* L50: */
            }

            /* L60: */
          }

          /* L70: */
        }

      L80:;
      }

    L90:;
    }

    /* L100: */
  }

  /*     Report result. */

  if (errmax < *thresh) {
    if (*iorder == 0) {
      io___186.ciunit = *nout;
      s_wsfe(&io___186);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      e_wsfe();
    }
    if (*iorder == 1) {
      io___187.ciunit = *nout;
      s_wsfe(&io___187);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      e_wsfe();
    }
  } else {
    if (*iorder == 0) {
      io___188.ciunit = *nout;
      s_wsfe(&io___188);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
      e_wsfe();
    }
    if (*iorder == 1) {
      io___189.ciunit = *nout;
      s_wsfe(&io___189);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
      e_wsfe();
    }
  }
  goto L120;

L110:
  io___190.ciunit = *nout;
  s_wsfe(&io___190);
  do_fio(&c__1, sname, (ftnlen)12);
  e_wsfe();
  cprcn2_(nout, &nc, sname, iorder, side, uplo, &m, &n, &alpha, &lda, &ldb,
          &beta, &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);

L120:
  return 0;

  /* L9995: */

  /*     End of CCHK2. */

} /* cchk2_ */

/* Subroutine */ int cprcn2_(integer *nout, integer *nc, char *sname,
                             integer *iorder, char *side, char *uplo,
                             integer *m, integer *n, complex *alpha,
                             integer *lda, integer *ldb, complex *beta,
                             integer *ldc, ftnlen sname_len, ftnlen side_len,
                             ftnlen uplo_len) {
  /* Format strings */
  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
                           "a14,\002,\002,a14,\002,\002)";
  static char fmt_9994[] =
      "(10x,2(i3,\002,\002),\002 (\002,f4.1,\002,\002"
      ",f4.1,\002), A,\002,i3,\002, B,\002,i3,\002, (\002,f4.1,\002,"
      "\002,f4.1,\002), \002,\002C,\002,i3,\002).\002)";

  /* Builtin functions */
  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);

  /* Local variables */
  char cs[14], cu[14], crc[14];

  /* Fortran I/O blocks */
  static cilist io___194 = {0, 0, 0, fmt_9995, 0};
  static cilist io___195 = {0, 0, 0, fmt_9994, 0};

  if (*(unsigned char *)side == 'L') {
    s_copy(cs, "     CblasLeft", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(cs, "    CblasRight", (ftnlen)14, (ftnlen)14);
  }
  if (*(unsigned char *)uplo == 'U') {
    s_copy(cu, "    CblasUpper", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(cu, "    CblasLower", (ftnlen)14, (ftnlen)14);
  }
  if (*iorder == 1) {
    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
  }
  io___194.ciunit = *nout;
  s_wsfe(&io___194);
  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
  do_fio(&c__1, sname, (ftnlen)12);
  do_fio(&c__1, crc, (ftnlen)14);
  do_fio(&c__1, cs, (ftnlen)14);
  do_fio(&c__1, cu, (ftnlen)14);
  e_wsfe();
  io___195.ciunit = *nout;
  s_wsfe(&io___195);
  do_fio(&c__1, (char *)&(*m), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
  do_fio(&c__2, (char *)&(*alpha), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*ldb), (ftnlen)sizeof(integer));
  do_fio(&c__2, (char *)&(*beta), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*ldc), (ftnlen)sizeof(integer));
  e_wsfe();
  return 0;
} /* cprcn2_ */

/* Subroutine */ int cchk3_(char *sname, real *eps, real *thresh, integer *nout,
                            integer *ntra, logical *trace, logical *rewi,
                            logical *fatal, integer *nidim, integer *idim,
                            integer *nalf, complex *alf, integer *nmax,
                            complex *a, complex *aa, complex *as, complex *b,
                            complex *bb, complex *bs, complex *ct, real *g,
                            complex *c__, integer *iorder, ftnlen sname_len) {
  /* Initialized data */

  static char ichu[2] = "UL";
  static char icht[3] = "NTC";
  static char ichd[2] = "UN";
  static char ichs[2] = "LR";

  /* Format strings */
  static char fmt_9994[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
                           "N VALID CALL *\002,\002******\002)";
  static char fmt_9998[] =
      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
  static char fmt_10000[] =
      "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
  static char fmt_10001[] =
      "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
  static char fmt_10002[] =
      "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
      "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
      "ECT *******\002)";
  static char fmt_10003[] =
      "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
      "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
      "ECT *******\002)";
  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
                           "BER:\002)";

  /* System generated locals */
  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2,
      i__3, i__4, i__5, i__6, i__7;
  complex q__1;
  alist al__1;

  /* Builtin functions */
  integer s_cmp(char *, char *, ftnlen, ftnlen), f_rew(alist *),
      s_wsfe(cilist *), e_wsfe(void), do_fio(integer *, char *, ftnlen);

  /* Local variables */
  integer i__, j, m, n, ia, na, nc, im, in, ms, ns, laa, icd, lbb, lda, ldb;
  extern logical lce_(complex *, complex *, integer *);
  integer ics;
  complex als;
  integer ict, icu;
  real err;
  char diag[1];
  integer ldas, ldbs;
  logical same;
  char side[1];
  logical left, null;
  char uplo[1];
  extern /* Subroutine */ int cmake_(
      char *, char *, char *, integer *, integer *, complex *, integer *,
      complex *, integer *, logical *, complex *, ftnlen, ftnlen, ftnlen);
  complex alpha;
  char diags[1];
  extern /* Subroutine */ int cmmch_(
      char *, char *, integer *, integer *, integer *, complex *, complex *,
      integer *, complex *, integer *, complex *, complex *, integer *,
      complex *, real *, complex *, integer *, real *, real *, logical *,
      integer *, logical *, ftnlen, ftnlen);
  logical isame[13];
  char sides[1];
  integer nargs;
  logical reset;
  char uplos[1];
  extern /* Subroutine */ int cprcn3_(
      integer *, integer *, char *, integer *, char *, char *, char *, char *,
      integer *, integer *, complex *, integer *, integer *, ftnlen, ftnlen,
      ftnlen, ftnlen, ftnlen);
  extern logical lceres_(char *, char *, integer *, integer *, complex *,
                         complex *, integer *, ftnlen, ftnlen);
  extern /* Subroutine */ void cctrmm_(
      integer *, char *, char *, char *, char *, integer *, integer *,
      complex *, complex *, integer *, complex *, integer *);
  char tranas[1], transa[1];
  extern /* Subroutine */ void cctrsm_(
      integer *, char *, char *, char *, char *, integer *, integer *,
      complex *, complex *, integer *, complex *, integer *);
  real errmax;

  /* Fortran I/O blocks */
  static cilist io___236 = {0, 0, 0, fmt_9994, 0};
  static cilist io___239 = {0, 0, 0, fmt_9998, 0};
  static cilist io___241 = {0, 0, 0, fmt_10000, 0};
  static cilist io___242 = {0, 0, 0, fmt_10001, 0};
  static cilist io___243 = {0, 0, 0, fmt_10002, 0};
  static cilist io___244 = {0, 0, 0, fmt_10003, 0};
  static cilist io___245 = {0, 0, 0, fmt_9996, 0};

  /*  Tests CTRMM and CTRSM. */

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

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
  c_dim1 = *nmax;
  c_offset = 1 + c_dim1;
  c__ -= c_offset;
  --g;
  --ct;
  --bs;
  --bb;
  b_dim1 = *nmax;
  b_offset = 1 + b_dim1;
  b -= b_offset;
  --as;
  --aa;
  a_dim1 = *nmax;
  a_offset = 1 + a_dim1;
  a -= a_offset;

  /* Function Body */
  /*     .. Executable Statements .. */

  nargs = 11;
  nc = 0;
  reset = TRUE_;
  errmax = 0.f;
  /*     Set up zero matrix for CMMCH. */
  i__1 = *nmax;
  for (j = 1; j <= i__1; ++j) {
    i__2 = *nmax;
    for (i__ = 1; i__ <= i__2; ++i__) {
      i__3 = i__ + j * c_dim1;
      c__[i__3].r = 0.f, c__[i__3].i = 0.f;
      /* L10: */
    }
    /* L20: */
  }

  i__1 = *nidim;
  for (im = 1; im <= i__1; ++im) {
    m = idim[im];

    i__2 = *nidim;
    for (in = 1; in <= i__2; ++in) {
      n = idim[in];
      /*           Set LDB to 1 more than minimum value if room. */
      ldb = m;
      if (ldb < *nmax) {
        ++ldb;
      }
      /*           Skip tests if not enough room. */
      if (ldb > *nmax) {
        goto L130;
      }
      lbb = ldb * n;
      null = m <= 0 || n <= 0;

      for (ics = 1; ics <= 2; ++ics) {
        *(unsigned char *)side = *(unsigned char *)&ichs[ics - 1];
        left = *(unsigned char *)side == 'L';
        if (left) {
          na = m;
        } else {
          na = n;
        }
        /*              Set LDA to 1 more than minimum value if room. */
        lda = na;
        if (lda < *nmax) {
          ++lda;
        }
        /*              Skip tests if not enough room. */
        if (lda > *nmax) {
          goto L130;
        }
        laa = lda * na;

        for (icu = 1; icu <= 2; ++icu) {
          *(unsigned char *)uplo = *(unsigned char *)&ichu[icu - 1];

          for (ict = 1; ict <= 3; ++ict) {
            *(unsigned char *)transa = *(unsigned char *)&icht[ict - 1];

            for (icd = 1; icd <= 2; ++icd) {
              *(unsigned char *)diag = *(unsigned char *)&ichd[icd - 1];

              i__3 = *nalf;
              for (ia = 1; ia <= i__3; ++ia) {
                i__4 = ia;
                alpha.r = alf[i__4].r, alpha.i = alf[i__4].i;

                /*                          Generate the matrix A. */

                cmake_("tr", uplo, diag, &na, &na, &a[a_offset], nmax, &aa[1],
                       &lda, &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

                /*                          Generate the matrix B. */

                cmake_("ge", " ", " ", &m, &n, &b[b_offset], nmax, &bb[1], &ldb,
                       &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

                ++nc;

                /*                          Save every datum before calling the
                 */
                /*                          subroutine. */

                *(unsigned char *)sides = *(unsigned char *)side;
                *(unsigned char *)uplos = *(unsigned char *)uplo;
                *(unsigned char *)tranas = *(unsigned char *)transa;
                *(unsigned char *)diags = *(unsigned char *)diag;
                ms = m;
                ns = n;
                als.r = alpha.r, als.i = alpha.i;
                i__4 = laa;
                for (i__ = 1; i__ <= i__4; ++i__) {
                  i__5 = i__;
                  i__6 = i__;
                  as[i__5].r = aa[i__6].r, as[i__5].i = aa[i__6].i;
                  /* L30: */
                }
                ldas = lda;
                i__4 = lbb;
                for (i__ = 1; i__ <= i__4; ++i__) {
                  i__5 = i__;
                  i__6 = i__;
                  bs[i__5].r = bb[i__6].r, bs[i__5].i = bb[i__6].i;
                  /* L40: */
                }
                ldbs = ldb;

                /*                          Call the subroutine. */

                if (s_cmp(sname + 9, "mm", (ftnlen)2, (ftnlen)2) == 0) {
                  if (*trace) {
                    cprcn3_(ntra, &nc, sname, iorder, side, uplo, transa, diag,
                            &m, &n, &alpha, &lda, &ldb, (ftnlen)12, (ftnlen)1,
                            (ftnlen)1, (ftnlen)1, (ftnlen)1);
                  }
                  if (*rewi) {
                    al__1.aerr = 0;
                    al__1.aunit = *ntra;
                    f_rew(&al__1);
                  }
                  cctrmm_(iorder, side, uplo, transa, diag, &m, &n, &alpha,
                          &aa[1], &lda, &bb[1], &ldb);
                } else if (s_cmp(sname + 9, "sm", (ftnlen)2, (ftnlen)2) == 0) {
                  if (*trace) {
                    cprcn3_(ntra, &nc, sname, iorder, side, uplo, transa, diag,
                            &m, &n, &alpha, &lda, &ldb, (ftnlen)12, (ftnlen)1,
                            (ftnlen)1, (ftnlen)1, (ftnlen)1);
                  }
                  if (*rewi) {
                    al__1.aerr = 0;
                    al__1.aunit = *ntra;
                    f_rew(&al__1);
                  }
                  cctrsm_(iorder, side, uplo, transa, diag, &m, &n, &alpha,
                          &aa[1], &lda, &bb[1], &ldb);
                }

                /*                          Check if error-exit was taken
                 * incorrectly. */

                if (!infoc_1.ok) {
                  io___236.ciunit = *nout;
                  s_wsfe(&io___236);
                  e_wsfe();
                  *fatal = TRUE_;
                  goto L150;
                }

                /*                          See what data changed inside
                 * subroutines. */

                isame[0] = *(unsigned char *)sides == *(unsigned char *)side;
                isame[1] = *(unsigned char *)uplos == *(unsigned char *)uplo;
                isame[2] = *(unsigned char *)tranas == *(unsigned char *)transa;
                isame[3] = *(unsigned char *)diags == *(unsigned char *)diag;
                isame[4] = ms == m;
                isame[5] = ns == n;
                isame[6] = als.r == alpha.r && als.i == alpha.i;
                isame[7] = lce_(&as[1], &aa[1], &laa);
                isame[8] = ldas == lda;
                if (null) {
                  isame[9] = lce_(&bs[1], &bb[1], &lbb);
                } else {
                  isame[9] = lceres_("ge", " ", &m, &n, &bs[1], &bb[1], &ldb,
                                     (ftnlen)2, (ftnlen)1);
                }
                isame[10] = ldbs == ldb;

                /*                          If data was incorrectly changed,
                 * report and */
                /*                          return. */

                same = TRUE_;
                i__4 = nargs;
                for (i__ = 1; i__ <= i__4; ++i__) {
                  same = same && isame[i__ - 1];
                  if (!isame[i__ - 1]) {
                    io___239.ciunit = *nout;
                    s_wsfe(&io___239);
                    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
                    e_wsfe();
                  }
                  /* L50: */
                }
                if (!same) {
                  *fatal = TRUE_;
                  goto L150;
                }

                if (!null) {
                  if (s_cmp(sname + 9, "mm", (ftnlen)2, (ftnlen)2) == 0) {

                    /*                                Check the result. */

                    if (left) {
                      cmmch_(transa, "N", &m, &n, &m, &alpha, &a[a_offset],
                             nmax, &b[b_offset], nmax, &c_b1, &c__[c_offset],
                             nmax, &ct[1], &g[1], &bb[1], &ldb, eps, &err,
                             fatal, nout, &c_true, (ftnlen)1, (ftnlen)1);
                    } else {
                      cmmch_("N", transa, &m, &n, &n, &alpha, &b[b_offset],
                             nmax, &a[a_offset], nmax, &c_b1, &c__[c_offset],
                             nmax, &ct[1], &g[1], &bb[1], &ldb, eps, &err,
                             fatal, nout, &c_true, (ftnlen)1, (ftnlen)1);
                    }
                  } else if (s_cmp(sname + 9, "sm", (ftnlen)2, (ftnlen)2) ==
                             0) {

                    /*                                Compute approximation to
                     * original */
                    /*                                matrix. */

                    i__4 = n;
                    for (j = 1; j <= i__4; ++j) {
                      i__5 = m;
                      for (i__ = 1; i__ <= i__5; ++i__) {
                        i__6 = i__ + j * c_dim1;
                        i__7 = i__ + (j - 1) * ldb;
                        c__[i__6].r = bb[i__7].r, c__[i__6].i = bb[i__7].i;
                        i__6 = i__ + (j - 1) * ldb;
                        i__7 = i__ + j * b_dim1;
                        q__1.r = alpha.r * b[i__7].r - alpha.i * b[i__7].i,
                        q__1.i = alpha.r * b[i__7].i + alpha.i * b[i__7].r;
                        bb[i__6].r = q__1.r, bb[i__6].i = q__1.i;
                        /* L60: */
                      }
                      /* L70: */
                    }

                    if (left) {
                      cmmch_(transa, "N", &m, &n, &m, &c_b2, &a[a_offset], nmax,
                             &c__[c_offset], nmax, &c_b1, &b[b_offset], nmax,
                             &ct[1], &g[1], &bb[1], &ldb, eps, &err, fatal,
                             nout, &c_false, (ftnlen)1, (ftnlen)1);
                    } else {
                      cmmch_("N", transa, &m, &n, &n, &c_b2, &c__[c_offset],
                             nmax, &a[a_offset], nmax, &c_b1, &b[b_offset],
                             nmax, &ct[1], &g[1], &bb[1], &ldb, eps, &err,
                             fatal, nout, &c_false, (ftnlen)1, (ftnlen)1);
                    }
                  }
                  errmax = max(errmax, err);
                  /*                             If got really bad answer,
                   * report and */
                  /*                             return. */
                  if (*fatal) {
                    goto L150;
                  }
                }

                /* L80: */
              }

              /* L90: */
            }

            /* L100: */
          }

          /* L110: */
        }

        /* L120: */
      }

    L130:;
    }

    /* L140: */
  }

  /*     Report result. */

  if (errmax < *thresh) {
    if (*iorder == 0) {
      io___241.ciunit = *nout;
      s_wsfe(&io___241);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      e_wsfe();
    }
    if (*iorder == 1) {
      io___242.ciunit = *nout;
      s_wsfe(&io___242);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      e_wsfe();
    }
  } else {
    if (*iorder == 0) {
      io___243.ciunit = *nout;
      s_wsfe(&io___243);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
      e_wsfe();
    }
    if (*iorder == 1) {
      io___244.ciunit = *nout;
      s_wsfe(&io___244);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
      e_wsfe();
    }
  }
  goto L160;

L150:
  io___245.ciunit = *nout;
  s_wsfe(&io___245);
  do_fio(&c__1, sname, (ftnlen)12);
  e_wsfe();
  cprcn3_(ntra, &nc, sname, iorder, side, uplo, transa, diag, &m, &n, &alpha,
          &lda, &ldb, (ftnlen)12, (ftnlen)1, (ftnlen)1, (ftnlen)1, (ftnlen)1);

L160:
  return 0;

  /* L9995: */

  /*     End of CCHK3. */

} /* cchk3_ */

/* Subroutine */ int cprcn3_(integer *nout, integer *nc, char *sname,
                             integer *iorder, char *side, char *uplo,
                             char *transa, char *diag, integer *m, integer *n,
                             complex *alpha, integer *lda, integer *ldb,
                             ftnlen sname_len, ftnlen side_len, ftnlen uplo_len,
                             ftnlen transa_len, ftnlen diag_len) {
  /* Format strings */
  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
                           "a14,\002,\002,a14,\002,\002)";
  static char fmt_9994[] =
      "(10x,2(a14,\002,\002),2(i3,\002,\002),\002 "
      "(\002,f4.1,\002,\002,f4.1,\002), A,\002,i3,\002, B,\002,i3,\002)."
      "\002)";

  /* Builtin functions */
  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);

  /* Local variables */
  char ca[14], cd[14], cs[14], cu[14], crc[14];

  /* Fortran I/O blocks */
  static cilist io___251 = {0, 0, 0, fmt_9995, 0};
  static cilist io___252 = {0, 0, 0, fmt_9994, 0};

  if (*(unsigned char *)side == 'L') {
    s_copy(cs, "     CblasLeft", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(cs, "    CblasRight", (ftnlen)14, (ftnlen)14);
  }
  if (*(unsigned char *)uplo == 'U') {
    s_copy(cu, "    CblasUpper", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(cu, "    CblasLower", (ftnlen)14, (ftnlen)14);
  }
  if (*(unsigned char *)transa == 'N') {
    s_copy(ca, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
  } else if (*(unsigned char *)transa == 'T') {
    s_copy(ca, "    CblasTrans", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(ca, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
  }
  if (*(unsigned char *)diag == 'N') {
    s_copy(cd, "  CblasNonUnit", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(cd, "     CblasUnit", (ftnlen)14, (ftnlen)14);
  }
  if (*iorder == 1) {
    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
  }
  io___251.ciunit = *nout;
  s_wsfe(&io___251);
  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
  do_fio(&c__1, sname, (ftnlen)12);
  do_fio(&c__1, crc, (ftnlen)14);
  do_fio(&c__1, cs, (ftnlen)14);
  do_fio(&c__1, cu, (ftnlen)14);
  e_wsfe();
  io___252.ciunit = *nout;
  s_wsfe(&io___252);
  do_fio(&c__1, ca, (ftnlen)14);
  do_fio(&c__1, cd, (ftnlen)14);
  do_fio(&c__1, (char *)&(*m), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
  do_fio(&c__2, (char *)&(*alpha), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*ldb), (ftnlen)sizeof(integer));
  e_wsfe();
  return 0;
} /* cprcn3_ */

/* Subroutine */ int
cchk4_(char *sname, real *eps, real *thresh, integer *nout, integer *ntra,
       logical *trace, logical *rewi, logical *fatal, integer *nidim,
       integer *idim, integer *nalf, complex *alf, integer *nbet, complex *bet,
       integer *nmax, complex *a, complex *aa, complex *as, complex *b,
       complex *bb, complex *bs, complex *c__, complex *cc, complex *cs,
       complex *ct, real *g, integer *iorder, ftnlen sname_len) {
  /* Initialized data */

  static char icht[2] = "NC";
  static char ichu[2] = "UL";

  /* Format strings */
  static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
                           "N VALID CALL *\002,\002******\002)";
  static char fmt_9998[] =
      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
  static char fmt_10000[] =
      "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
  static char fmt_10001[] =
      "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
  static char fmt_10002[] =
      "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
      "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
      "ECT *******\002)";
  static char fmt_10003[] =
      "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
      "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
      "ECT *******\002)";
  static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
                           " \002,i3)";
  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
                           "BER:\002)";

  /* System generated locals */
  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2,
      i__3, i__4, i__5, i__6, i__7;
  complex q__1;
  alist al__1;

  /* Builtin functions */
  integer s_cmp(char *, char *, ftnlen, ftnlen), f_rew(alist *),
      s_wsfe(cilist *), e_wsfe(void), do_fio(integer *, char *, ftnlen);

  /* Local variables */
  integer i__, j, k, n, ia, ib, jc, ma, na, nc, ik, in, jj, lj, ks, ns, laa,
      lda, lcc, ldc;
  extern logical lce_(complex *, complex *, integer *);
  complex als;
  integer ict, icu;
  real err;
  complex beta;
  integer ldas, ldcs;
  logical same, conj;
  complex bets;
  real rals;
  logical tran, null;
  char uplo[1];
  extern /* Subroutine */ int cmake_(
      char *, char *, char *, integer *, integer *, complex *, integer *,
      complex *, integer *, logical *, complex *, ftnlen, ftnlen, ftnlen);
  complex alpha;
  extern /* Subroutine */ int cmmch_(
      char *, char *, integer *, integer *, integer *, complex *, complex *,
      integer *, complex *, integer *, complex *, complex *, integer *,
      complex *, real *, complex *, integer *, real *, real *, logical *,
      integer *, logical *, ftnlen, ftnlen);
  real rbeta;
  logical isame[13];
  integer nargs;
  real rbets;
  logical reset;
  char trans[1];
  logical upper;
  char uplos[1];
  extern /* Subroutine */ int cprcn4_(integer *, integer *, char *, integer *,
                                      char *, char *, integer *, integer *,
                                      complex *, integer *, complex *,
                                      integer *, ftnlen, ftnlen, ftnlen),
      cprcn6_(integer *, integer *, char *, integer *, char *, char *,
              integer *, integer *, real *, integer *, real *, integer *,
              ftnlen, ftnlen, ftnlen);
  extern void ccherk_(integer *, char *, char *, integer *, integer *, real *,
              complex *, integer *, real *, complex *, integer *);
  real ralpha;
  extern logical lceres_(char *, char *, integer *, integer *, complex *,
                         complex *, integer *, ftnlen, ftnlen);
  real errmax;
  extern /* Subroutine */ void ccsyrk_(
      integer *, char *, char *, integer *, integer *, complex *, complex *,
      integer *, complex *, complex *, integer *);
  char transs[1], transt[1];

  /* Fortran I/O blocks */
  static cilist io___294 = {0, 0, 0, fmt_9992, 0};
  static cilist io___297 = {0, 0, 0, fmt_9998, 0};
  static cilist io___304 = {0, 0, 0, fmt_10000, 0};
  static cilist io___305 = {0, 0, 0, fmt_10001, 0};
  static cilist io___306 = {0, 0, 0, fmt_10002, 0};
  static cilist io___307 = {0, 0, 0, fmt_10003, 0};
  static cilist io___308 = {0, 0, 0, fmt_9995, 0};
  static cilist io___309 = {0, 0, 0, fmt_9996, 0};

  /*  Tests CHERK and CSYRK. */

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

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
  --bet;
  --g;
  --ct;
  --cs;
  --cc;
  c_dim1 = *nmax;
  c_offset = 1 + c_dim1;
  c__ -= c_offset;
  --bs;
  --bb;
  b_dim1 = *nmax;
  b_offset = 1 + b_dim1;
  b -= b_offset;
  --as;
  --aa;
  a_dim1 = *nmax;
  a_offset = 1 + a_dim1;
  a -= a_offset;

  /* Function Body */
  /*     .. Executable Statements .. */
  conj = s_cmp(sname + 7, "he", (ftnlen)2, (ftnlen)2) == 0;

  nargs = 10;
  nc = 0;
  reset = TRUE_;
  errmax = 0.f;

  i__1 = *nidim;
  for (in = 1; in <= i__1; ++in) {
    n = idim[in];
    /*        Set LDC to 1 more than minimum value if room. */
    ldc = n;
    if (ldc < *nmax) {
      ++ldc;
    }
    /*        Skip tests if not enough room. */
    if (ldc > *nmax) {
      goto L100;
    }
    lcc = ldc * n;

    i__2 = *nidim;
    for (ik = 1; ik <= i__2; ++ik) {
      k = idim[ik];

      for (ict = 1; ict <= 2; ++ict) {
        *(unsigned char *)trans = *(unsigned char *)&icht[ict - 1];
        tran = *(unsigned char *)trans == 'C';
        if (tran && !conj) {
          *(unsigned char *)trans = 'T';
        }
        if (tran) {
          ma = k;
          na = n;
        } else {
          ma = n;
          na = k;
        }
        /*              Set LDA to 1 more than minimum value if room. */
        lda = ma;
        if (lda < *nmax) {
          ++lda;
        }
        /*              Skip tests if not enough room. */
        if (lda > *nmax) {
          goto L80;
        }
        laa = lda * na;

        /*              Generate the matrix A. */

        cmake_("ge", " ", " ", &ma, &na, &a[a_offset], nmax, &aa[1], &lda,
               &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

        for (icu = 1; icu <= 2; ++icu) {
          *(unsigned char *)uplo = *(unsigned char *)&ichu[icu - 1];
          upper = *(unsigned char *)uplo == 'U';

          i__3 = *nalf;
          for (ia = 1; ia <= i__3; ++ia) {
            i__4 = ia;
            alpha.r = alf[i__4].r, alpha.i = alf[i__4].i;
            if (conj) {
              ralpha = alpha.r;
              q__1.r = ralpha, q__1.i = 0.f;
              alpha.r = q__1.r, alpha.i = q__1.i;
            }

            i__4 = *nbet;
            for (ib = 1; ib <= i__4; ++ib) {
              i__5 = ib;
              beta.r = bet[i__5].r, beta.i = bet[i__5].i;
              if (conj) {
                rbeta = beta.r;
                q__1.r = rbeta, q__1.i = 0.f;
                beta.r = q__1.r, beta.i = q__1.i;
              }
              null = n <= 0;
              if (conj) {
                null = null || (k <= 0 || ralpha == 0.f) && rbeta == 1.f;
              }

              /*                       Generate the matrix C. */

              cmake_(sname + 7, uplo, " ", &n, &n, &c__[c_offset], nmax, &cc[1],
                     &ldc, &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

              ++nc;

              /*                       Save every datum before calling the
               * subroutine. */

              *(unsigned char *)uplos = *(unsigned char *)uplo;
              *(unsigned char *)transs = *(unsigned char *)trans;
              ns = n;
              ks = k;
              if (conj) {
                rals = ralpha;
              } else {
                als.r = alpha.r, als.i = alpha.i;
              }
              i__5 = laa;
              for (i__ = 1; i__ <= i__5; ++i__) {
                i__6 = i__;
                i__7 = i__;
                as[i__6].r = aa[i__7].r, as[i__6].i = aa[i__7].i;
                /* L10: */
              }
              ldas = lda;
              if (conj) {
                rbets = rbeta;
              } else {
                bets.r = beta.r, bets.i = beta.i;
              }
              i__5 = lcc;
              for (i__ = 1; i__ <= i__5; ++i__) {
                i__6 = i__;
                i__7 = i__;
                cs[i__6].r = cc[i__7].r, cs[i__6].i = cc[i__7].i;
                /* L20: */
              }
              ldcs = ldc;

              /*                       Call the subroutine. */

              if (conj) {
                if (*trace) {
                  cprcn6_(ntra, &nc, sname, iorder, uplo, trans, &n, &k,
                          &ralpha, &lda, &rbeta, &ldc, (ftnlen)12, (ftnlen)1,
                          (ftnlen)1);
                }
                if (*rewi) {
                  al__1.aerr = 0;
                  al__1.aunit = *ntra;
                  f_rew(&al__1);
                }
                ccherk_(iorder, uplo, trans, &n, &k, &ralpha, &aa[1], &lda,
                        &rbeta, &cc[1], &ldc);
              } else {
                if (*trace) {
                  cprcn4_(ntra, &nc, sname, iorder, uplo, trans, &n, &k, &alpha,
                          &lda, &beta, &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);
                }
                if (*rewi) {
                  al__1.aerr = 0;
                  al__1.aunit = *ntra;
                  f_rew(&al__1);
                }
                ccsyrk_(iorder, uplo, trans, &n, &k, &alpha, &aa[1], &lda,
                        &beta, &cc[1], &ldc);
              }

              /*                       Check if error-exit was taken
               * incorrectly. */

              if (!infoc_1.ok) {
                io___294.ciunit = *nout;
                s_wsfe(&io___294);
                e_wsfe();
                *fatal = TRUE_;
                goto L120;
              }

              /*                       See what data changed inside subroutines.
               */

              isame[0] = *(unsigned char *)uplos == *(unsigned char *)uplo;
              isame[1] = *(unsigned char *)transs == *(unsigned char *)trans;
              isame[2] = ns == n;
              isame[3] = ks == k;
              if (conj) {
                isame[4] = rals == ralpha;
              } else {
                isame[4] = als.r == alpha.r && als.i == alpha.i;
              }
              isame[5] = lce_(&as[1], &aa[1], &laa);
              isame[6] = ldas == lda;
              if (conj) {
                isame[7] = rbets == rbeta;
              } else {
                isame[7] = bets.r == beta.r && bets.i == beta.i;
              }
              if (null) {
                isame[8] = lce_(&cs[1], &cc[1], &lcc);
              } else {
                isame[8] = lceres_(sname + 7, uplo, &n, &n, &cs[1], &cc[1],
                                   &ldc, (ftnlen)2, (ftnlen)1);
              }
              isame[9] = ldcs == ldc;

              /*                       If data was incorrectly changed, report
               * and */
              /*                       return. */

              same = TRUE_;
              i__5 = nargs;
              for (i__ = 1; i__ <= i__5; ++i__) {
                same = same && isame[i__ - 1];
                if (!isame[i__ - 1]) {
                  io___297.ciunit = *nout;
                  s_wsfe(&io___297);
                  do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
                  e_wsfe();
                }
                /* L30: */
              }
              if (!same) {
                *fatal = TRUE_;
                goto L120;
              }

              if (!null) {

                /*                          Check the result column by column.
                 */

                if (conj) {
                  *(unsigned char *)transt = 'C';
                } else {
                  *(unsigned char *)transt = 'T';
                }
                jc = 1;
                i__5 = n;
                for (j = 1; j <= i__5; ++j) {
                  if (upper) {
                    jj = 1;
                    lj = j;
                  } else {
                    jj = j;
                    lj = n - j + 1;
                  }
                  if (tran) {
                    cmmch_(transt, "N", &lj, &c__1, &k, &alpha,
                           &a[jj * a_dim1 + 1], nmax, &a[j * a_dim1 + 1], nmax,
                           &beta, &c__[jj + j * c_dim1], nmax, &ct[1], &g[1],
                           &cc[jc], &ldc, eps, &err, fatal, nout, &c_true,
                           (ftnlen)1, (ftnlen)1);
                  } else {
                    cmmch_("N", transt, &lj, &c__1, &k, &alpha, &a[jj + a_dim1],
                           nmax, &a[j + a_dim1], nmax, &beta,
                           &c__[jj + j * c_dim1], nmax, &ct[1], &g[1], &cc[jc],
                           &ldc, eps, &err, fatal, nout, &c_true, (ftnlen)1,
                           (ftnlen)1);
                  }
                  if (upper) {
                    jc += ldc;
                  } else {
                    jc = jc + ldc + 1;
                  }
                  errmax = max(errmax, err);
                  /*                             If got really bad answer,
                   * report and */
                  /*                             return. */
                  if (*fatal) {
                    goto L110;
                  }
                  /* L40: */
                }
              }

              /* L50: */
            }

            /* L60: */
          }

          /* L70: */
        }

      L80:;
      }

      /* L90: */
    }

  L100:;
  }

  /*     Report result. */

  if (errmax < *thresh) {
    if (*iorder == 0) {
      io___304.ciunit = *nout;
      s_wsfe(&io___304);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      e_wsfe();
    }
    if (*iorder == 1) {
      io___305.ciunit = *nout;
      s_wsfe(&io___305);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      e_wsfe();
    }
  } else {
    if (*iorder == 0) {
      io___306.ciunit = *nout;
      s_wsfe(&io___306);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
      e_wsfe();
    }
    if (*iorder == 1) {
      io___307.ciunit = *nout;
      s_wsfe(&io___307);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
      e_wsfe();
    }
  }
  goto L130;

L110:
  if (n > 1) {
    io___308.ciunit = *nout;
    s_wsfe(&io___308);
    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
    e_wsfe();
  }

L120:
  io___309.ciunit = *nout;
  s_wsfe(&io___309);
  do_fio(&c__1, sname, (ftnlen)12);
  e_wsfe();
  if (conj) {
    cprcn6_(nout, &nc, sname, iorder, uplo, trans, &n, &k, &ralpha, &lda,
            &rbeta, &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);
  } else {
    cprcn4_(nout, &nc, sname, iorder, uplo, trans, &n, &k, &alpha, &lda, &beta,
            &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);
  }

L130:
  return 0;

  /* L9994: */
  /* L9993: */

  /*     End of CCHK4. */

} /* cchk4_ */

/* Subroutine */ int cprcn4_(integer *nout, integer *nc, char *sname,
                             integer *iorder, char *uplo, char *transa,
                             integer *n, integer *k, complex *alpha,
                             integer *lda, complex *beta, integer *ldc,
                             ftnlen sname_len, ftnlen uplo_len,
                             ftnlen transa_len) {
  /* Format strings */
  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
                           "\002))";
  static char fmt_9994[] =
      "(10x,2(i3,\002,\002),\002 (\002,f4.1,\002,\002"
      ",f4.1,\002), A,\002,i3,\002, (\002,f4.1,\002,\002,f4.1,\002), C"
      ",\002,i3,\002).\002)";

  /* Builtin functions */
  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);

  /* Local variables */
  char ca[14], cu[14], crc[14];

  /* Fortran I/O blocks */
  static cilist io___313 = {0, 0, 0, fmt_9995, 0};
  static cilist io___314 = {0, 0, 0, fmt_9994, 0};

  if (*(unsigned char *)uplo == 'U') {
    s_copy(cu, "    CblasUpper", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(cu, "    CblasLower", (ftnlen)14, (ftnlen)14);
  }
  if (*(unsigned char *)transa == 'N') {
    s_copy(ca, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
  } else if (*(unsigned char *)transa == 'T') {
    s_copy(ca, "    CblasTrans", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(ca, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
  }
  if (*iorder == 1) {
    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
  }
  io___313.ciunit = *nout;
  s_wsfe(&io___313);
  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
  do_fio(&c__1, sname, (ftnlen)12);
  do_fio(&c__1, crc, (ftnlen)14);
  do_fio(&c__1, cu, (ftnlen)14);
  do_fio(&c__1, ca, (ftnlen)14);
  e_wsfe();
  io___314.ciunit = *nout;
  s_wsfe(&io___314);
  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*k), (ftnlen)sizeof(integer));
  do_fio(&c__2, (char *)&(*alpha), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
  do_fio(&c__2, (char *)&(*beta), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*ldc), (ftnlen)sizeof(integer));
  e_wsfe();
  return 0;
} /* cprcn4_ */

/* Subroutine */ int cprcn6_(integer *nout, integer *nc, char *sname,
                             integer *iorder, char *uplo, char *transa,
                             integer *n, integer *k, real *alpha, integer *lda,
                             real *beta, integer *ldc, ftnlen sname_len,
                             ftnlen uplo_len, ftnlen transa_len) {
  /* Format strings */
  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
                           "\002))";
  static char fmt_9994[] = "(10x,2(i3,\002,\002),f4.1,\002, A,\002,i3"
                           ",\002,\002,f4.1,\002, C,\002,i3,\002).\002)";

  /* Builtin functions */
  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);

  /* Local variables */
  char ca[14], cu[14], crc[14];

  /* Fortran I/O blocks */
  static cilist io___318 = {0, 0, 0, fmt_9995, 0};
  static cilist io___319 = {0, 0, 0, fmt_9994, 0};

  if (*(unsigned char *)uplo == 'U') {
    s_copy(cu, "    CblasUpper", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(cu, "    CblasLower", (ftnlen)14, (ftnlen)14);
  }
  if (*(unsigned char *)transa == 'N') {
    s_copy(ca, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
  } else if (*(unsigned char *)transa == 'T') {
    s_copy(ca, "    CblasTrans", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(ca, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
  }
  if (*iorder == 1) {
    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
  }
  io___318.ciunit = *nout;
  s_wsfe(&io___318);
  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
  do_fio(&c__1, sname, (ftnlen)12);
  do_fio(&c__1, crc, (ftnlen)14);
  do_fio(&c__1, cu, (ftnlen)14);
  do_fio(&c__1, ca, (ftnlen)14);
  e_wsfe();
  io___319.ciunit = *nout;
  s_wsfe(&io___319);
  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*k), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*alpha), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*beta), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*ldc), (ftnlen)sizeof(integer));
  e_wsfe();
  return 0;
} /* cprcn6_ */

/* Subroutine */ int
cchk5_(char *sname, real *eps, real *thresh, integer *nout, integer *ntra,
       logical *trace, logical *rewi, logical *fatal, integer *nidim,
       integer *idim, integer *nalf, complex *alf, integer *nbet, complex *bet,
       integer *nmax, complex *ab, complex *aa, complex *as, complex *bb,
       complex *bs, complex *c__, complex *cc, complex *cs, complex *ct,
       real *g, complex *w, integer *iorder, ftnlen sname_len) {
  /* Initialized data */

  static char icht[2] = "NC";
  static char ichu[2] = "UL";

  /* Format strings */
  static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
                           "N VALID CALL *\002,\002******\002)";
  static char fmt_9998[] =
      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
  static char fmt_10000[] =
      "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
  static char fmt_10001[] =
      "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
  static char fmt_10002[] =
      "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
      "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
      "ECT *******\002)";
  static char fmt_10003[] =
      "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
      "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
      "ECT *******\002)";
  static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
                           " \002,i3)";
  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
                           "BER:\002)";

  /* System generated locals */
  integer c_dim1, c_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7, i__8;
  complex q__1, q__2;
  alist al__1;

  /* Builtin functions */
  integer s_cmp(char *, char *, ftnlen, ftnlen), f_rew(alist *),
      s_wsfe(cilist *), e_wsfe(void), do_fio(integer *, char *, ftnlen);
  void r_cnjg(complex *, complex *);

  /* Local variables */
  integer i__, j, k, n, ia, ib, jc, ma, na, nc, ik, in, jj, lj, ks, ns, laa,
      lbb, lda, lcc, ldb, ldc;
  extern logical lce_(complex *, complex *, integer *);
  complex als;
  integer ict, icu;
  real err;
  integer jjab;
  complex beta;
  integer ldas, ldbs, ldcs;
  logical same, conj;
  complex bets;
  logical tran, null;
  char uplo[1];
  extern /* Subroutine */ int cmake_(
      char *, char *, char *, integer *, integer *, complex *, integer *,
      complex *, integer *, logical *, complex *, ftnlen, ftnlen, ftnlen);
  complex alpha;
  extern /* Subroutine */ int cmmch_(
      char *, char *, integer *, integer *, integer *, complex *, complex *,
      integer *, complex *, integer *, complex *, complex *, integer *,
      complex *, real *, complex *, integer *, real *, real *, logical *,
      integer *, logical *, ftnlen, ftnlen);
  real rbeta;
  logical isame[13];
  integer nargs;
  real rbets;
  logical reset;
  char trans[1];
  logical upper;
  char uplos[1];
  extern /* Subroutine */ int cprcn5_(
      integer *, integer *, char *, integer *, char *, char *, integer *,
      integer *, complex *, integer *, integer *, complex *, integer *, ftnlen,
      ftnlen, ftnlen),
      cprcn7_(integer *, integer *, char *, integer *, char *, char *,
              integer *, integer *, complex *, integer *, integer *, real *,
              integer *, ftnlen, ftnlen, ftnlen);
  extern logical lceres_(char *, char *, integer *, integer *, complex *,
                         complex *, integer *, ftnlen, ftnlen);
  real errmax;
  char transs[1], transt[1];
  extern /* Subroutine */ void ccher2k_(integer *, char *, char *, integer *,
                                        integer *, complex *, complex *,
                                        integer *, complex *, integer *, real *,
                                        complex *, integer *);
  extern void ccsyr2k_(integer *, char *, char *, integer *, integer *, complex *,
                       complex *, integer *, complex *, integer *, complex *, complex *,
                       integer *);

  /* Fortran I/O blocks */
  static cilist io___362 = {0, 0, 0, fmt_9992, 0};
  static cilist io___365 = {0, 0, 0, fmt_9998, 0};
  static cilist io___373 = {0, 0, 0, fmt_10000, 0};
  static cilist io___374 = {0, 0, 0, fmt_10001, 0};
  static cilist io___375 = {0, 0, 0, fmt_10002, 0};
  static cilist io___376 = {0, 0, 0, fmt_10003, 0};
  static cilist io___377 = {0, 0, 0, fmt_9995, 0};
  static cilist io___378 = {0, 0, 0, fmt_9996, 0};

  /*  Tests CHER2K and CSYR2K. */

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

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
  --bet;
  --w;
  --g;
  --ct;
  --cs;
  --cc;
  c_dim1 = *nmax;
  c_offset = 1 + c_dim1;
  c__ -= c_offset;
  --bs;
  --bb;
  --as;
  --aa;
  --ab;

  /* Function Body */
  /*     .. Executable Statements .. */
  conj = s_cmp(sname + 7, "he", (ftnlen)2, (ftnlen)2) == 0;

  nargs = 12;
  nc = 0;
  reset = TRUE_;
  errmax = 0.f;

  i__1 = *nidim;
  for (in = 1; in <= i__1; ++in) {
    n = idim[in];
    /*        Set LDC to 1 more than minimum value if room. */
    ldc = n;
    if (ldc < *nmax) {
      ++ldc;
    }
    /*        Skip tests if not enough room. */
    if (ldc > *nmax) {
      goto L130;
    }
    lcc = ldc * n;

    i__2 = *nidim;
    for (ik = 1; ik <= i__2; ++ik) {
      k = idim[ik];

      for (ict = 1; ict <= 2; ++ict) {
        *(unsigned char *)trans = *(unsigned char *)&icht[ict - 1];
        tran = *(unsigned char *)trans == 'C';
        if (tran && !conj) {
          *(unsigned char *)trans = 'T';
        }
        if (tran) {
          ma = k;
          na = n;
        } else {
          ma = n;
          na = k;
        }
        /*              Set LDA to 1 more than minimum value if room. */
        lda = ma;
        if (lda < *nmax) {
          ++lda;
        }
        /*              Skip tests if not enough room. */
        if (lda > *nmax) {
          goto L110;
        }
        laa = lda * na;

        /*              Generate the matrix A. */

        if (tran) {
          i__3 = *nmax << 1;
          cmake_("ge", " ", " ", &ma, &na, &ab[1], &i__3, &aa[1], &lda, &reset,
                 &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);
        } else {
          cmake_("ge", " ", " ", &ma, &na, &ab[1], nmax, &aa[1], &lda, &reset,
                 &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);
        }

        /*              Generate the matrix B. */

        ldb = lda;
        lbb = laa;
        if (tran) {
          i__3 = *nmax << 1;
          cmake_("ge", " ", " ", &ma, &na, &ab[k + 1], &i__3, &bb[1], &ldb,
                 &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);
        } else {
          cmake_("ge", " ", " ", &ma, &na, &ab[k * *nmax + 1], nmax, &bb[1],
                 &ldb, &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);
        }

        for (icu = 1; icu <= 2; ++icu) {
          *(unsigned char *)uplo = *(unsigned char *)&ichu[icu - 1];
          upper = *(unsigned char *)uplo == 'U';

          i__3 = *nalf;
          for (ia = 1; ia <= i__3; ++ia) {
            i__4 = ia;
            alpha.r = alf[i__4].r, alpha.i = alf[i__4].i;

            i__4 = *nbet;
            for (ib = 1; ib <= i__4; ++ib) {
              i__5 = ib;
              beta.r = bet[i__5].r, beta.i = bet[i__5].i;
              if (conj) {
                rbeta = beta.r;
                q__1.r = rbeta, q__1.i = 0.f;
                beta.r = q__1.r, beta.i = q__1.i;
              }
              null = n <= 0;
              if (conj) {
                null = null || (k <= 0 || alpha.r == 0.f && alpha.i == 0.f) &&
                                   rbeta == 1.f;
              }

              /*                       Generate the matrix C. */

              cmake_(sname + 7, uplo, " ", &n, &n, &c__[c_offset], nmax, &cc[1],
                     &ldc, &reset, &c_b1, (ftnlen)2, (ftnlen)1, (ftnlen)1);

              ++nc;

              /*                       Save every datum before calling the
               * subroutine. */

              *(unsigned char *)uplos = *(unsigned char *)uplo;
              *(unsigned char *)transs = *(unsigned char *)trans;
              ns = n;
              ks = k;
              als.r = alpha.r, als.i = alpha.i;
              i__5 = laa;
              for (i__ = 1; i__ <= i__5; ++i__) {
                i__6 = i__;
                i__7 = i__;
                as[i__6].r = aa[i__7].r, as[i__6].i = aa[i__7].i;
                /* L10: */
              }
              ldas = lda;
              i__5 = lbb;
              for (i__ = 1; i__ <= i__5; ++i__) {
                i__6 = i__;
                i__7 = i__;
                bs[i__6].r = bb[i__7].r, bs[i__6].i = bb[i__7].i;
                /* L20: */
              }
              ldbs = ldb;
              if (conj) {
                rbets = rbeta;
              } else {
                bets.r = beta.r, bets.i = beta.i;
              }
              i__5 = lcc;
              for (i__ = 1; i__ <= i__5; ++i__) {
                i__6 = i__;
                i__7 = i__;
                cs[i__6].r = cc[i__7].r, cs[i__6].i = cc[i__7].i;
                /* L30: */
              }
              ldcs = ldc;

              /*                       Call the subroutine. */

              if (conj) {
                if (*trace) {
                  cprcn7_(ntra, &nc, sname, iorder, uplo, trans, &n, &k, &alpha,
                          &lda, &ldb, &rbeta, &ldc, (ftnlen)12, (ftnlen)1,
                          (ftnlen)1);
                }
                if (*rewi) {
                  al__1.aerr = 0;
                  al__1.aunit = *ntra;
                  f_rew(&al__1);
                }
                ccher2k_(iorder, uplo, trans, &n, &k, &alpha, &aa[1], &lda,
                         &bb[1], &ldb, &rbeta, &cc[1], &ldc);
              } else {
                if (*trace) {
                  cprcn5_(ntra, &nc, sname, iorder, uplo, trans, &n, &k, &alpha,
                          &lda, &ldb, &beta, &ldc, (ftnlen)12, (ftnlen)1,
                          (ftnlen)1);
                }
                if (*rewi) {
                  al__1.aerr = 0;
                  al__1.aunit = *ntra;
                  f_rew(&al__1);
                }
                ccsyr2k_(iorder, uplo, trans, &n, &k, &alpha, &aa[1], &lda,
                         &bb[1], &ldb, &beta, &cc[1], &ldc);
              }

              /*                       Check if error-exit was taken
               * incorrectly. */

              if (!infoc_1.ok) {
                io___362.ciunit = *nout;
                s_wsfe(&io___362);
                e_wsfe();
                *fatal = TRUE_;
                goto L150;
              }

              /*                       See what data changed inside subroutines.
               */

              isame[0] = *(unsigned char *)uplos == *(unsigned char *)uplo;
              isame[1] = *(unsigned char *)transs == *(unsigned char *)trans;
              isame[2] = ns == n;
              isame[3] = ks == k;
              isame[4] = als.r == alpha.r && als.i == alpha.i;
              isame[5] = lce_(&as[1], &aa[1], &laa);
              isame[6] = ldas == lda;
              isame[7] = lce_(&bs[1], &bb[1], &lbb);
              isame[8] = ldbs == ldb;
              if (conj) {
                isame[9] = rbets == rbeta;
              } else {
                isame[9] = bets.r == beta.r && bets.i == beta.i;
              }
              if (null) {
                isame[10] = lce_(&cs[1], &cc[1], &lcc);
              } else {
                isame[10] = lceres_("he", uplo, &n, &n, &cs[1], &cc[1], &ldc,
                                    (ftnlen)2, (ftnlen)1);
              }
              isame[11] = ldcs == ldc;

              /*                       If data was incorrectly changed, report
               * and */
              /*                       return. */

              same = TRUE_;
              i__5 = nargs;
              for (i__ = 1; i__ <= i__5; ++i__) {
                same = same && isame[i__ - 1];
                if (!isame[i__ - 1]) {
                  io___365.ciunit = *nout;
                  s_wsfe(&io___365);
                  do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
                  e_wsfe();
                }
                /* L40: */
              }
              if (!same) {
                *fatal = TRUE_;
                goto L150;
              }

              if (!null) {

                /*                          Check the result column by column.
                 */

                if (conj) {
                  *(unsigned char *)transt = 'C';
                } else {
                  *(unsigned char *)transt = 'T';
                }
                jjab = 1;
                jc = 1;
                i__5 = n;
                for (j = 1; j <= i__5; ++j) {
                  if (upper) {
                    jj = 1;
                    lj = j;
                  } else {
                    jj = j;
                    lj = n - j + 1;
                  }
                  if (tran) {
                    i__6 = k;
                    for (i__ = 1; i__ <= i__6; ++i__) {
                      i__7 = i__;
                      i__8 = (j - 1 << 1) * *nmax + k + i__;
                      q__1.r = alpha.r * ab[i__8].r - alpha.i * ab[i__8].i,
                      q__1.i = alpha.r * ab[i__8].i + alpha.i * ab[i__8].r;
                      w[i__7].r = q__1.r, w[i__7].i = q__1.i;
                      if (conj) {
                        i__7 = k + i__;
                        r_cnjg(&q__2, &alpha);
                        i__8 = (j - 1 << 1) * *nmax + i__;
                        q__1.r = q__2.r * ab[i__8].r - q__2.i * ab[i__8].i,
                        q__1.i = q__2.r * ab[i__8].i + q__2.i * ab[i__8].r;
                        w[i__7].r = q__1.r, w[i__7].i = q__1.i;
                      } else {
                        i__7 = k + i__;
                        i__8 = (j - 1 << 1) * *nmax + i__;
                        q__1.r = alpha.r * ab[i__8].r - alpha.i * ab[i__8].i,
                        q__1.i = alpha.r * ab[i__8].i + alpha.i * ab[i__8].r;
                        w[i__7].r = q__1.r, w[i__7].i = q__1.i;
                      }
                      /* L50: */
                    }
                    i__6 = k << 1;
                    i__7 = *nmax << 1;
                    i__8 = *nmax << 1;
                    cmmch_(transt, "N", &lj, &c__1, &i__6, &c_b2, &ab[jjab],
                           &i__7, &w[1], &i__8, &beta, &c__[jj + j * c_dim1],
                           nmax, &ct[1], &g[1], &cc[jc], &ldc, eps, &err, fatal,
                           nout, &c_true, (ftnlen)1, (ftnlen)1);
                  } else {
                    i__6 = k;
                    for (i__ = 1; i__ <= i__6; ++i__) {
                      if (conj) {
                        i__7 = i__;
                        r_cnjg(&q__2, &ab[(k + i__ - 1) * *nmax + j]);
                        q__1.r = alpha.r * q__2.r - alpha.i * q__2.i,
                        q__1.i = alpha.r * q__2.i + alpha.i * q__2.r;
                        w[i__7].r = q__1.r, w[i__7].i = q__1.i;
                        i__7 = k + i__;
                        i__8 = (i__ - 1) * *nmax + j;
                        q__2.r = alpha.r * ab[i__8].r - alpha.i * ab[i__8].i,
                        q__2.i = alpha.r * ab[i__8].i + alpha.i * ab[i__8].r;
                        r_cnjg(&q__1, &q__2);
                        w[i__7].r = q__1.r, w[i__7].i = q__1.i;
                      } else {
                        i__7 = i__;
                        i__8 = (k + i__ - 1) * *nmax + j;
                        q__1.r = alpha.r * ab[i__8].r - alpha.i * ab[i__8].i,
                        q__1.i = alpha.r * ab[i__8].i + alpha.i * ab[i__8].r;
                        w[i__7].r = q__1.r, w[i__7].i = q__1.i;
                        i__7 = k + i__;
                        i__8 = (i__ - 1) * *nmax + j;
                        q__1.r = alpha.r * ab[i__8].r - alpha.i * ab[i__8].i,
                        q__1.i = alpha.r * ab[i__8].i + alpha.i * ab[i__8].r;
                        w[i__7].r = q__1.r, w[i__7].i = q__1.i;
                      }
                      /* L60: */
                    }
                    i__6 = k << 1;
                    i__7 = *nmax << 1;
                    cmmch_("N", "N", &lj, &c__1, &i__6, &c_b2, &ab[jj], nmax,
                           &w[1], &i__7, &beta, &c__[jj + j * c_dim1], nmax,
                           &ct[1], &g[1], &cc[jc], &ldc, eps, &err, fatal, nout,
                           &c_true, (ftnlen)1, (ftnlen)1);
                  }
                  if (upper) {
                    jc += ldc;
                  } else {
                    jc = jc + ldc + 1;
                    if (tran) {
                      jjab += *nmax << 1;
                    }
                  }
                  errmax = max(errmax, err);
                  /*                             If got really bad answer,
                   * report and */
                  /*                             return. */
                  if (*fatal) {
                    goto L140;
                  }
                  /* L70: */
                }
              }

              /* L80: */
            }

            /* L90: */
          }

          /* L100: */
        }

      L110:;
      }

      /* L120: */
    }

  L130:;
  }

  /*     Report result. */

  if (errmax < *thresh) {
    if (*iorder == 0) {
      io___373.ciunit = *nout;
      s_wsfe(&io___373);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      e_wsfe();
    }
    if (*iorder == 1) {
      io___374.ciunit = *nout;
      s_wsfe(&io___374);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      e_wsfe();
    }
  } else {
    if (*iorder == 0) {
      io___375.ciunit = *nout;
      s_wsfe(&io___375);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
      e_wsfe();
    }
    if (*iorder == 1) {
      io___376.ciunit = *nout;
      s_wsfe(&io___376);
      do_fio(&c__1, sname, (ftnlen)12);
      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
      e_wsfe();
    }
  }
  goto L160;

L140:
  if (n > 1) {
    io___377.ciunit = *nout;
    s_wsfe(&io___377);
    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
    e_wsfe();
  }

L150:
  io___378.ciunit = *nout;
  s_wsfe(&io___378);
  do_fio(&c__1, sname, (ftnlen)12);
  e_wsfe();
  if (conj) {
    cprcn7_(nout, &nc, sname, iorder, uplo, trans, &n, &k, &alpha, &lda, &ldb,
            &rbeta, &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);
  } else {
    cprcn5_(nout, &nc, sname, iorder, uplo, trans, &n, &k, &alpha, &lda, &ldb,
            &beta, &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);
  }

L160:
  return 0;

  /* L9994: */
  /* L9993: */

  /*     End of CCHK5. */

} /* cchk5_ */

/* Subroutine */ int cprcn5_(integer *nout, integer *nc, char *sname,
                             integer *iorder, char *uplo, char *transa,
                             integer *n, integer *k, complex *alpha,
                             integer *lda, integer *ldb, complex *beta,
                             integer *ldc, ftnlen sname_len, ftnlen uplo_len,
                             ftnlen transa_len) {
  /* Format strings */
  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
                           "\002))";
  static char fmt_9994[] =
      "(10x,2(i3,\002,\002),\002 (\002,f4.1,\002,\002"
      ",f4.1,\002), A,\002,i3,\002, B\002,i3,\002, (\002,f4.1,\002,\002"
      ",f4.1,\002), C,\002,i3,\002).\002)";

  /* Builtin functions */
  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);

  /* Local variables */
  char ca[14], cu[14], crc[14];

  /* Fortran I/O blocks */
  static cilist io___382 = {0, 0, 0, fmt_9995, 0};
  static cilist io___383 = {0, 0, 0, fmt_9994, 0};

  if (*(unsigned char *)uplo == 'U') {
    s_copy(cu, "    CblasUpper", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(cu, "    CblasLower", (ftnlen)14, (ftnlen)14);
  }
  if (*(unsigned char *)transa == 'N') {
    s_copy(ca, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
  } else if (*(unsigned char *)transa == 'T') {
    s_copy(ca, "    CblasTrans", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(ca, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
  }
  if (*iorder == 1) {
    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
  }
  io___382.ciunit = *nout;
  s_wsfe(&io___382);
  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
  do_fio(&c__1, sname, (ftnlen)12);
  do_fio(&c__1, crc, (ftnlen)14);
  do_fio(&c__1, cu, (ftnlen)14);
  do_fio(&c__1, ca, (ftnlen)14);
  e_wsfe();
  io___383.ciunit = *nout;
  s_wsfe(&io___383);
  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*k), (ftnlen)sizeof(integer));
  do_fio(&c__2, (char *)&(*alpha), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*ldb), (ftnlen)sizeof(integer));
  do_fio(&c__2, (char *)&(*beta), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*ldc), (ftnlen)sizeof(integer));
  e_wsfe();
  return 0;
} /* cprcn5_ */

/* Subroutine */ int cprcn7_(integer *nout, integer *nc, char *sname,
                             integer *iorder, char *uplo, char *transa,
                             integer *n, integer *k, complex *alpha,
                             integer *lda, integer *ldb, real *beta,
                             integer *ldc, ftnlen sname_len, ftnlen uplo_len,
                             ftnlen transa_len) {
  /* Format strings */
  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
                           "\002))";
  static char fmt_9994[] =
      "(10x,2(i3,\002,\002),\002 (\002,f4.1,\002,\002"
      ",f4.1,\002), A,\002,i3,\002, B\002,i3,\002,\002,f4.1,\002, C,"
      "\002,i3,\002).\002)";

  /* Builtin functions */
  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);

  /* Local variables */
  char ca[14], cu[14], crc[14];

  /* Fortran I/O blocks */
  static cilist io___387 = {0, 0, 0, fmt_9995, 0};
  static cilist io___388 = {0, 0, 0, fmt_9994, 0};

  if (*(unsigned char *)uplo == 'U') {
    s_copy(cu, "    CblasUpper", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(cu, "    CblasLower", (ftnlen)14, (ftnlen)14);
  }
  if (*(unsigned char *)transa == 'N') {
    s_copy(ca, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
  } else if (*(unsigned char *)transa == 'T') {
    s_copy(ca, "    CblasTrans", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(ca, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
  }
  if (*iorder == 1) {
    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
  } else {
    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
  }
  io___387.ciunit = *nout;
  s_wsfe(&io___387);
  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
  do_fio(&c__1, sname, (ftnlen)12);
  do_fio(&c__1, crc, (ftnlen)14);
  do_fio(&c__1, cu, (ftnlen)14);
  do_fio(&c__1, ca, (ftnlen)14);
  e_wsfe();
  io___388.ciunit = *nout;
  s_wsfe(&io___388);
  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*k), (ftnlen)sizeof(integer));
  do_fio(&c__2, (char *)&(*alpha), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*ldb), (ftnlen)sizeof(integer));
  do_fio(&c__1, (char *)&(*beta), (ftnlen)sizeof(real));
  do_fio(&c__1, (char *)&(*ldc), (ftnlen)sizeof(integer));
  e_wsfe();
  return 0;
} /* cprcn7_ */

/* Subroutine */ int cmake_(char *type__, char *uplo, char *diag, integer *m,
                            integer *n, complex *a, integer *nmax, complex *aa,
                            integer *lda, logical *reset, complex *transl,
                            ftnlen type_len, ftnlen uplo_len, ftnlen diag_len) {
  /* System generated locals */
  integer a_dim1, a_offset, i__1, i__2, i__3, i__4;
  real r__1;
  complex q__1, q__2;

  /* Builtin functions */
  integer s_cmp(char *, char *, ftnlen, ftnlen);
  void r_cnjg(complex *, complex *);

  /* Local variables */
  integer i__, j, jj;
  logical gen, her, tri, sym;
  extern /* Complex */ VOID cbeg_(complex *, logical *);
  integer ibeg, iend;
  logical unit, lower, upper;

  /*  Generates values for an M by N matrix A. */
  /*  Stores the values in the array AA in the data structure required */
  /*  by the routine, with unwanted elements set to rogue value. */

  /*  TYPE is 'ge', 'he', 'sy' or 'tr'. */

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

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
  gen = s_cmp(type__, "ge", (ftnlen)2, (ftnlen)2) == 0;
  her = s_cmp(type__, "he", (ftnlen)2, (ftnlen)2) == 0;
  sym = s_cmp(type__, "sy", (ftnlen)2, (ftnlen)2) == 0;
  tri = s_cmp(type__, "tr", (ftnlen)2, (ftnlen)2) == 0;
  upper = (her || sym || tri) && *(unsigned char *)uplo == 'U';
  lower = (her || sym || tri) && *(unsigned char *)uplo == 'L';
  unit = tri && *(unsigned char *)diag == 'U';

  /*     Generate data in array A. */

  i__1 = *n;
  for (j = 1; j <= i__1; ++j) {
    i__2 = *m;
    for (i__ = 1; i__ <= i__2; ++i__) {
      if (gen || upper && i__ <= j || lower && i__ >= j) {
        i__3 = i__ + j * a_dim1;
        cbeg_(&q__2, reset);
        q__1.r = q__2.r + transl->r, q__1.i = q__2.i + transl->i;
        a[i__3].r = q__1.r, a[i__3].i = q__1.i;
        if (i__ != j) {
          /*                 Set some elements to zero */
          if (*n > 3 && j == *n / 2) {
            i__3 = i__ + j * a_dim1;
            a[i__3].r = 0.f, a[i__3].i = 0.f;
          }
          if (her) {
            i__3 = j + i__ * a_dim1;
            r_cnjg(&q__1, &a[i__ + j * a_dim1]);
            a[i__3].r = q__1.r, a[i__3].i = q__1.i;
          } else if (sym) {
            i__3 = j + i__ * a_dim1;
            i__4 = i__ + j * a_dim1;
            a[i__3].r = a[i__4].r, a[i__3].i = a[i__4].i;
          } else if (tri) {
            i__3 = j + i__ * a_dim1;
            a[i__3].r = 0.f, a[i__3].i = 0.f;
          }
        }
      }
      /* L10: */
    }
    if (her) {
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
  } else if (s_cmp(type__, "he", (ftnlen)2, (ftnlen)2) == 0 ||
             s_cmp(type__, "sy", (ftnlen)2, (ftnlen)2) == 0 ||
             s_cmp(type__, "tr", (ftnlen)2, (ftnlen)2) == 0) {
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
        /* L60: */
      }
      i__2 = iend;
      for (i__ = ibeg; i__ <= i__2; ++i__) {
        i__3 = i__ + (j - 1) * *lda;
        i__4 = i__ + j * a_dim1;
        aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
        /* L70: */
      }
      i__2 = *lda;
      for (i__ = iend + 1; i__ <= i__2; ++i__) {
        i__3 = i__ + (j - 1) * *lda;
        aa[i__3].r = -1e10f, aa[i__3].i = 1e10f;
        /* L80: */
      }
      if (her) {
        jj = j + (j - 1) * *lda;
        i__2 = jj;
        i__3 = jj;
        r__1 = aa[i__3].r;
        q__1.r = r__1, q__1.i = -1e10f;
        aa[i__2].r = q__1.r, aa[i__2].i = q__1.i;
      }
      /* L90: */
    }
  }
  return 0;

  /*     End of CMAKE. */

} /* cmake_ */

/* Subroutine */ int cmmch_(char *transa, char *transb, integer *m, integer *n,
                            integer *kk, complex *alpha, complex *a,
                            integer *lda, complex *b, integer *ldb,
                            complex *beta, complex *c__, integer *ldc,
                            complex *ct, real *g, complex *cc, integer *ldcc,
                            real *eps, real *err, logical *fatal, integer *nout,
                            logical *mv, ftnlen transa_len, ftnlen transb_len) {
  /* Format strings */
  static char fmt_9999[] =
      "(\002 ******* FATAL ERROR - COMPUTED RESULT IS"
      " LESS THAN HAL\002,\002F ACCURATE *******\002,/\002             "
      "          EXPECTED RE\002,\002SULT                    COMPUTED R"
      "ESULT\002)";
  static char fmt_9998[] = "(1x,i7,2(\002  (\002,g15.6,\002,\002,g15.6,"
                           "\002)\002))";
  static char fmt_9997[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
                           " \002,i3)";

  /* System generated locals */
  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, cc_dim1,
      cc_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7;
  real r__1, r__2, r__3, r__4, r__5, r__6;
  complex q__1, q__2, q__3, q__4;

  /* Builtin functions */
  double r_imag(complex *);
  void r_cnjg(complex *, complex *);
  double sqrt(doublereal);
  integer s_wsfe(cilist *), e_wsfe(void), do_fio(integer *, char *, ftnlen);

  /* Local variables */
  integer i__, j, k;
  real erri;
  logical trana, tranb, ctrana, ctranb;

  /* Fortran I/O blocks */
  static cilist io___409 = {0, 0, 0, fmt_9999, 0};
  static cilist io___410 = {0, 0, 0, fmt_9998, 0};
  static cilist io___411 = {0, 0, 0, fmt_9998, 0};
  static cilist io___412 = {0, 0, 0, fmt_9997, 0};

  /*  Checks the results of the computational tests. */

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

  /*     .. Parameters .. */
  /*     .. Scalar Arguments .. */
  /*     .. Array Arguments .. */
  /*     .. Local Scalars .. */
  /*     .. Intrinsic Functions .. */
  /*     .. Statement Functions .. */
  /*     .. Statement Function definitions .. */
  /*     .. Executable Statements .. */
  /* Parameter adjustments */
  a_dim1 = *lda;
  a_offset = 1 + a_dim1;
  a -= a_offset;
  b_dim1 = *ldb;
  b_offset = 1 + b_dim1;
  b -= b_offset;
  c_dim1 = *ldc;
  c_offset = 1 + c_dim1;
  c__ -= c_offset;
  --ct;
  --g;
  cc_dim1 = *ldcc;
  cc_offset = 1 + cc_dim1;
  cc -= cc_offset;

  /* Function Body */
  trana = *(unsigned char *)transa == 'T' || *(unsigned char *)transa == 'C';
  tranb = *(unsigned char *)transb == 'T' || *(unsigned char *)transb == 'C';
  ctrana = *(unsigned char *)transa == 'C';
  ctranb = *(unsigned char *)transb == 'C';

  /*     Compute expected result, one column at a time, in CT using data */
  /*     in A, B and C. */
  /*     Compute gauges in G. */

  i__1 = *n;
  for (j = 1; j <= i__1; ++j) {

    i__2 = *m;
    for (i__ = 1; i__ <= i__2; ++i__) {
      i__3 = i__;
      ct[i__3].r = 0.f, ct[i__3].i = 0.f;
      g[i__] = 0.f;
      /* L10: */
    }
    if (!trana && !tranb) {
      i__2 = *kk;
      for (k = 1; k <= i__2; ++k) {
        i__3 = *m;
        for (i__ = 1; i__ <= i__3; ++i__) {
          i__4 = i__;
          i__5 = i__;
          i__6 = i__ + k * a_dim1;
          i__7 = k + j * b_dim1;
          q__2.r = a[i__6].r * b[i__7].r - a[i__6].i * b[i__7].i,
          q__2.i = a[i__6].r * b[i__7].i + a[i__6].i * b[i__7].r;
          q__1.r = ct[i__5].r + q__2.r, q__1.i = ct[i__5].i + q__2.i;
          ct[i__4].r = q__1.r, ct[i__4].i = q__1.i;
          i__4 = i__ + k * a_dim1;
          i__5 = k + j * b_dim1;
          g[i__] += ((r__1 = a[i__4].r, abs(r__1)) +
                     (r__2 = r_imag(&a[i__ + k * a_dim1]), abs(r__2))) *
                    ((r__3 = b[i__5].r, abs(r__3)) +
                     (r__4 = r_imag(&b[k + j * b_dim1]), abs(r__4)));
          /* L20: */
        }
        /* L30: */
      }
    } else if (trana && !tranb) {
      if (ctrana) {
        i__2 = *kk;
        for (k = 1; k <= i__2; ++k) {
          i__3 = *m;
          for (i__ = 1; i__ <= i__3; ++i__) {
            i__4 = i__;
            i__5 = i__;
            r_cnjg(&q__3, &a[k + i__ * a_dim1]);
            i__6 = k + j * b_dim1;
            q__2.r = q__3.r * b[i__6].r - q__3.i * b[i__6].i,
            q__2.i = q__3.r * b[i__6].i + q__3.i * b[i__6].r;
            q__1.r = ct[i__5].r + q__2.r, q__1.i = ct[i__5].i + q__2.i;
            ct[i__4].r = q__1.r, ct[i__4].i = q__1.i;
            i__4 = k + i__ * a_dim1;
            i__5 = k + j * b_dim1;
            g[i__] += ((r__1 = a[i__4].r, abs(r__1)) +
                       (r__2 = r_imag(&a[k + i__ * a_dim1]), abs(r__2))) *
                      ((r__3 = b[i__5].r, abs(r__3)) +
                       (r__4 = r_imag(&b[k + j * b_dim1]), abs(r__4)));
            /* L40: */
          }
          /* L50: */
        }
      } else {
        i__2 = *kk;
        for (k = 1; k <= i__2; ++k) {
          i__3 = *m;
          for (i__ = 1; i__ <= i__3; ++i__) {
            i__4 = i__;
            i__5 = i__;
            i__6 = k + i__ * a_dim1;
            i__7 = k + j * b_dim1;
            q__2.r = a[i__6].r * b[i__7].r - a[i__6].i * b[i__7].i,
            q__2.i = a[i__6].r * b[i__7].i + a[i__6].i * b[i__7].r;
            q__1.r = ct[i__5].r + q__2.r, q__1.i = ct[i__5].i + q__2.i;
            ct[i__4].r = q__1.r, ct[i__4].i = q__1.i;
            i__4 = k + i__ * a_dim1;
            i__5 = k + j * b_dim1;
            g[i__] += ((r__1 = a[i__4].r, abs(r__1)) +
                       (r__2 = r_imag(&a[k + i__ * a_dim1]), abs(r__2))) *
                      ((r__3 = b[i__5].r, abs(r__3)) +
                       (r__4 = r_imag(&b[k + j * b_dim1]), abs(r__4)));
            /* L60: */
          }
          /* L70: */
        }
      }
    } else if (!trana && tranb) {
      if (ctranb) {
        i__2 = *kk;
        for (k = 1; k <= i__2; ++k) {
          i__3 = *m;
          for (i__ = 1; i__ <= i__3; ++i__) {
            i__4 = i__;
            i__5 = i__;
            i__6 = i__ + k * a_dim1;
            r_cnjg(&q__3, &b[j + k * b_dim1]);
            q__2.r = a[i__6].r * q__3.r - a[i__6].i * q__3.i,
            q__2.i = a[i__6].r * q__3.i + a[i__6].i * q__3.r;
            q__1.r = ct[i__5].r + q__2.r, q__1.i = ct[i__5].i + q__2.i;
            ct[i__4].r = q__1.r, ct[i__4].i = q__1.i;
            i__4 = i__ + k * a_dim1;
            i__5 = j + k * b_dim1;
            g[i__] += ((r__1 = a[i__4].r, abs(r__1)) +
                       (r__2 = r_imag(&a[i__ + k * a_dim1]), abs(r__2))) *
                      ((r__3 = b[i__5].r, abs(r__3)) +
                       (r__4 = r_imag(&b[j + k * b_dim1]), abs(r__4)));
            /* L80: */
          }
          /* L90: */
        }
      } else {
        i__2 = *kk;
        for (k = 1; k <= i__2; ++k) {
          i__3 = *m;
          for (i__ = 1; i__ <= i__3; ++i__) {
            i__4 = i__;
            i__5 = i__;
            i__6 = i__ + k * a_dim1;
            i__7 = j + k * b_dim1;
            q__2.r = a[i__6].r * b[i__7].r - a[i__6].i * b[i__7].i,
            q__2.i = a[i__6].r * b[i__7].i + a[i__6].i * b[i__7].r;
            q__1.r = ct[i__5].r + q__2.r, q__1.i = ct[i__5].i + q__2.i;
            ct[i__4].r = q__1.r, ct[i__4].i = q__1.i;
            i__4 = i__ + k * a_dim1;
            i__5 = j + k * b_dim1;
            g[i__] += ((r__1 = a[i__4].r, abs(r__1)) +
                       (r__2 = r_imag(&a[i__ + k * a_dim1]), abs(r__2))) *
                      ((r__3 = b[i__5].r, abs(r__3)) +
                       (r__4 = r_imag(&b[j + k * b_dim1]), abs(r__4)));
            /* L100: */
          }
          /* L110: */
        }
      }
    } else if (trana && tranb) {
      if (ctrana) {
        if (ctranb) {
          i__2 = *kk;
          for (k = 1; k <= i__2; ++k) {
            i__3 = *m;
            for (i__ = 1; i__ <= i__3; ++i__) {
              i__4 = i__;
              i__5 = i__;
              r_cnjg(&q__3, &a[k + i__ * a_dim1]);
              r_cnjg(&q__4, &b[j + k * b_dim1]);
              q__2.r = q__3.r * q__4.r - q__3.i * q__4.i,
              q__2.i = q__3.r * q__4.i + q__3.i * q__4.r;
              q__1.r = ct[i__5].r + q__2.r, q__1.i = ct[i__5].i + q__2.i;
              ct[i__4].r = q__1.r, ct[i__4].i = q__1.i;
              i__4 = k + i__ * a_dim1;
              i__5 = j + k * b_dim1;
              g[i__] += ((r__1 = a[i__4].r, abs(r__1)) +
                         (r__2 = r_imag(&a[k + i__ * a_dim1]), abs(r__2))) *
                        ((r__3 = b[i__5].r, abs(r__3)) +
                         (r__4 = r_imag(&b[j + k * b_dim1]), abs(r__4)));
              /* L120: */
            }
            /* L130: */
          }
        } else {
          i__2 = *kk;
          for (k = 1; k <= i__2; ++k) {
            i__3 = *m;
            for (i__ = 1; i__ <= i__3; ++i__) {
              i__4 = i__;
              i__5 = i__;
              r_cnjg(&q__3, &a[k + i__ * a_dim1]);
              i__6 = j + k * b_dim1;
              q__2.r = q__3.r * b[i__6].r - q__3.i * b[i__6].i,
              q__2.i = q__3.r * b[i__6].i + q__3.i * b[i__6].r;
              q__1.r = ct[i__5].r + q__2.r, q__1.i = ct[i__5].i + q__2.i;
              ct[i__4].r = q__1.r, ct[i__4].i = q__1.i;
              i__4 = k + i__ * a_dim1;
              i__5 = j + k * b_dim1;
              g[i__] += ((r__1 = a[i__4].r, abs(r__1)) +
                         (r__2 = r_imag(&a[k + i__ * a_dim1]), abs(r__2))) *
                        ((r__3 = b[i__5].r, abs(r__3)) +
                         (r__4 = r_imag(&b[j + k * b_dim1]), abs(r__4)));
              /* L140: */
            }
            /* L150: */
          }
        }
      } else {
        if (ctranb) {
          i__2 = *kk;
          for (k = 1; k <= i__2; ++k) {
            i__3 = *m;
            for (i__ = 1; i__ <= i__3; ++i__) {
              i__4 = i__;
              i__5 = i__;
              i__6 = k + i__ * a_dim1;
              r_cnjg(&q__3, &b[j + k * b_dim1]);
              q__2.r = a[i__6].r * q__3.r - a[i__6].i * q__3.i,
              q__2.i = a[i__6].r * q__3.i + a[i__6].i * q__3.r;
              q__1.r = ct[i__5].r + q__2.r, q__1.i = ct[i__5].i + q__2.i;
              ct[i__4].r = q__1.r, ct[i__4].i = q__1.i;
              i__4 = k + i__ * a_dim1;
              i__5 = j + k * b_dim1;
              g[i__] += ((r__1 = a[i__4].r, abs(r__1)) +
                         (r__2 = r_imag(&a[k + i__ * a_dim1]), abs(r__2))) *
                        ((r__3 = b[i__5].r, abs(r__3)) +
                         (r__4 = r_imag(&b[j + k * b_dim1]), abs(r__4)));
              /* L160: */
            }
            /* L170: */
          }
        } else {
          i__2 = *kk;
          for (k = 1; k <= i__2; ++k) {
            i__3 = *m;
            for (i__ = 1; i__ <= i__3; ++i__) {
              i__4 = i__;
              i__5 = i__;
              i__6 = k + i__ * a_dim1;
              i__7 = j + k * b_dim1;
              q__2.r = a[i__6].r * b[i__7].r - a[i__6].i * b[i__7].i,
              q__2.i = a[i__6].r * b[i__7].i + a[i__6].i * b[i__7].r;
              q__1.r = ct[i__5].r + q__2.r, q__1.i = ct[i__5].i + q__2.i;
              ct[i__4].r = q__1.r, ct[i__4].i = q__1.i;
              i__4 = k + i__ * a_dim1;
              i__5 = j + k * b_dim1;
              g[i__] += ((r__1 = a[i__4].r, abs(r__1)) +
                         (r__2 = r_imag(&a[k + i__ * a_dim1]), abs(r__2))) *
                        ((r__3 = b[i__5].r, abs(r__3)) +
                         (r__4 = r_imag(&b[j + k * b_dim1]), abs(r__4)));
              /* L180: */
            }
            /* L190: */
          }
        }
      }
    }
    i__2 = *m;
    for (i__ = 1; i__ <= i__2; ++i__) {
      i__3 = i__;
      i__4 = i__;
      q__2.r = alpha->r * ct[i__4].r - alpha->i * ct[i__4].i,
      q__2.i = alpha->r * ct[i__4].i + alpha->i * ct[i__4].r;
      i__5 = i__ + j * c_dim1;
      q__3.r = beta->r * c__[i__5].r - beta->i * c__[i__5].i,
      q__3.i = beta->r * c__[i__5].i + beta->i * c__[i__5].r;
      q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
      ct[i__3].r = q__1.r, ct[i__3].i = q__1.i;
      i__3 = i__ + j * c_dim1;
      g[i__] =
          ((r__1 = alpha->r, abs(r__1)) + (r__2 = r_imag(alpha), abs(r__2))) *
              g[i__] +
          ((r__3 = beta->r, abs(r__3)) + (r__4 = r_imag(beta), abs(r__4))) *
              ((r__5 = c__[i__3].r, abs(r__5)) +
               (r__6 = r_imag(&c__[i__ + j * c_dim1]), abs(r__6)));
      /* L200: */
    }

    /*        Compute the error ratio for this result. */

    *err = 0.f;
    i__2 = *m;
    for (i__ = 1; i__ <= i__2; ++i__) {
      i__3 = i__;
      i__4 = i__ + j * cc_dim1;
      q__2.r = ct[i__3].r - cc[i__4].r, q__2.i = ct[i__3].i - cc[i__4].i;
      q__1.r = q__2.r, q__1.i = q__2.i;
      erri = ((r__1 = q__1.r, abs(r__1)) + (r__2 = r_imag(&q__1), abs(r__2))) /
             *eps;
      if (g[i__] != 0.f) {
        erri /= g[i__];
      }
      *err = max(*err, erri);
      if (*err * sqrt(*eps) >= 1.f) {
        goto L230;
      }
      /* L210: */
    }

    /* L220: */
  }

  /*     If the loop completes, all results are at least half accurate. */
  goto L250;

  /*     Report fatal error. */

L230:
  *fatal = TRUE_;
  io___409.ciunit = *nout;
  s_wsfe(&io___409);
  e_wsfe();
  i__1 = *m;
  for (i__ = 1; i__ <= i__1; ++i__) {
    if (*mv) {
      io___410.ciunit = *nout;
      s_wsfe(&io___410);
      do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
      do_fio(&c__2, (char *)&ct[i__], (ftnlen)sizeof(real));
      do_fio(&c__2, (char *)&cc[i__ + j * cc_dim1], (ftnlen)sizeof(real));
      e_wsfe();
    } else {
      io___411.ciunit = *nout;
      s_wsfe(&io___411);
      do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
      do_fio(&c__2, (char *)&cc[i__ + j * cc_dim1], (ftnlen)sizeof(real));
      do_fio(&c__2, (char *)&ct[i__], (ftnlen)sizeof(real));
      e_wsfe();
    }
    /* L240: */
  }
  if (*n > 1) {
    io___412.ciunit = *nout;
    s_wsfe(&io___412);
    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
    e_wsfe();
  }

L250:
  return 0;

  /*     End of CMMCH. */

} /* cmmch_ */

logical lce_(complex *ri, complex *rj, integer *lr) {
  /* System generated locals */
  integer i__1, i__2, i__3;
  logical ret_val;

  /* Local variables */
  integer i__;

  /*  Tests if two arrays are identical. */

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

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
                complex *as, integer *lda, ftnlen type_len, ftnlen uplo_len) {
  /* System generated locals */
  integer aa_dim1, aa_offset, as_dim1, as_offset, i__1, i__2, i__3, i__4;
  logical ret_val;

  /* Builtin functions */
  integer s_cmp(char *, char *, ftnlen, ftnlen);

  /* Local variables */
  integer i__, j, ibeg, iend;
  logical upper;

  /*  Tests if selected elements in two arrays are equal. */

  /*  TYPE is 'ge' or 'he' or 'sy'. */

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

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
  } else if (s_cmp(type__, "he", (ftnlen)2, (ftnlen)2) == 0 ||
             s_cmp(type__, "sy", (ftnlen)2, (ftnlen)2) == 0) {
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

/* Complex */ VOID cbeg_(complex *ret_val, logical *reset) {
  /* System generated locals */
  real r__1, r__2;
  complex q__1;

  /* Local variables */
  static integer i__, j, ic, mi, mj;

  /*  Generates complex numbers as pairs of random numbers uniformly */
  /*  distributed between -0.5 and 0.5. */

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

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
  ret_val->r = q__1.r, ret_val->i = q__1.i;
  return;

  /*     End of CBEG. */

} /* cbeg_ */

real sdiff_(real *x, real *y) {
  /* System generated locals */
  real ret_val;

  /*  Auxiliary routine for test program for Level 3 Blas. */

  /*  -- Written on 8-February-1989. */
  /*     Jack Dongarra, Argonne National Laboratory. */
  /*     Iain Duff, AERE Harwell. */
  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */

  /*     .. Scalar Arguments .. */
  /*     .. Executable Statements .. */
  ret_val = *x - *y;
  return ret_val;

  /*     End of SDIFF. */

} /* sdiff_ */

/* Main program alias */ int cblat3_() {
  MAIN__();
  return 0;
}
