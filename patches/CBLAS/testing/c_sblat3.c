--- ../../../to_patch/CBLAS//testing/c_sblat3.c	1970-01-01 01:00:00.000000000 +0100
+++ ./testing/c_sblat3.c	2020-03-18 14:52:00.354157549 +0100
@@ -0,0 +1,3789 @@
+/* testing/c_sblat3.f -- translated by f2c (version 20191129).
+   You must link the resulting object file with libf2c:
+        on Microsoft Windows system, link with libf2c.lib;
+        on Linux or Unix systems, link with .../path/to/libf2c.a -lm
+        or, if you install libf2c.a in a standard place, with -lf2c -lm
+        -- in that order, at the end of the command line, as in
+                cc *.o -lf2c -lm
+        Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,
+
+                http://www.netlib.org/f2c/libf2c.zip
+*/
+
+#include "f2c.h"
+
+/* Common Block Declarations */
+
+struct {
+  integer infot, noutc;
+  logical ok;
+} infoc_;
+
+#define infoc_1 infoc_
+
+struct {
+  char srnamt[12];
+} srnamc_;
+
+#define srnamc_1 srnamc_
+
+/* Table of constant values */
+
+static integer c__9 = 9;
+static integer c__1 = 1;
+static integer c__3 = 3;
+static integer c__8 = 8;
+static integer c__4 = 4;
+static integer c__65 = 65;
+static integer c__7 = 7;
+static real c_b89 = 1.f;
+static real c_b103 = 0.f;
+static integer c__6 = 6;
+static logical c_true = TRUE_;
+static integer c__0 = 0;
+static logical c_false = FALSE_;
+
+/* Main program */ int MAIN__(void) {
+  /* Initialized data */
+
+  static char snames[12 * 6] = "cblas_sgemm "
+                               "cblas_ssymm "
+                               "cblas_strmm "
+                               "cblas_strsm "
+                               "cblas_ssyrk "
+                               "cblas_ssyr2k";
+
+  /* Format strings */
+  static char fmt_9997[] = "(\002 NUMBER OF VALUES OF \002,a,\002 IS LESS "
+                           "THAN 1 OR GREATER \002,\002THAN \002,i2)";
+  static char fmt_9996[] = "(\002 VALUE OF N IS LESS THAN 0 OR GREATER THA"
+                           "N \002,i2)";
+  static char fmt_9995[] =
+      "(\002 TESTS OF THE REAL             LEVEL 3 BL"
+      "AS\002,//\002 THE F\002,\002OLLOWING PARAMETER VALUES WILL BE US"
+      "ED:\002)";
+  static char fmt_9994[] = "(\002   FOR N              \002,9i6)";
+  static char fmt_9993[] = "(\002   FOR ALPHA          \002,7f6.1)";
+  static char fmt_9992[] = "(\002   FOR BETA           \002,7f6.1)";
+  static char fmt_9984[] = "(\002 ERROR-EXITS WILL NOT BE TESTED\002)";
+  static char fmt_9999[] = "(\002 ROUTINES PASS COMPUTATIONAL TESTS IF TES"
+                           "T RATIO IS LES\002,\002S THAN\002,f8.2)";
+  static char fmt_10002[] = "(\002 COLUMN-MAJOR AND ROW-MAJOR DATA LAYOUTS"
+                            " ARE TESTED\002)";
+  static char fmt_10001[] = "(\002 ROW-MAJOR DATA LAYOUT IS TESTED\002)";
+  static char fmt_10000[] = "(\002 COLUMN-MAJOR DATA LAYOUT IS TESTED\002)";
+  static char fmt_9988[] = "(a12,l2)";
+  static char fmt_9990[] =
+      "(\002 SUBPROGRAM NAME \002,a12,\002 NOT RECOGN"
+      "IZED\002,/\002 ******* \002,\002TESTS ABANDONED *******\002)";
+  static char fmt_9998[] = "(\002 RELATIVE MACHINE PRECISION IS TAKEN TO"
+                           " BE\002,1p,e9.1)";
+  static char fmt_9989[] =
+      "(\002 ERROR IN SMMCH -  IN-LINE DOT PRODUCTS A"
+      "RE BEING EVALU\002,\002ATED WRONGLY.\002,/\002 SMMCH WAS CALLED "
+      "WITH TRANSA = \002,a1,\002 AND TRANSB = \002,a1,/\002 AND RETURN"
+      "ED SAME = \002,l1,\002 AND \002,\002ERR = \002,f12.3,\002.\002,"
+      "/\002 THIS MAY BE DUE TO FAULTS IN THE \002,\002ARITHMETIC OR TH"
+      "E COMPILER.\002,/\002 ******* TESTS ABANDONED \002,\002******"
+      "*\002)";
+  static char fmt_9987[] = "(1x,a12,\002 WAS NOT TESTED\002)";
+  static char fmt_9986[] = "(/\002 END OF TESTS\002)";
+  static char fmt_9985[] = "(/\002 ******* FATAL ERROR - TESTS ABANDONED *"
+                           "******\002)";
+  static char fmt_9991[] =
+      "(\002 AMEND DATA FILE OR INCREASE ARRAY SIZES "
+      "IN PROGRAM\002,/\002 ******* TESTS ABANDONED *******\002)";
+
+  /* System generated locals */
+  integer i__1, i__2, i__3;
+  real r__1;
+  olist o__1;
+  cllist cl__1;
+
+  /* Builtin functions */
+  integer s_rsle(cilist *), do_lio(integer *, integer *, char *, ftnlen),
+      e_rsle(void), f_open(olist *), s_wsfe(cilist *),
+      do_fio(integer *, char *, ftnlen), e_wsfe(void), s_wsle(cilist *),
+      e_wsle(void), s_rsfe(cilist *), e_rsfe(void),
+      s_cmp(char *, char *, ftnlen, ftnlen);
+  /* Subroutine */ int s_stop(char *, ftnlen);
+  integer f_clos(cllist *);
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+
+  /* Local variables */
+  real c__[4225] /* was [65][65] */, g[65];
+  integer i__, j, n;
+  real w[130], aa[4225], ab[8450] /* was [65][130] */, bb[4225], cc[4225],
+      as[4225], bs[4225], cs[4225], ct[65], alf[7], bet[7];
+  extern logical lse_(real *, real *, integer *);
+  real eps, err;
+  integer nalf, idim[9];
+  logical same;
+  integer nbet, ntra;
+  logical rewi;
+  extern /* Subroutine */ int schk1_(
+      char *, real *, real *, integer *, integer *, logical *, logical *,
+      logical *, integer *, integer *, integer *, real *, integer *, real *,
+      integer *, real *, real *, real *, real *, real *, real *, real *, real *,
+      real *, real *, real *, integer *, ftnlen),
+      schk2_(char *, real *, real *, integer *, integer *, logical *, logical *,
+             logical *, integer *, integer *, integer *, real *, integer *,
+             real *, integer *, real *, real *, real *, real *, real *, real *,
+             real *, real *, real *, real *, real *, integer *, ftnlen),
+      schk3_(char *, real *, real *, integer *, integer *, logical *, logical *,
+             logical *, integer *, integer *, integer *, real *, integer *,
+             real *, real *, real *, real *, real *, real *, real *, real *,
+             real *, integer *, ftnlen),
+      schk4_(char *, real *, real *, integer *, integer *, logical *, logical *,
+             logical *, integer *, integer *, integer *, real *, integer *,
+             real *, integer *, real *, real *, real *, real *, real *, real *,
+             real *, real *, real *, real *, real *, integer *, ftnlen),
+      schk5_(char *, real *, real *, integer *, integer *, logical *, logical *,
+             logical *, integer *, integer *, integer *, real *, integer *,
+             real *, integer *, real *, real *, real *, real *, real *, real *,
+             real *, real *, real *, real *, real *, integer *, ftnlen);
+  logical fatal;
+  extern real sdiff_(real *, real *);
+  logical trace;
+  integer nidim;
+  extern /* Subroutine */ int smmch_(
+      char *, char *, integer *, integer *, integer *, real *, real *,
+      integer *, real *, integer *, real *, real *, integer *, real *, real *,
+      real *, integer *, real *, real *, logical *, integer *, logical *,
+      ftnlen, ftnlen);
+  char snaps[32];
+  integer isnum;
+  logical ltest[6], sfatal, corder;
+  char snamet[12], transa[1], transb[1];
+  real thresh;
+  logical rorder;
+  integer layout;
+  logical ltestt, tsterr;
+  extern /* Subroutine */ void cs3chke_(char *);
+
+  /* Fortran I/O blocks */
+  static cilist io___2 = {0, 5, 0, 0, 0};
+  static cilist io___4 = {0, 5, 0, 0, 0};
+  static cilist io___7 = {0, 5, 0, 0, 0};
+  static cilist io___9 = {0, 5, 0, 0, 0};
+  static cilist io___11 = {0, 5, 0, 0, 0};
+  static cilist io___13 = {0, 5, 0, 0, 0};
+  static cilist io___15 = {0, 5, 0, 0, 0};
+  static cilist io___17 = {0, 5, 0, 0, 0};
+  static cilist io___19 = {0, 6, 0, fmt_9997, 0};
+  static cilist io___20 = {0, 5, 0, 0, 0};
+  static cilist io___23 = {0, 6, 0, fmt_9996, 0};
+  static cilist io___24 = {0, 5, 0, 0, 0};
+  static cilist io___26 = {0, 6, 0, fmt_9997, 0};
+  static cilist io___27 = {0, 5, 0, 0, 0};
+  static cilist io___29 = {0, 5, 0, 0, 0};
+  static cilist io___31 = {0, 6, 0, fmt_9997, 0};
+  static cilist io___32 = {0, 5, 0, 0, 0};
+  static cilist io___34 = {0, 6, 0, fmt_9995, 0};
+  static cilist io___35 = {0, 6, 0, fmt_9994, 0};
+  static cilist io___36 = {0, 6, 0, fmt_9993, 0};
+  static cilist io___37 = {0, 6, 0, fmt_9992, 0};
+  static cilist io___38 = {0, 6, 0, 0, 0};
+  static cilist io___39 = {0, 6, 0, fmt_9984, 0};
+  static cilist io___40 = {0, 6, 0, 0, 0};
+  static cilist io___41 = {0, 6, 0, fmt_9999, 0};
+  static cilist io___42 = {0, 6, 0, 0, 0};
+  static cilist io___45 = {0, 6, 0, fmt_10002, 0};
+  static cilist io___46 = {0, 6, 0, fmt_10001, 0};
+  static cilist io___47 = {0, 6, 0, fmt_10000, 0};
+  static cilist io___48 = {0, 6, 0, 0, 0};
+  static cilist io___50 = {0, 5, 1, fmt_9988, 0};
+  static cilist io___53 = {0, 6, 0, fmt_9990, 0};
+  static cilist io___55 = {0, 6, 0, fmt_9998, 0};
+  static cilist io___68 = {0, 6, 0, fmt_9989, 0};
+  static cilist io___69 = {0, 6, 0, fmt_9989, 0};
+  static cilist io___70 = {0, 6, 0, fmt_9989, 0};
+  static cilist io___71 = {0, 6, 0, fmt_9989, 0};
+  static cilist io___73 = {0, 6, 0, 0, 0};
+  static cilist io___74 = {0, 6, 0, fmt_9987, 0};
+  static cilist io___75 = {0, 6, 0, 0, 0};
+  static cilist io___82 = {0, 6, 0, fmt_9986, 0};
+  static cilist io___83 = {0, 6, 0, fmt_9985, 0};
+  static cilist io___84 = {0, 6, 0, fmt_9991, 0};
+
+  /*  Test program for the REAL             Level 3 Blas. */
+
+  /*  The program must be driven by a short data file. The first 13 records */
+  /*  of the file are read using list-directed input, the last 6 records */
+  /*  are read using the format ( A12, L2 ). An annotated example of a data */
+  /*  file can be obtained by deleting the first 3 characters from the */
+  /*  following 19 lines: */
+  /*  'SBLAT3.SNAP'     NAME OF SNAPSHOT OUTPUT FILE */
+  /*  -1                UNIT NUMBER OF SNAPSHOT FILE (NOT USED IF .LT. 0) */
+  /*  F        LOGICAL FLAG, T TO REWIND SNAPSHOT FILE AFTER EACH RECORD. */
+  /*  F        LOGICAL FLAG, T TO STOP ON FAILURES. */
+  /*  T        LOGICAL FLAG, T TO TEST ERROR EXITS. */
+  /*  2        0 TO TEST COLUMN-MAJOR, 1 TO TEST ROW-MAJOR, 2 TO TEST BOTH */
+  /*  16.0     THRESHOLD VALUE OF TEST RATIO */
+  /*  6                 NUMBER OF VALUES OF N */
+  /*  0 1 2 3 5 9       VALUES OF N */
+  /*  3                 NUMBER OF VALUES OF ALPHA */
+  /*  0.0 1.0 0.7       VALUES OF ALPHA */
+  /*  3                 NUMBER OF VALUES OF BETA */
+  /*  0.0 1.0 1.3       VALUES OF BETA */
+  /*  cblas_sgemm  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_ssymm  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_strmm  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_strsm  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_ssyrk  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_ssyr2k T PUT F FOR NO TEST. SAME COLUMNS. */
+
+  /*  See: */
+
+  /*     Dongarra J. J., Du Croz J. J., Duff I. S. and Hammarling S. */
+  /*     A Set of Level 3 Basic Linear Algebra Subprograms. */
+
+  /*     Technical Memorandum No.88 (Revision 1), Mathematics and */
+  /*     Computer Science Division, Argonne National Laboratory, 9700 */
+  /*     South Cass Avenue, Argonne, Illinois 60439, US. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Parameters .. */
+  /*     .. Local Scalars .. */
+  /*     .. Local Arrays .. */
+  /*     .. External Functions .. */
+  /*     .. External Subroutines .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. Scalars in Common .. */
+  /*     .. Common blocks .. */
+  /*     .. Data statements .. */
+  /*     .. Executable Statements .. */
+
+  infoc_1.noutc = 6;
+  /*     Read name and unit number for summary output file and open file. */
+
+  s_rsle(&io___2);
+  do_lio(&c__9, &c__1, snaps, (ftnlen)32);
+  e_rsle();
+  s_rsle(&io___4);
+  do_lio(&c__3, &c__1, (char *)&ntra, (ftnlen)sizeof(integer));
+  e_rsle();
+  trace = ntra >= 0;
+  if (trace) {
+    /*         OPEN( NTRA, FILE = SNAPS, STATUS = 'NEW' ) */
+    o__1.oerr = 0;
+    o__1.ounit = ntra;
+    o__1.ofnmlen = 32;
+    o__1.ofnm = snaps;
+    o__1.orl = 0;
+    o__1.osta = 0;
+    o__1.oacc = 0;
+    o__1.ofm = 0;
+    o__1.oblnk = 0;
+    f_open(&o__1);
+  }
+  /*     Read the flag that directs rewinding of the snapshot file. */
+  s_rsle(&io___7);
+  do_lio(&c__8, &c__1, (char *)&rewi, (ftnlen)sizeof(logical));
+  e_rsle();
+  rewi = rewi && trace;
+  /*     Read the flag that directs stopping on any failure. */
+  s_rsle(&io___9);
+  do_lio(&c__8, &c__1, (char *)&sfatal, (ftnlen)sizeof(logical));
+  e_rsle();
+  /*     Read the flag that indicates whether error exits are to be tested. */
+  s_rsle(&io___11);
+  do_lio(&c__8, &c__1, (char *)&tsterr, (ftnlen)sizeof(logical));
+  e_rsle();
+  /*     Read the flag that indicates whether row-major data layout to be
+   * tested. */
+  s_rsle(&io___13);
+  do_lio(&c__3, &c__1, (char *)&layout, (ftnlen)sizeof(integer));
+  e_rsle();
+  /*     Read the threshold value of the test ratio */
+  s_rsle(&io___15);
+  do_lio(&c__4, &c__1, (char *)&thresh, (ftnlen)sizeof(real));
+  e_rsle();
+
+  /*     Read and check the parameter values for the tests. */
+
+  /*     Values of N */
+  s_rsle(&io___17);
+  do_lio(&c__3, &c__1, (char *)&nidim, (ftnlen)sizeof(integer));
+  e_rsle();
+  if (nidim < 1 || nidim > 9) {
+    s_wsfe(&io___19);
+    do_fio(&c__1, "N", (ftnlen)1);
+    do_fio(&c__1, (char *)&c__9, (ftnlen)sizeof(integer));
+    e_wsfe();
+    goto L220;
+  }
+  s_rsle(&io___20);
+  i__1 = nidim;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_lio(&c__3, &c__1, (char *)&idim[i__ - 1], (ftnlen)sizeof(integer));
+  }
+  e_rsle();
+  i__1 = nidim;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    if (idim[i__ - 1] < 0 || idim[i__ - 1] > 65) {
+      s_wsfe(&io___23);
+      do_fio(&c__1, (char *)&c__65, (ftnlen)sizeof(integer));
+      e_wsfe();
+      goto L220;
+    }
+    /* L10: */
+  }
+  /*     Values of ALPHA */
+  s_rsle(&io___24);
+  do_lio(&c__3, &c__1, (char *)&nalf, (ftnlen)sizeof(integer));
+  e_rsle();
+  if (nalf < 1 || nalf > 7) {
+    s_wsfe(&io___26);
+    do_fio(&c__1, "ALPHA", (ftnlen)5);
+    do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
+    e_wsfe();
+    goto L220;
+  }
+  s_rsle(&io___27);
+  i__1 = nalf;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_lio(&c__4, &c__1, (char *)&alf[i__ - 1], (ftnlen)sizeof(real));
+  }
+  e_rsle();
+  /*     Values of BETA */
+  s_rsle(&io___29);
+  do_lio(&c__3, &c__1, (char *)&nbet, (ftnlen)sizeof(integer));
+  e_rsle();
+  if (nbet < 1 || nbet > 7) {
+    s_wsfe(&io___31);
+    do_fio(&c__1, "BETA", (ftnlen)4);
+    do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
+    e_wsfe();
+    goto L220;
+  }
+  s_rsle(&io___32);
+  i__1 = nbet;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_lio(&c__4, &c__1, (char *)&bet[i__ - 1], (ftnlen)sizeof(real));
+  }
+  e_rsle();
+
+  /*     Report values of parameters. */
+
+  s_wsfe(&io___34);
+  e_wsfe();
+  s_wsfe(&io___35);
+  i__1 = nidim;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_fio(&c__1, (char *)&idim[i__ - 1], (ftnlen)sizeof(integer));
+  }
+  e_wsfe();
+  s_wsfe(&io___36);
+  i__1 = nalf;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_fio(&c__1, (char *)&alf[i__ - 1], (ftnlen)sizeof(real));
+  }
+  e_wsfe();
+  s_wsfe(&io___37);
+  i__1 = nbet;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_fio(&c__1, (char *)&bet[i__ - 1], (ftnlen)sizeof(real));
+  }
+  e_wsfe();
+  if (!tsterr) {
+    s_wsle(&io___38);
+    e_wsle();
+    s_wsfe(&io___39);
+    e_wsfe();
+  }
+  s_wsle(&io___40);
+  e_wsle();
+  s_wsfe(&io___41);
+  do_fio(&c__1, (char *)&thresh, (ftnlen)sizeof(real));
+  e_wsfe();
+  s_wsle(&io___42);
+  e_wsle();
+  rorder = FALSE_;
+  corder = FALSE_;
+  if (layout == 2) {
+    rorder = TRUE_;
+    corder = TRUE_;
+    s_wsfe(&io___45);
+    e_wsfe();
+  } else if (layout == 1) {
+    rorder = TRUE_;
+    s_wsfe(&io___46);
+    e_wsfe();
+  } else if (layout == 0) {
+    corder = TRUE_;
+    s_wsfe(&io___47);
+    e_wsfe();
+  }
+  s_wsle(&io___48);
+  e_wsle();
+
+  /*     Read names of subroutines and flags which indicate */
+  /*     whether they are to be tested. */
+
+  for (i__ = 1; i__ <= 6; ++i__) {
+    ltest[i__ - 1] = FALSE_;
+    /* L20: */
+  }
+L30:
+  i__1 = s_rsfe(&io___50);
+  if (i__1 != 0) {
+    goto L60;
+  }
+  i__1 = do_fio(&c__1, snamet, (ftnlen)12);
+  if (i__1 != 0) {
+    goto L60;
+  }
+  i__1 = do_fio(&c__1, (char *)&ltestt, (ftnlen)sizeof(logical));
+  if (i__1 != 0) {
+    goto L60;
+  }
+  i__1 = e_rsfe();
+  if (i__1 != 0) {
+    goto L60;
+  }
+  for (i__ = 1; i__ <= 6; ++i__) {
+    if (s_cmp(snamet, snames + (i__ - 1) * 12, (ftnlen)12, (ftnlen)12) == 0) {
+      goto L50;
+    }
+    /* L40: */
+  }
+  s_wsfe(&io___53);
+  do_fio(&c__1, snamet, (ftnlen)12);
+  e_wsfe();
+  s_stop("", (ftnlen)0);
+L50:
+  ltest[i__ - 1] = ltestt;
+  goto L30;
+
+L60:
+  cl__1.cerr = 0;
+  cl__1.cunit = 5;
+  cl__1.csta = 0;
+  f_clos(&cl__1);
+
+  /*     Compute EPS (the machine precision). */
+
+  eps = 1.f;
+L70:
+  r__1 = eps + 1.f;
+  if (sdiff_(&r__1, &c_b89) == 0.f) {
+    goto L80;
+  }
+  eps *= .5f;
+  goto L70;
+L80:
+  eps += eps;
+  s_wsfe(&io___55);
+  do_fio(&c__1, (char *)&eps, (ftnlen)sizeof(real));
+  e_wsfe();
+
+  /*     Check the reliability of SMMCH using exact data. */
+
+  n = 32;
+  i__1 = n;
+  for (j = 1; j <= i__1; ++j) {
+    i__2 = n;
+    for (i__ = 1; i__ <= i__2; ++i__) {
+      /* Computing MAX */
+      i__3 = i__ - j + 1;
+      ab[i__ + j * 65 - 66] = (real)max(i__3, 0);
+      /* L90: */
+    }
+    ab[j + 4224] = (real)j;
+    ab[(j + 65) * 65 - 65] = (real)j;
+    c__[j - 1] = 0.f;
+    /* L100: */
+  }
+  i__1 = n;
+  for (j = 1; j <= i__1; ++j) {
+    cc[j - 1] = (real)(j * ((j + 1) * j) / 2 - (j + 1) * j * (j - 1) / 3);
+    /* L110: */
+  }
+  /*     CC holds the exact result. On exit from SMMCH CT holds */
+  /*     the result computed by SMMCH. */
+  *(unsigned char *)transa = 'N';
+  *(unsigned char *)transb = 'N';
+  smmch_(transa, transb, &n, &c__1, &n, &c_b89, ab, &c__65, &ab[4225], &c__65,
+         &c_b103, c__, &c__65, ct, g, cc, &c__65, &eps, &err, &fatal, &c__6,
+         &c_true, (ftnlen)1, (ftnlen)1);
+  same = lse_(cc, ct, &n);
+  if (!same || err != 0.f) {
+    s_wsfe(&io___68);
+    do_fio(&c__1, transa, (ftnlen)1);
+    do_fio(&c__1, transb, (ftnlen)1);
+    do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
+    do_fio(&c__1, (char *)&err, (ftnlen)sizeof(real));
+    e_wsfe();
+    s_stop("", (ftnlen)0);
+  }
+  *(unsigned char *)transb = 'T';
+  smmch_(transa, transb, &n, &c__1, &n, &c_b89, ab, &c__65, &ab[4225], &c__65,
+         &c_b103, c__, &c__65, ct, g, cc, &c__65, &eps, &err, &fatal, &c__6,
+         &c_true, (ftnlen)1, (ftnlen)1);
+  same = lse_(cc, ct, &n);
+  if (!same || err != 0.f) {
+    s_wsfe(&io___69);
+    do_fio(&c__1, transa, (ftnlen)1);
+    do_fio(&c__1, transb, (ftnlen)1);
+    do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
+    do_fio(&c__1, (char *)&err, (ftnlen)sizeof(real));
+    e_wsfe();
+    s_stop("", (ftnlen)0);
+  }
+  i__1 = n;
+  for (j = 1; j <= i__1; ++j) {
+    ab[j + 4224] = (real)(n - j + 1);
+    ab[(j + 65) * 65 - 65] = (real)(n - j + 1);
+    /* L120: */
+  }
+  i__1 = n;
+  for (j = 1; j <= i__1; ++j) {
+    cc[n - j] = (real)(j * ((j + 1) * j) / 2 - (j + 1) * j * (j - 1) / 3);
+    /* L130: */
+  }
+  *(unsigned char *)transa = 'T';
+  *(unsigned char *)transb = 'N';
+  smmch_(transa, transb, &n, &c__1, &n, &c_b89, ab, &c__65, &ab[4225], &c__65,
+         &c_b103, c__, &c__65, ct, g, cc, &c__65, &eps, &err, &fatal, &c__6,
+         &c_true, (ftnlen)1, (ftnlen)1);
+  same = lse_(cc, ct, &n);
+  if (!same || err != 0.f) {
+    s_wsfe(&io___70);
+    do_fio(&c__1, transa, (ftnlen)1);
+    do_fio(&c__1, transb, (ftnlen)1);
+    do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
+    do_fio(&c__1, (char *)&err, (ftnlen)sizeof(real));
+    e_wsfe();
+    s_stop("", (ftnlen)0);
+  }
+  *(unsigned char *)transb = 'T';
+  smmch_(transa, transb, &n, &c__1, &n, &c_b89, ab, &c__65, &ab[4225], &c__65,
+         &c_b103, c__, &c__65, ct, g, cc, &c__65, &eps, &err, &fatal, &c__6,
+         &c_true, (ftnlen)1, (ftnlen)1);
+  same = lse_(cc, ct, &n);
+  if (!same || err != 0.f) {
+    s_wsfe(&io___71);
+    do_fio(&c__1, transa, (ftnlen)1);
+    do_fio(&c__1, transb, (ftnlen)1);
+    do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
+    do_fio(&c__1, (char *)&err, (ftnlen)sizeof(real));
+    e_wsfe();
+    s_stop("", (ftnlen)0);
+  }
+
+  /*     Test each subroutine in turn. */
+
+  for (isnum = 1; isnum <= 6; ++isnum) {
+    s_wsle(&io___73);
+    e_wsle();
+    if (!ltest[isnum - 1]) {
+      /*           Subprogram is not to be tested. */
+      s_wsfe(&io___74);
+      do_fio(&c__1, snames + (isnum - 1) * 12, (ftnlen)12);
+      e_wsfe();
+    } else {
+      s_copy(srnamc_1.srnamt, snames + (isnum - 1) * 12, (ftnlen)12,
+             (ftnlen)12);
+      /*           Test error exits. */
+      if (tsterr) {
+        cs3chke_(snames + (isnum - 1) * 12);
+        s_wsle(&io___75);
+        e_wsle();
+      }
+      /*           Test computations. */
+      infoc_1.infot = 0;
+      infoc_1.ok = TRUE_;
+      fatal = FALSE_;
+      switch (isnum) {
+      case 1:
+        goto L140;
+      case 2:
+        goto L150;
+      case 3:
+        goto L160;
+      case 4:
+        goto L160;
+      case 5:
+        goto L170;
+      case 6:
+        goto L180;
+      }
+    /*           Test SGEMM, 01. */
+    L140:
+      if (corder) {
+        schk1_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
+               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__0,
+               (ftnlen)12);
+      }
+      if (rorder) {
+        schk1_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
+               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__1,
+               (ftnlen)12);
+      }
+      goto L190;
+    /*           Test SSYMM, 02. */
+    L150:
+      if (corder) {
+        schk2_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
+               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__0,
+               (ftnlen)12);
+      }
+      if (rorder) {
+        schk2_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
+               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__1,
+               (ftnlen)12);
+      }
+      goto L190;
+    /*           Test STRMM, 03, STRSM, 04. */
+    L160:
+      if (corder) {
+        schk3_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &c__65, ab, aa, as,
+               &ab[4225], bb, bs, ct, g, c__, &c__0, (ftnlen)12);
+      }
+      if (rorder) {
+        schk3_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &c__65, ab, aa, as,
+               &ab[4225], bb, bs, ct, g, c__, &c__1, (ftnlen)12);
+      }
+      goto L190;
+    /*           Test SSYRK, 05. */
+    L170:
+      if (corder) {
+        schk4_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
+               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__0,
+               (ftnlen)12);
+      }
+      if (rorder) {
+        schk4_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
+               aa, as, &ab[4225], bb, bs, c__, cc, cs, ct, g, &c__1,
+               (ftnlen)12);
+      }
+      goto L190;
+    /*           Test SSYR2K, 06. */
+    L180:
+      if (corder) {
+        schk5_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
+               aa, as, bb, bs, c__, cc, cs, ct, g, w, &c__0, (ftnlen)12);
+      }
+      if (rorder) {
+        schk5_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &nbet, bet, &c__65, ab,
+               aa, as, bb, bs, c__, cc, cs, ct, g, w, &c__1, (ftnlen)12);
+      }
+      goto L190;
+
+    L190:
+      if (fatal && sfatal) {
+        goto L210;
+      }
+    }
+    /* L200: */
+  }
+  s_wsfe(&io___82);
+  e_wsfe();
+  goto L230;
+
+L210:
+  s_wsfe(&io___83);
+  e_wsfe();
+  goto L230;
+
+L220:
+  s_wsfe(&io___84);
+  e_wsfe();
+
+L230:
+  if (trace) {
+    cl__1.cerr = 0;
+    cl__1.cunit = ntra;
+    cl__1.csta = 0;
+    f_clos(&cl__1);
+  }
+  cl__1.cerr = 0;
+  cl__1.cunit = 6;
+  cl__1.csta = 0;
+  f_clos(&cl__1);
+  s_stop("", (ftnlen)0);
+
+  /*     End of SBLAT3. */
+
+  return 0;
+} /* MAIN__ */
+
+/* Subroutine */ int schk1_(char *sname, real *eps, real *thresh, integer *nout,
+                            integer *ntra, logical *trace, logical *rewi,
+                            logical *fatal, integer *nidim, integer *idim,
+                            integer *nalf, real *alf, integer *nbet, real *bet,
+                            integer *nmax, real *a, real *aa, real *as, real *b,
+                            real *bb, real *bs, real *c__, real *cc, real *cs,
+                            real *ct, real *g, integer *iorder,
+                            ftnlen sname_len) {
+  /* Initialized data */
+
+  static char ich[3] = "NTC";
+
+  /* Format strings */
+  static char fmt_9994[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_10000[] =
+      "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
+      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_10001[] =
+      "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
+      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_10002[] =
+      "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
+      "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
+      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
+      "ECT *******\002)";
+  static char fmt_10003[] =
+      "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
+      "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
+      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
+      "ECT *******\002)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2,
+      i__3, i__4, i__5, i__6, i__7;
+  alist al__1;
+
+  /* Builtin functions */
+  integer f_rew(alist *), s_wsfe(cilist *), e_wsfe(void),
+      do_fio(integer *, char *, ftnlen);
+
+  /* Local variables */
+  integer i__, k, m, n, ia, ib, ma, mb, na, nb, nc, ik, im, in, ks, ms, ns, ica,
+      icb, laa, lbb, lda, lcc, ldb, ldc;
+  real als, bls;
+  extern logical lse_(real *, real *, integer *);
+  real err, beta;
+  integer ldas, ldbs, ldcs;
+  logical same, null;
+  real alpha;
+  logical isame[13];
+  extern /* Subroutine */ int smake_(
+      char *, char *, char *, integer *, integer *, real *, integer *, real *,
+      integer *, logical *, real *, ftnlen, ftnlen, ftnlen);
+  logical trana, tranb;
+  extern /* Subroutine */ int smmch_(
+      char *, char *, integer *, integer *, integer *, real *, real *,
+      integer *, real *, integer *, real *, real *, integer *, real *, real *,
+      real *, integer *, real *, real *, logical *, integer *, logical *,
+      ftnlen, ftnlen);
+  integer nargs;
+  logical reset;
+  extern /* Subroutine */ int sprcn1_(
+      integer *, integer *, char *, integer *, char *, char *, integer *,
+      integer *, integer *, real *, integer *, integer *, real *, integer *,
+      ftnlen, ftnlen, ftnlen);
+  extern void csgemm_(integer *, char *, char *, integer *, integer *, integer *,
+                      real *, real *, integer *, real *, integer *, real *, real *,
+                      integer *);
+  char tranas[1], tranbs[1], transa[1], transb[1];
+  real errmax;
+  extern logical lseres_(char *, char *, integer *, integer *, real *, real *,
+                         integer *, ftnlen, ftnlen);
+
+  /* Fortran I/O blocks */
+  static cilist io___128 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___131 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___133 = {0, 0, 0, fmt_10000, 0};
+  static cilist io___134 = {0, 0, 0, fmt_10001, 0};
+  static cilist io___135 = {0, 0, 0, fmt_10002, 0};
+  static cilist io___136 = {0, 0, 0, fmt_10003, 0};
+  static cilist io___137 = {0, 0, 0, fmt_9996, 0};
+
+  /*  Tests SGEMM. */
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Parameters .. */
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Local Arrays .. */
+  /*     .. External Functions .. */
+  /*     .. External Subroutines .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. Scalars in Common .. */
+  /*     .. Common blocks .. */
+  /*     .. Data statements .. */
+  /* Parameter adjustments */
+  --idim;
+  --alf;
+  --bet;
+  --g;
+  --ct;
+  --cs;
+  --cc;
+  c_dim1 = *nmax;
+  c_offset = 1 + c_dim1;
+  c__ -= c_offset;
+  --bs;
+  --bb;
+  b_dim1 = *nmax;
+  b_offset = 1 + b_dim1;
+  b -= b_offset;
+  --as;
+  --aa;
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+
+  /* Function Body */
+  /*     .. Executable Statements .. */
+
+  nargs = 13;
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.f;
+
+  i__1 = *nidim;
+  for (im = 1; im <= i__1; ++im) {
+    m = idim[im];
+
+    i__2 = *nidim;
+    for (in = 1; in <= i__2; ++in) {
+      n = idim[in];
+      /*           Set LDC to 1 more than minimum value if room. */
+      ldc = m;
+      if (ldc < *nmax) {
+        ++ldc;
+      }
+      /*           Skip tests if not enough room. */
+      if (ldc > *nmax) {
+        goto L100;
+      }
+      lcc = ldc * n;
+      null = n <= 0 || m <= 0;
+
+      i__3 = *nidim;
+      for (ik = 1; ik <= i__3; ++ik) {
+        k = idim[ik];
+
+        for (ica = 1; ica <= 3; ++ica) {
+          *(unsigned char *)transa = *(unsigned char *)&ich[ica - 1];
+          trana = *(unsigned char *)transa == 'T' ||
+                  *(unsigned char *)transa == 'C';
+
+          if (trana) {
+            ma = k;
+            na = m;
+          } else {
+            ma = m;
+            na = k;
+          }
+          /*                 Set LDA to 1 more than minimum value if room. */
+          lda = ma;
+          if (lda < *nmax) {
+            ++lda;
+          }
+          /*                 Skip tests if not enough room. */
+          if (lda > *nmax) {
+            goto L80;
+          }
+          laa = lda * na;
+
+          /*                 Generate the matrix A. */
+
+          smake_("GE", " ", " ", &ma, &na, &a[a_offset], nmax, &aa[1], &lda,
+                 &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+          for (icb = 1; icb <= 3; ++icb) {
+            *(unsigned char *)transb = *(unsigned char *)&ich[icb - 1];
+            tranb = *(unsigned char *)transb == 'T' ||
+                    *(unsigned char *)transb == 'C';
+
+            if (tranb) {
+              mb = n;
+              nb = k;
+            } else {
+              mb = k;
+              nb = n;
+            }
+            /*                    Set LDB to 1 more than minimum value if room.
+             */
+            ldb = mb;
+            if (ldb < *nmax) {
+              ++ldb;
+            }
+            /*                    Skip tests if not enough room. */
+            if (ldb > *nmax) {
+              goto L70;
+            }
+            lbb = ldb * nb;
+
+            /*                    Generate the matrix B. */
+
+            smake_("GE", " ", " ", &mb, &nb, &b[b_offset], nmax, &bb[1], &ldb,
+                   &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+            i__4 = *nalf;
+            for (ia = 1; ia <= i__4; ++ia) {
+              alpha = alf[ia];
+
+              i__5 = *nbet;
+              for (ib = 1; ib <= i__5; ++ib) {
+                beta = bet[ib];
+
+                /*                          Generate the matrix C. */
+
+                smake_("GE", " ", " ", &m, &n, &c__[c_offset], nmax, &cc[1],
+                       &ldc, &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+                ++nc;
+
+                /*                          Save every datum before calling the
+                 */
+                /*                          subroutine. */
+
+                *(unsigned char *)tranas = *(unsigned char *)transa;
+                *(unsigned char *)tranbs = *(unsigned char *)transb;
+                ms = m;
+                ns = n;
+                ks = k;
+                als = alpha;
+                i__6 = laa;
+                for (i__ = 1; i__ <= i__6; ++i__) {
+                  as[i__] = aa[i__];
+                  /* L10: */
+                }
+                ldas = lda;
+                i__6 = lbb;
+                for (i__ = 1; i__ <= i__6; ++i__) {
+                  bs[i__] = bb[i__];
+                  /* L20: */
+                }
+                ldbs = ldb;
+                bls = beta;
+                i__6 = lcc;
+                for (i__ = 1; i__ <= i__6; ++i__) {
+                  cs[i__] = cc[i__];
+                  /* L30: */
+                }
+                ldcs = ldc;
+
+                /*                          Call the subroutine. */
+
+                if (*trace) {
+                  sprcn1_(ntra, &nc, sname, iorder, transa, transb, &m, &n, &k,
+                          &alpha, &lda, &ldb, &beta, &ldc, (ftnlen)12,
+                          (ftnlen)1, (ftnlen)1);
+                }
+                if (*rewi) {
+                  al__1.aerr = 0;
+                  al__1.aunit = *ntra;
+                  f_rew(&al__1);
+                }
+                csgemm_(iorder, transa, transb, &m, &n, &k, &alpha, &aa[1],
+                        &lda, &bb[1], &ldb, &beta, &cc[1], &ldc);
+
+                /*                          Check if error-exit was taken
+                 * incorrectly. */
+
+                if (!infoc_1.ok) {
+                  io___128.ciunit = *nout;
+                  s_wsfe(&io___128);
+                  e_wsfe();
+                  *fatal = TRUE_;
+                  goto L120;
+                }
+
+                /*                          See what data changed inside
+                 * subroutines. */
+
+                isame[0] = *(unsigned char *)transa == *(unsigned char *)tranas;
+                isame[1] = *(unsigned char *)transb == *(unsigned char *)tranbs;
+                isame[2] = ms == m;
+                isame[3] = ns == n;
+                isame[4] = ks == k;
+                isame[5] = als == alpha;
+                isame[6] = lse_(&as[1], &aa[1], &laa);
+                isame[7] = ldas == lda;
+                isame[8] = lse_(&bs[1], &bb[1], &lbb);
+                isame[9] = ldbs == ldb;
+                isame[10] = bls == beta;
+                if (null) {
+                  isame[11] = lse_(&cs[1], &cc[1], &lcc);
+                } else {
+                  isame[11] = lseres_("GE", " ", &m, &n, &cs[1], &cc[1], &ldc,
+                                      (ftnlen)2, (ftnlen)1);
+                }
+                isame[12] = ldcs == ldc;
+
+                /*                          If data was incorrectly changed,
+                 * report */
+                /*                          and return. */
+
+                same = TRUE_;
+                i__6 = nargs;
+                for (i__ = 1; i__ <= i__6; ++i__) {
+                  same = same && isame[i__ - 1];
+                  if (!isame[i__ - 1]) {
+                    io___131.ciunit = *nout;
+                    s_wsfe(&io___131);
+                    i__7 = i__ + 1;
+                    do_fio(&c__1, (char *)&i__7, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  /* L40: */
+                }
+                if (!same) {
+                  *fatal = TRUE_;
+                  goto L120;
+                }
+
+                if (!null) {
+
+                  /*                             Check the result. */
+
+                  smmch_(transa, transb, &m, &n, &k, &alpha, &a[a_offset], nmax,
+                         &b[b_offset], nmax, &beta, &c__[c_offset], nmax,
+                         &ct[1], &g[1], &cc[1], &ldc, eps, &err, fatal, nout,
+                         &c_true, (ftnlen)1, (ftnlen)1);
+                  errmax = max(errmax, err);
+                  /*                             If got really bad answer,
+                   * report and */
+                  /*                             return. */
+                  if (*fatal) {
+                    goto L120;
+                  }
+                }
+
+                /* L50: */
+              }
+
+              /* L60: */
+            }
+
+          L70:;
+          }
+
+        L80:;
+        }
+
+        /* L90: */
+      }
+
+    L100:;
+    }
+
+    /* L110: */
+  }
+
+  /*     Report result. */
+
+  if (errmax < *thresh) {
+    if (*iorder == 0) {
+      io___133.ciunit = *nout;
+      s_wsfe(&io___133);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      e_wsfe();
+    }
+    if (*iorder == 1) {
+      io___134.ciunit = *nout;
+      s_wsfe(&io___134);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      e_wsfe();
+    }
+  } else {
+    if (*iorder == 0) {
+      io___135.ciunit = *nout;
+      s_wsfe(&io___135);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+    if (*iorder == 1) {
+      io___136.ciunit = *nout;
+      s_wsfe(&io___136);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+  }
+  goto L130;
+
+L120:
+  io___137.ciunit = *nout;
+  s_wsfe(&io___137);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  sprcn1_(nout, &nc, sname, iorder, transa, transb, &m, &n, &k, &alpha, &lda,
+          &ldb, &beta, &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);
+
+L130:
+  return 0;
+
+  /* L9995: */
+
+  /*     End of SCHK1. */
+
+} /* schk1_ */
+
+/* Subroutine */ int sprcn1_(integer *nout, integer *nc, char *sname,
+                             integer *iorder, char *transa, char *transb,
+                             integer *m, integer *n, integer *k, real *alpha,
+                             integer *lda, integer *ldb, real *beta,
+                             integer *ldc, ftnlen sname_len, ftnlen transa_len,
+                             ftnlen transb_len) {
+  /* Format strings */
+  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+                           "a14,\002,\002,a14,\002,\002)";
+  static char fmt_9994[] =
+      "(20x,3(i3,\002,\002),f4.1,\002, A,\002,i3,\002"
+      ", B,\002,i3,\002,\002,f4.1,\002, \002,\002C,\002,i3,\002).\002)";
+
+  /* Builtin functions */
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);
+
+  /* Local variables */
+  char crc[14], cta[14], ctb[14];
+
+  /* Fortran I/O blocks */
+  static cilist io___141 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___142 = {0, 0, 0, fmt_9994, 0};
+
+  if (*(unsigned char *)transa == 'N') {
+    s_copy(cta, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
+  } else if (*(unsigned char *)transa == 'T') {
+    s_copy(cta, "    CblasTrans", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(cta, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
+  }
+  if (*(unsigned char *)transb == 'N') {
+    s_copy(ctb, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
+  } else if (*(unsigned char *)transb == 'T') {
+    s_copy(ctb, "    CblasTrans", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(ctb, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
+  }
+  if (*iorder == 1) {
+    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
+  }
+  io___141.ciunit = *nout;
+  s_wsfe(&io___141);
+  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
+  do_fio(&c__1, sname, (ftnlen)12);
+  do_fio(&c__1, crc, (ftnlen)14);
+  do_fio(&c__1, cta, (ftnlen)14);
+  do_fio(&c__1, ctb, (ftnlen)14);
+  e_wsfe();
+  io___142.ciunit = *nout;
+  s_wsfe(&io___142);
+  do_fio(&c__1, (char *)&(*m), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*k), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*alpha), (ftnlen)sizeof(real));
+  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*ldb), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*beta), (ftnlen)sizeof(real));
+  do_fio(&c__1, (char *)&(*ldc), (ftnlen)sizeof(integer));
+  e_wsfe();
+  return 0;
+} /* sprcn1_ */
+
+/* Subroutine */ int schk2_(char *sname, real *eps, real *thresh, integer *nout,
+                            integer *ntra, logical *trace, logical *rewi,
+                            logical *fatal, integer *nidim, integer *idim,
+                            integer *nalf, real *alf, integer *nbet, real *bet,
+                            integer *nmax, real *a, real *aa, real *as, real *b,
+                            real *bb, real *bs, real *c__, real *cc, real *cs,
+                            real *ct, real *g, integer *iorder,
+                            ftnlen sname_len) {
+  /* Initialized data */
+
+  static char ichs[2] = "LR";
+  static char ichu[2] = "UL";
+
+  /* Format strings */
+  static char fmt_9994[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_10000[] =
+      "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
+      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_10001[] =
+      "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
+      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_10002[] =
+      "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
+      "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
+      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
+      "ECT *******\002)";
+  static char fmt_10003[] =
+      "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
+      "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
+      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
+      "ECT *******\002)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2,
+      i__3, i__4, i__5, i__6;
+  alist al__1;
+
+  /* Builtin functions */
+  integer f_rew(alist *), s_wsfe(cilist *), e_wsfe(void),
+      do_fio(integer *, char *, ftnlen);
+
+  /* Local variables */
+  integer i__, m, n, ia, ib, na, nc, im, in, ms, ns, laa, lbb, lda, lcc, ldb,
+      ldc, ics;
+  real als, bls;
+  integer icu;
+  extern logical lse_(real *, real *, integer *);
+  real err, beta;
+  integer ldas, ldbs, ldcs;
+  logical same;
+  char side[1];
+  logical left, null;
+  char uplo[1];
+  real alpha;
+  logical isame[13];
+  extern /* Subroutine */ int smake_(
+      char *, char *, char *, integer *, integer *, real *, integer *, real *,
+      integer *, logical *, real *, ftnlen, ftnlen, ftnlen);
+  char sides[1];
+  extern /* Subroutine */ int smmch_(
+      char *, char *, integer *, integer *, integer *, real *, real *,
+      integer *, real *, integer *, real *, real *, integer *, real *, real *,
+      real *, integer *, real *, real *, logical *, integer *, logical *,
+      ftnlen, ftnlen);
+  integer nargs;
+  logical reset;
+  char uplos[1];
+  extern /* Subroutine */ int sprcn2_(integer *, integer *, char *, integer *,
+                                      char *, char *, integer *, integer *,
+                                      real *, integer *, integer *, real *,
+                                      integer *, ftnlen, ftnlen, ftnlen);
+  real errmax;
+  extern logical lseres_(char *, char *, integer *, integer *, real *, real *,
+                         integer *, ftnlen, ftnlen);
+  extern /* Subroutine */ void cssymm_(
+      integer *, char *, char *, integer *, integer *, real *, real *,
+      integer *, real *, integer *, real *, real *, integer *);
+
+  /* Fortran I/O blocks */
+  static cilist io___180 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___183 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___185 = {0, 0, 0, fmt_10000, 0};
+  static cilist io___186 = {0, 0, 0, fmt_10001, 0};
+  static cilist io___187 = {0, 0, 0, fmt_10002, 0};
+  static cilist io___188 = {0, 0, 0, fmt_10003, 0};
+  static cilist io___189 = {0, 0, 0, fmt_9996, 0};
+
+  /*  Tests SSYMM. */
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Parameters .. */
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Local Arrays .. */
+  /*     .. External Functions .. */
+  /*     .. External Subroutines .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. Scalars in Common .. */
+  /*     .. Common blocks .. */
+  /*     .. Data statements .. */
+  /* Parameter adjustments */
+  --idim;
+  --alf;
+  --bet;
+  --g;
+  --ct;
+  --cs;
+  --cc;
+  c_dim1 = *nmax;
+  c_offset = 1 + c_dim1;
+  c__ -= c_offset;
+  --bs;
+  --bb;
+  b_dim1 = *nmax;
+  b_offset = 1 + b_dim1;
+  b -= b_offset;
+  --as;
+  --aa;
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+
+  /* Function Body */
+  /*     .. Executable Statements .. */
+
+  nargs = 12;
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.f;
+
+  i__1 = *nidim;
+  for (im = 1; im <= i__1; ++im) {
+    m = idim[im];
+
+    i__2 = *nidim;
+    for (in = 1; in <= i__2; ++in) {
+      n = idim[in];
+      /*           Set LDC to 1 more than minimum value if room. */
+      ldc = m;
+      if (ldc < *nmax) {
+        ++ldc;
+      }
+      /*           Skip tests if not enough room. */
+      if (ldc > *nmax) {
+        goto L90;
+      }
+      lcc = ldc * n;
+      null = n <= 0 || m <= 0;
+
+      /*           Set LDB to 1 more than minimum value if room. */
+      ldb = m;
+      if (ldb < *nmax) {
+        ++ldb;
+      }
+      /*           Skip tests if not enough room. */
+      if (ldb > *nmax) {
+        goto L90;
+      }
+      lbb = ldb * n;
+
+      /*           Generate the matrix B. */
+
+      smake_("GE", " ", " ", &m, &n, &b[b_offset], nmax, &bb[1], &ldb, &reset,
+             &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+      for (ics = 1; ics <= 2; ++ics) {
+        *(unsigned char *)side = *(unsigned char *)&ichs[ics - 1];
+        left = *(unsigned char *)side == 'L';
+
+        if (left) {
+          na = m;
+        } else {
+          na = n;
+        }
+        /*              Set LDA to 1 more than minimum value if room. */
+        lda = na;
+        if (lda < *nmax) {
+          ++lda;
+        }
+        /*              Skip tests if not enough room. */
+        if (lda > *nmax) {
+          goto L80;
+        }
+        laa = lda * na;
+
+        for (icu = 1; icu <= 2; ++icu) {
+          *(unsigned char *)uplo = *(unsigned char *)&ichu[icu - 1];
+
+          /*                 Generate the symmetric matrix A. */
+
+          smake_("SY", uplo, " ", &na, &na, &a[a_offset], nmax, &aa[1], &lda,
+                 &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+          i__3 = *nalf;
+          for (ia = 1; ia <= i__3; ++ia) {
+            alpha = alf[ia];
+
+            i__4 = *nbet;
+            for (ib = 1; ib <= i__4; ++ib) {
+              beta = bet[ib];
+
+              /*                       Generate the matrix C. */
+
+              smake_("GE", " ", " ", &m, &n, &c__[c_offset], nmax, &cc[1], &ldc,
+                     &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+              ++nc;
+
+              /*                       Save every datum before calling the */
+              /*                       subroutine. */
+
+              *(unsigned char *)sides = *(unsigned char *)side;
+              *(unsigned char *)uplos = *(unsigned char *)uplo;
+              ms = m;
+              ns = n;
+              als = alpha;
+              i__5 = laa;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                as[i__] = aa[i__];
+                /* L10: */
+              }
+              ldas = lda;
+              i__5 = lbb;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                bs[i__] = bb[i__];
+                /* L20: */
+              }
+              ldbs = ldb;
+              bls = beta;
+              i__5 = lcc;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                cs[i__] = cc[i__];
+                /* L30: */
+              }
+              ldcs = ldc;
+
+              /*                       Call the subroutine. */
+
+              if (*trace) {
+                sprcn2_(ntra, &nc, sname, iorder, side, uplo, &m, &n, &alpha,
+                        &lda, &ldb, &beta, &ldc, (ftnlen)12, (ftnlen)1,
+                        (ftnlen)1);
+              }
+              if (*rewi) {
+                al__1.aerr = 0;
+                al__1.aunit = *ntra;
+                f_rew(&al__1);
+              }
+              cssymm_(iorder, side, uplo, &m, &n, &alpha, &aa[1], &lda, &bb[1],
+                      &ldb, &beta, &cc[1], &ldc);
+
+              /*                       Check if error-exit was taken
+               * incorrectly. */
+
+              if (!infoc_1.ok) {
+                io___180.ciunit = *nout;
+                s_wsfe(&io___180);
+                e_wsfe();
+                *fatal = TRUE_;
+                goto L110;
+              }
+
+              /*                       See what data changed inside subroutines.
+               */
+
+              isame[0] = *(unsigned char *)sides == *(unsigned char *)side;
+              isame[1] = *(unsigned char *)uplos == *(unsigned char *)uplo;
+              isame[2] = ms == m;
+              isame[3] = ns == n;
+              isame[4] = als == alpha;
+              isame[5] = lse_(&as[1], &aa[1], &laa);
+              isame[6] = ldas == lda;
+              isame[7] = lse_(&bs[1], &bb[1], &lbb);
+              isame[8] = ldbs == ldb;
+              isame[9] = bls == beta;
+              if (null) {
+                isame[10] = lse_(&cs[1], &cc[1], &lcc);
+              } else {
+                isame[10] = lseres_("GE", " ", &m, &n, &cs[1], &cc[1], &ldc,
+                                    (ftnlen)2, (ftnlen)1);
+              }
+              isame[11] = ldcs == ldc;
+
+              /*                       If data was incorrectly changed, report
+               * and */
+              /*                       return. */
+
+              same = TRUE_;
+              i__5 = nargs;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                same = same && isame[i__ - 1];
+                if (!isame[i__ - 1]) {
+                  io___183.ciunit = *nout;
+                  s_wsfe(&io___183);
+                  i__6 = i__ + 1;
+                  do_fio(&c__1, (char *)&i__6, (ftnlen)sizeof(integer));
+                  e_wsfe();
+                }
+                /* L40: */
+              }
+              if (!same) {
+                *fatal = TRUE_;
+                goto L110;
+              }
+
+              if (!null) {
+
+                /*                          Check the result. */
+
+                if (left) {
+                  smmch_("N", "N", &m, &n, &m, &alpha, &a[a_offset], nmax,
+                         &b[b_offset], nmax, &beta, &c__[c_offset], nmax,
+                         &ct[1], &g[1], &cc[1], &ldc, eps, &err, fatal, nout,
+                         &c_true, (ftnlen)1, (ftnlen)1);
+                } else {
+                  smmch_("N", "N", &m, &n, &n, &alpha, &b[b_offset], nmax,
+                         &a[a_offset], nmax, &beta, &c__[c_offset], nmax,
+                         &ct[1], &g[1], &cc[1], &ldc, eps, &err, fatal, nout,
+                         &c_true, (ftnlen)1, (ftnlen)1);
+                }
+                errmax = max(errmax, err);
+                /*                          If got really bad answer, report and
+                 */
+                /*                          return. */
+                if (*fatal) {
+                  goto L110;
+                }
+              }
+
+              /* L50: */
+            }
+
+            /* L60: */
+          }
+
+          /* L70: */
+        }
+
+      L80:;
+      }
+
+    L90:;
+    }
+
+    /* L100: */
+  }
+
+  /*     Report result. */
+
+  if (errmax < *thresh) {
+    if (*iorder == 0) {
+      io___185.ciunit = *nout;
+      s_wsfe(&io___185);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      e_wsfe();
+    }
+    if (*iorder == 1) {
+      io___186.ciunit = *nout;
+      s_wsfe(&io___186);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      e_wsfe();
+    }
+  } else {
+    if (*iorder == 0) {
+      io___187.ciunit = *nout;
+      s_wsfe(&io___187);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+    if (*iorder == 1) {
+      io___188.ciunit = *nout;
+      s_wsfe(&io___188);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+  }
+  goto L120;
+
+L110:
+  io___189.ciunit = *nout;
+  s_wsfe(&io___189);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  sprcn2_(nout, &nc, sname, iorder, side, uplo, &m, &n, &alpha, &lda, &ldb,
+          &beta, &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);
+
+L120:
+  return 0;
+
+  /* L9995: */
+
+  /*     End of SCHK2. */
+
+} /* schk2_ */
+
+/* Subroutine */ int sprcn2_(integer *nout, integer *nc, char *sname,
+                             integer *iorder, char *side, char *uplo,
+                             integer *m, integer *n, real *alpha, integer *lda,
+                             integer *ldb, real *beta, integer *ldc,
+                             ftnlen sname_len, ftnlen side_len,
+                             ftnlen uplo_len) {
+  /* Format strings */
+  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+                           "a14,\002,\002,a14,\002,\002)";
+  static char fmt_9994[] =
+      "(20x,2(i3,\002,\002),f4.1,\002, A,\002,i3,\002"
+      ", B,\002,i3,\002,\002,f4.1,\002, \002,\002C,\002,i3,\002).\002)";
+
+  /* Builtin functions */
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);
+
+  /* Local variables */
+  char cs[14], cu[14], crc[14];
+
+  /* Fortran I/O blocks */
+  static cilist io___193 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___194 = {0, 0, 0, fmt_9994, 0};
+
+  if (*(unsigned char *)side == 'L') {
+    s_copy(cs, "     CblasLeft", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(cs, "    CblasRight", (ftnlen)14, (ftnlen)14);
+  }
+  if (*(unsigned char *)uplo == 'U') {
+    s_copy(cu, "    CblasUpper", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(cu, "    CblasLower", (ftnlen)14, (ftnlen)14);
+  }
+  if (*iorder == 1) {
+    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
+  }
+  io___193.ciunit = *nout;
+  s_wsfe(&io___193);
+  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
+  do_fio(&c__1, sname, (ftnlen)12);
+  do_fio(&c__1, crc, (ftnlen)14);
+  do_fio(&c__1, cs, (ftnlen)14);
+  do_fio(&c__1, cu, (ftnlen)14);
+  e_wsfe();
+  io___194.ciunit = *nout;
+  s_wsfe(&io___194);
+  do_fio(&c__1, (char *)&(*m), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*alpha), (ftnlen)sizeof(real));
+  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*ldb), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*beta), (ftnlen)sizeof(real));
+  do_fio(&c__1, (char *)&(*ldc), (ftnlen)sizeof(integer));
+  e_wsfe();
+  return 0;
+} /* sprcn2_ */
+
+/* Subroutine */ int schk3_(char *sname, real *eps, real *thresh, integer *nout,
+                            integer *ntra, logical *trace, logical *rewi,
+                            logical *fatal, integer *nidim, integer *idim,
+                            integer *nalf, real *alf, integer *nmax, real *a,
+                            real *aa, real *as, real *b, real *bb, real *bs,
+                            real *ct, real *g, real *c__, integer *iorder,
+                            ftnlen sname_len) {
+  /* Initialized data */
+
+  static char ichu[2] = "UL";
+  static char icht[3] = "NTC";
+  static char ichd[2] = "UN";
+  static char ichs[2] = "LR";
+
+  /* Format strings */
+  static char fmt_9994[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_10000[] =
+      "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
+      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_10001[] =
+      "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
+      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_10002[] =
+      "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
+      "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
+      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
+      "ECT *******\002)";
+  static char fmt_10003[] =
+      "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
+      "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
+      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
+      "ECT *******\002)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2,
+      i__3, i__4, i__5;
+  alist al__1;
+
+  /* Builtin functions */
+  integer s_cmp(char *, char *, ftnlen, ftnlen), f_rew(alist *),
+      s_wsfe(cilist *), e_wsfe(void), do_fio(integer *, char *, ftnlen);
+
+  /* Local variables */
+  integer i__, j, m, n, ia, na, nc, im, in, ms, ns, laa, icd, lbb, lda, ldb,
+      ics;
+  real als;
+  integer ict, icu;
+  extern logical lse_(real *, real *, integer *);
+  real err;
+  char diag[1];
+  integer ldas, ldbs;
+  logical same;
+  char side[1];
+  logical left, null;
+  char uplo[1];
+  real alpha;
+  char diags[1];
+  logical isame[13];
+  extern /* Subroutine */ int smake_(
+      char *, char *, char *, integer *, integer *, real *, integer *, real *,
+      integer *, logical *, real *, ftnlen, ftnlen, ftnlen);
+  char sides[1];
+  extern /* Subroutine */ int smmch_(
+      char *, char *, integer *, integer *, integer *, real *, real *,
+      integer *, real *, integer *, real *, real *, integer *, real *, real *,
+      real *, integer *, real *, real *, logical *, integer *, logical *,
+      ftnlen, ftnlen);
+  integer nargs;
+  logical reset;
+  char uplos[1];
+  extern /* Subroutine */ int sprcn3_(integer *, integer *, char *, integer *,
+                                      char *, char *, char *, char *, integer *,
+                                      integer *, real *, integer *, integer *,
+                                      ftnlen, ftnlen, ftnlen, ftnlen, ftnlen);
+  char tranas[1], transa[1];
+  real errmax;
+  extern logical lseres_(char *, char *, integer *, integer *, real *, real *,
+                         integer *, ftnlen, ftnlen);
+  extern /* Subroutine */ void cstrmm_(
+      integer *, char *, char *, char *, char *, integer *, integer *, real *,
+      real *, integer *, real *, integer *),
+      cstrsm_(integer *, char *, char *, char *, char *, integer *, integer *,
+              real *, real *, integer *, real *, integer *);
+
+  /* Fortran I/O blocks */
+  static cilist io___235 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___238 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___240 = {0, 0, 0, fmt_10000, 0};
+  static cilist io___241 = {0, 0, 0, fmt_10001, 0};
+  static cilist io___242 = {0, 0, 0, fmt_10002, 0};
+  static cilist io___243 = {0, 0, 0, fmt_10003, 0};
+  static cilist io___244 = {0, 0, 0, fmt_9996, 0};
+
+  /*  Tests STRMM and STRSM. */
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Parameters .. */
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Local Arrays .. */
+  /*     .. External Functions .. */
+  /*     .. External Subroutines .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. Scalars in Common .. */
+  /*     .. Common blocks .. */
+  /*     .. Data statements .. */
+  /* Parameter adjustments */
+  --idim;
+  --alf;
+  c_dim1 = *nmax;
+  c_offset = 1 + c_dim1;
+  c__ -= c_offset;
+  --g;
+  --ct;
+  --bs;
+  --bb;
+  b_dim1 = *nmax;
+  b_offset = 1 + b_dim1;
+  b -= b_offset;
+  --as;
+  --aa;
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+
+  /* Function Body */
+  /*     .. Executable Statements .. */
+
+  nargs = 11;
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.f;
+  /*     Set up zero matrix for SMMCH. */
+  i__1 = *nmax;
+  for (j = 1; j <= i__1; ++j) {
+    i__2 = *nmax;
+    for (i__ = 1; i__ <= i__2; ++i__) {
+      c__[i__ + j * c_dim1] = 0.f;
+      /* L10: */
+    }
+    /* L20: */
+  }
+
+  i__1 = *nidim;
+  for (im = 1; im <= i__1; ++im) {
+    m = idim[im];
+
+    i__2 = *nidim;
+    for (in = 1; in <= i__2; ++in) {
+      n = idim[in];
+      /*           Set LDB to 1 more than minimum value if room. */
+      ldb = m;
+      if (ldb < *nmax) {
+        ++ldb;
+      }
+      /*           Skip tests if not enough room. */
+      if (ldb > *nmax) {
+        goto L130;
+      }
+      lbb = ldb * n;
+      null = m <= 0 || n <= 0;
+
+      for (ics = 1; ics <= 2; ++ics) {
+        *(unsigned char *)side = *(unsigned char *)&ichs[ics - 1];
+        left = *(unsigned char *)side == 'L';
+        if (left) {
+          na = m;
+        } else {
+          na = n;
+        }
+        /*              Set LDA to 1 more than minimum value if room. */
+        lda = na;
+        if (lda < *nmax) {
+          ++lda;
+        }
+        /*              Skip tests if not enough room. */
+        if (lda > *nmax) {
+          goto L130;
+        }
+        laa = lda * na;
+
+        for (icu = 1; icu <= 2; ++icu) {
+          *(unsigned char *)uplo = *(unsigned char *)&ichu[icu - 1];
+
+          for (ict = 1; ict <= 3; ++ict) {
+            *(unsigned char *)transa = *(unsigned char *)&icht[ict - 1];
+
+            for (icd = 1; icd <= 2; ++icd) {
+              *(unsigned char *)diag = *(unsigned char *)&ichd[icd - 1];
+
+              i__3 = *nalf;
+              for (ia = 1; ia <= i__3; ++ia) {
+                alpha = alf[ia];
+
+                /*                          Generate the matrix A. */
+
+                smake_("TR", uplo, diag, &na, &na, &a[a_offset], nmax, &aa[1],
+                       &lda, &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+                /*                          Generate the matrix B. */
+
+                smake_("GE", " ", " ", &m, &n, &b[b_offset], nmax, &bb[1], &ldb,
+                       &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+                ++nc;
+
+                /*                          Save every datum before calling the
+                 */
+                /*                          subroutine. */
+
+                *(unsigned char *)sides = *(unsigned char *)side;
+                *(unsigned char *)uplos = *(unsigned char *)uplo;
+                *(unsigned char *)tranas = *(unsigned char *)transa;
+                *(unsigned char *)diags = *(unsigned char *)diag;
+                ms = m;
+                ns = n;
+                als = alpha;
+                i__4 = laa;
+                for (i__ = 1; i__ <= i__4; ++i__) {
+                  as[i__] = aa[i__];
+                  /* L30: */
+                }
+                ldas = lda;
+                i__4 = lbb;
+                for (i__ = 1; i__ <= i__4; ++i__) {
+                  bs[i__] = bb[i__];
+                  /* L40: */
+                }
+                ldbs = ldb;
+
+                /*                          Call the subroutine. */
+
+                if (s_cmp(sname + 9, "mm", (ftnlen)2, (ftnlen)2) == 0) {
+                  if (*trace) {
+                    sprcn3_(ntra, &nc, sname, iorder, side, uplo, transa, diag,
+                            &m, &n, &alpha, &lda, &ldb, (ftnlen)12, (ftnlen)1,
+                            (ftnlen)1, (ftnlen)1, (ftnlen)1);
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  cstrmm_(iorder, side, uplo, transa, diag, &m, &n, &alpha,
+                          &aa[1], &lda, &bb[1], &ldb);
+                } else if (s_cmp(sname + 9, "sm", (ftnlen)2, (ftnlen)2) == 0) {
+                  if (*trace) {
+                    sprcn3_(ntra, &nc, sname, iorder, side, uplo, transa, diag,
+                            &m, &n, &alpha, &lda, &ldb, (ftnlen)12, (ftnlen)1,
+                            (ftnlen)1, (ftnlen)1, (ftnlen)1);
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  cstrsm_(iorder, side, uplo, transa, diag, &m, &n, &alpha,
+                          &aa[1], &lda, &bb[1], &ldb);
+                }
+
+                /*                          Check if error-exit was taken
+                 * incorrectly. */
+
+                if (!infoc_1.ok) {
+                  io___235.ciunit = *nout;
+                  s_wsfe(&io___235);
+                  e_wsfe();
+                  *fatal = TRUE_;
+                  goto L150;
+                }
+
+                /*                          See what data changed inside
+                 * subroutines. */
+
+                isame[0] = *(unsigned char *)sides == *(unsigned char *)side;
+                isame[1] = *(unsigned char *)uplos == *(unsigned char *)uplo;
+                isame[2] = *(unsigned char *)tranas == *(unsigned char *)transa;
+                isame[3] = *(unsigned char *)diags == *(unsigned char *)diag;
+                isame[4] = ms == m;
+                isame[5] = ns == n;
+                isame[6] = als == alpha;
+                isame[7] = lse_(&as[1], &aa[1], &laa);
+                isame[8] = ldas == lda;
+                if (null) {
+                  isame[9] = lse_(&bs[1], &bb[1], &lbb);
+                } else {
+                  isame[9] = lseres_("GE", " ", &m, &n, &bs[1], &bb[1], &ldb,
+                                     (ftnlen)2, (ftnlen)1);
+                }
+                isame[10] = ldbs == ldb;
+
+                /*                          If data was incorrectly changed,
+                 * report and */
+                /*                          return. */
+
+                same = TRUE_;
+                i__4 = nargs;
+                for (i__ = 1; i__ <= i__4; ++i__) {
+                  same = same && isame[i__ - 1];
+                  if (!isame[i__ - 1]) {
+                    io___238.ciunit = *nout;
+                    s_wsfe(&io___238);
+                    i__5 = i__ + 1;
+                    do_fio(&c__1, (char *)&i__5, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  /* L50: */
+                }
+                if (!same) {
+                  *fatal = TRUE_;
+                  goto L150;
+                }
+
+                if (!null) {
+                  if (s_cmp(sname + 9, "mm", (ftnlen)2, (ftnlen)2) == 0) {
+
+                    /*                                Check the result. */
+
+                    if (left) {
+                      smmch_(transa, "N", &m, &n, &m, &alpha, &a[a_offset],
+                             nmax, &b[b_offset], nmax, &c_b103, &c__[c_offset],
+                             nmax, &ct[1], &g[1], &bb[1], &ldb, eps, &err,
+                             fatal, nout, &c_true, (ftnlen)1, (ftnlen)1);
+                    } else {
+                      smmch_("N", transa, &m, &n, &n, &alpha, &b[b_offset],
+                             nmax, &a[a_offset], nmax, &c_b103, &c__[c_offset],
+                             nmax, &ct[1], &g[1], &bb[1], &ldb, eps, &err,
+                             fatal, nout, &c_true, (ftnlen)1, (ftnlen)1);
+                    }
+                  } else if (s_cmp(sname + 9, "sm", (ftnlen)2, (ftnlen)2) ==
+                             0) {
+
+                    /*                                Compute approximation to
+                     * original */
+                    /*                                matrix. */
+
+                    i__4 = n;
+                    for (j = 1; j <= i__4; ++j) {
+                      i__5 = m;
+                      for (i__ = 1; i__ <= i__5; ++i__) {
+                        c__[i__ + j * c_dim1] = bb[i__ + (j - 1) * ldb];
+                        bb[i__ + (j - 1) * ldb] = alpha * b[i__ + j * b_dim1];
+                        /* L60: */
+                      }
+                      /* L70: */
+                    }
+
+                    if (left) {
+                      smmch_(transa, "N", &m, &n, &m, &c_b89, &a[a_offset],
+                             nmax, &c__[c_offset], nmax, &c_b103, &b[b_offset],
+                             nmax, &ct[1], &g[1], &bb[1], &ldb, eps, &err,
+                             fatal, nout, &c_false, (ftnlen)1, (ftnlen)1);
+                    } else {
+                      smmch_("N", transa, &m, &n, &n, &c_b89, &c__[c_offset],
+                             nmax, &a[a_offset], nmax, &c_b103, &b[b_offset],
+                             nmax, &ct[1], &g[1], &bb[1], &ldb, eps, &err,
+                             fatal, nout, &c_false, (ftnlen)1, (ftnlen)1);
+                    }
+                  }
+                  errmax = max(errmax, err);
+                  /*                             If got really bad answer,
+                   * report and */
+                  /*                             return. */
+                  if (*fatal) {
+                    goto L150;
+                  }
+                }
+
+                /* L80: */
+              }
+
+              /* L90: */
+            }
+
+            /* L100: */
+          }
+
+          /* L110: */
+        }
+
+        /* L120: */
+      }
+
+    L130:;
+    }
+
+    /* L140: */
+  }
+
+  /*     Report result. */
+
+  if (errmax < *thresh) {
+    if (*iorder == 0) {
+      io___240.ciunit = *nout;
+      s_wsfe(&io___240);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      e_wsfe();
+    }
+    if (*iorder == 1) {
+      io___241.ciunit = *nout;
+      s_wsfe(&io___241);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      e_wsfe();
+    }
+  } else {
+    if (*iorder == 0) {
+      io___242.ciunit = *nout;
+      s_wsfe(&io___242);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+    if (*iorder == 1) {
+      io___243.ciunit = *nout;
+      s_wsfe(&io___243);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+  }
+  goto L160;
+
+L150:
+  io___244.ciunit = *nout;
+  s_wsfe(&io___244);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  sprcn3_(ntra, &nc, sname, iorder, side, uplo, transa, diag, &m, &n, &alpha,
+          &lda, &ldb, (ftnlen)12, (ftnlen)1, (ftnlen)1, (ftnlen)1, (ftnlen)1);
+
+L160:
+  return 0;
+
+  /* L9995: */
+
+  /*     End of SCHK3. */
+
+} /* schk3_ */
+
+/* Subroutine */ int sprcn3_(integer *nout, integer *nc, char *sname,
+                             integer *iorder, char *side, char *uplo,
+                             char *transa, char *diag, integer *m, integer *n,
+                             real *alpha, integer *lda, integer *ldb,
+                             ftnlen sname_len, ftnlen side_len, ftnlen uplo_len,
+                             ftnlen transa_len, ftnlen diag_len) {
+  /* Format strings */
+  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+                           "a14,\002,\002,a14,\002,\002)";
+  static char fmt_9994[] = "(22x,2(a14,\002,\002),2(i3,\002,\002),f4.1,"
+                           "\002, A,\002,i3,\002, B,\002,i3,\002).\002)";
+
+  /* Builtin functions */
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);
+
+  /* Local variables */
+  char ca[14], cd[14], cs[14], cu[14], crc[14];
+
+  /* Fortran I/O blocks */
+  static cilist io___250 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___251 = {0, 0, 0, fmt_9994, 0};
+
+  if (*(unsigned char *)side == 'L') {
+    s_copy(cs, "     CblasLeft", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(cs, "    CblasRight", (ftnlen)14, (ftnlen)14);
+  }
+  if (*(unsigned char *)uplo == 'U') {
+    s_copy(cu, "    CblasUpper", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(cu, "    CblasLower", (ftnlen)14, (ftnlen)14);
+  }
+  if (*(unsigned char *)transa == 'N') {
+    s_copy(ca, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
+  } else if (*(unsigned char *)transa == 'T') {
+    s_copy(ca, "    CblasTrans", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(ca, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
+  }
+  if (*(unsigned char *)diag == 'N') {
+    s_copy(cd, "  CblasNonUnit", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(cd, "     CblasUnit", (ftnlen)14, (ftnlen)14);
+  }
+  if (*iorder == 1) {
+    s_copy(crc, "CblasRowMajor", (ftnlen)14, (ftnlen)13);
+  } else {
+    s_copy(crc, "CblasColMajor", (ftnlen)14, (ftnlen)13);
+  }
+  io___250.ciunit = *nout;
+  s_wsfe(&io___250);
+  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
+  do_fio(&c__1, sname, (ftnlen)12);
+  do_fio(&c__1, crc, (ftnlen)14);
+  do_fio(&c__1, cs, (ftnlen)14);
+  do_fio(&c__1, cu, (ftnlen)14);
+  e_wsfe();
+  io___251.ciunit = *nout;
+  s_wsfe(&io___251);
+  do_fio(&c__1, ca, (ftnlen)14);
+  do_fio(&c__1, cd, (ftnlen)14);
+  do_fio(&c__1, (char *)&(*m), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*alpha), (ftnlen)sizeof(real));
+  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*ldb), (ftnlen)sizeof(integer));
+  e_wsfe();
+  return 0;
+} /* sprcn3_ */
+
+/* Subroutine */ int schk4_(char *sname, real *eps, real *thresh, integer *nout,
+                            integer *ntra, logical *trace, logical *rewi,
+                            logical *fatal, integer *nidim, integer *idim,
+                            integer *nalf, real *alf, integer *nbet, real *bet,
+                            integer *nmax, real *a, real *aa, real *as, real *b,
+                            real *bb, real *bs, real *c__, real *cc, real *cs,
+                            real *ct, real *g, integer *iorder,
+                            ftnlen sname_len) {
+  /* Initialized data */
+
+  static char icht[3] = "NTC";
+  static char ichu[2] = "UL";
+
+  /* Format strings */
+  static char fmt_9993[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_10000[] =
+      "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
+      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_10001[] =
+      "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
+      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_10002[] =
+      "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
+      "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
+      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
+      "ECT *******\002)";
+  static char fmt_10003[] =
+      "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
+      "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
+      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
+      "ECT *******\002)";
+  static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
+                           " \002,i3)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2,
+      i__3, i__4, i__5, i__6;
+  alist al__1;
+
+  /* Builtin functions */
+  integer f_rew(alist *), s_wsfe(cilist *), e_wsfe(void),
+      do_fio(integer *, char *, ftnlen);
+
+  /* Local variables */
+  integer i__, j, k, n, ia, ib, jc, ma, na, nc, ik, in, jj, lj, ks, ns, laa,
+      lda, lcc, ldc;
+  real als;
+  integer ict, icu;
+  extern logical lse_(real *, real *, integer *);
+  real err, beta;
+  integer ldas, ldcs;
+  logical same;
+  real bets;
+  logical tran, null;
+  char uplo[1];
+  real alpha;
+  logical isame[13];
+  extern /* Subroutine */ int smake_(
+      char *, char *, char *, integer *, integer *, real *, integer *, real *,
+      integer *, logical *, real *, ftnlen, ftnlen, ftnlen),
+      smmch_(char *, char *, integer *, integer *, integer *, real *, real *,
+             integer *, real *, integer *, real *, real *, integer *, real *,
+             real *, real *, integer *, real *, real *, logical *, integer *,
+             logical *, ftnlen, ftnlen);
+  integer nargs;
+  logical reset;
+  char trans[1];
+  logical upper;
+  char uplos[1];
+  extern /* Subroutine */ int sprcn4_(
+      integer *, integer *, char *, integer *, char *, char *, integer *,
+      integer *, real *, integer *, real *, integer *, ftnlen, ftnlen, ftnlen);
+  real errmax;
+  extern logical lseres_(char *, char *, integer *, integer *, real *, real *,
+                         integer *, ftnlen, ftnlen);
+  char transs[1];
+  extern /* Subroutine */ void cssyrk_(
+      integer *, char *, char *, integer *, integer *, real *, real *,
+      integer *, real *, real *, integer *);
+
+  /* Fortran I/O blocks */
+  static cilist io___288 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___291 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___297 = {0, 0, 0, fmt_10000, 0};
+  static cilist io___298 = {0, 0, 0, fmt_10001, 0};
+  static cilist io___299 = {0, 0, 0, fmt_10002, 0};
+  static cilist io___300 = {0, 0, 0, fmt_10003, 0};
+  static cilist io___301 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___302 = {0, 0, 0, fmt_9996, 0};
+
+  /*  Tests SSYRK. */
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Parameters .. */
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Local Arrays .. */
+  /*     .. External Functions .. */
+  /*     .. External Subroutines .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. Scalars in Common .. */
+  /*     .. Common blocks .. */
+  /*     .. Data statements .. */
+  /* Parameter adjustments */
+  --idim;
+  --alf;
+  --bet;
+  --g;
+  --ct;
+  --cs;
+  --cc;
+  c_dim1 = *nmax;
+  c_offset = 1 + c_dim1;
+  c__ -= c_offset;
+  --bs;
+  --bb;
+  b_dim1 = *nmax;
+  b_offset = 1 + b_dim1;
+  b -= b_offset;
+  --as;
+  --aa;
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+
+  /* Function Body */
+  /*     .. Executable Statements .. */
+
+  nargs = 10;
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.f;
+
+  i__1 = *nidim;
+  for (in = 1; in <= i__1; ++in) {
+    n = idim[in];
+    /*        Set LDC to 1 more than minimum value if room. */
+    ldc = n;
+    if (ldc < *nmax) {
+      ++ldc;
+    }
+    /*        Skip tests if not enough room. */
+    if (ldc > *nmax) {
+      goto L100;
+    }
+    lcc = ldc * n;
+    null = n <= 0;
+
+    i__2 = *nidim;
+    for (ik = 1; ik <= i__2; ++ik) {
+      k = idim[ik];
+
+      for (ict = 1; ict <= 3; ++ict) {
+        *(unsigned char *)trans = *(unsigned char *)&icht[ict - 1];
+        tran = *(unsigned char *)trans == 'T' || *(unsigned char *)trans == 'C';
+        if (tran) {
+          ma = k;
+          na = n;
+        } else {
+          ma = n;
+          na = k;
+        }
+        /*              Set LDA to 1 more than minimum value if room. */
+        lda = ma;
+        if (lda < *nmax) {
+          ++lda;
+        }
+        /*              Skip tests if not enough room. */
+        if (lda > *nmax) {
+          goto L80;
+        }
+        laa = lda * na;
+
+        /*              Generate the matrix A. */
+
+        smake_("GE", " ", " ", &ma, &na, &a[a_offset], nmax, &aa[1], &lda,
+               &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+        for (icu = 1; icu <= 2; ++icu) {
+          *(unsigned char *)uplo = *(unsigned char *)&ichu[icu - 1];
+          upper = *(unsigned char *)uplo == 'U';
+
+          i__3 = *nalf;
+          for (ia = 1; ia <= i__3; ++ia) {
+            alpha = alf[ia];
+
+            i__4 = *nbet;
+            for (ib = 1; ib <= i__4; ++ib) {
+              beta = bet[ib];
+
+              /*                       Generate the matrix C. */
+
+              smake_("SY", uplo, " ", &n, &n, &c__[c_offset], nmax, &cc[1],
+                     &ldc, &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+              ++nc;
+
+              /*                       Save every datum before calling the
+               * subroutine. */
+
+              *(unsigned char *)uplos = *(unsigned char *)uplo;
+              *(unsigned char *)transs = *(unsigned char *)trans;
+              ns = n;
+              ks = k;
+              als = alpha;
+              i__5 = laa;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                as[i__] = aa[i__];
+                /* L10: */
+              }
+              ldas = lda;
+              bets = beta;
+              i__5 = lcc;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                cs[i__] = cc[i__];
+                /* L20: */
+              }
+              ldcs = ldc;
+
+              /*                       Call the subroutine. */
+
+              if (*trace) {
+                sprcn4_(ntra, &nc, sname, iorder, uplo, trans, &n, &k, &alpha,
+                        &lda, &beta, &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);
+              }
+              if (*rewi) {
+                al__1.aerr = 0;
+                al__1.aunit = *ntra;
+                f_rew(&al__1);
+              }
+              cssyrk_(iorder, uplo, trans, &n, &k, &alpha, &aa[1], &lda, &beta,
+                      &cc[1], &ldc);
+
+              /*                       Check if error-exit was taken
+               * incorrectly. */
+
+              if (!infoc_1.ok) {
+                io___288.ciunit = *nout;
+                s_wsfe(&io___288);
+                e_wsfe();
+                *fatal = TRUE_;
+                goto L120;
+              }
+
+              /*                       See what data changed inside subroutines.
+               */
+
+              isame[0] = *(unsigned char *)uplos == *(unsigned char *)uplo;
+              isame[1] = *(unsigned char *)transs == *(unsigned char *)trans;
+              isame[2] = ns == n;
+              isame[3] = ks == k;
+              isame[4] = als == alpha;
+              isame[5] = lse_(&as[1], &aa[1], &laa);
+              isame[6] = ldas == lda;
+              isame[7] = bets == beta;
+              if (null) {
+                isame[8] = lse_(&cs[1], &cc[1], &lcc);
+              } else {
+                isame[8] = lseres_("SY", uplo, &n, &n, &cs[1], &cc[1], &ldc,
+                                   (ftnlen)2, (ftnlen)1);
+              }
+              isame[9] = ldcs == ldc;
+
+              /*                       If data was incorrectly changed, report
+               * and */
+              /*                       return. */
+
+              same = TRUE_;
+              i__5 = nargs;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                same = same && isame[i__ - 1];
+                if (!isame[i__ - 1]) {
+                  io___291.ciunit = *nout;
+                  s_wsfe(&io___291);
+                  i__6 = i__ + 1;
+                  do_fio(&c__1, (char *)&i__6, (ftnlen)sizeof(integer));
+                  e_wsfe();
+                }
+                /* L30: */
+              }
+              if (!same) {
+                *fatal = TRUE_;
+                goto L120;
+              }
+
+              if (!null) {
+
+                /*                          Check the result column by column.
+                 */
+
+                jc = 1;
+                i__5 = n;
+                for (j = 1; j <= i__5; ++j) {
+                  if (upper) {
+                    jj = 1;
+                    lj = j;
+                  } else {
+                    jj = j;
+                    lj = n - j + 1;
+                  }
+                  if (tran) {
+                    smmch_("T", "N", &lj, &c__1, &k, &alpha,
+                           &a[jj * a_dim1 + 1], nmax, &a[j * a_dim1 + 1], nmax,
+                           &beta, &c__[jj + j * c_dim1], nmax, &ct[1], &g[1],
+                           &cc[jc], &ldc, eps, &err, fatal, nout, &c_true,
+                           (ftnlen)1, (ftnlen)1);
+                  } else {
+                    smmch_("N", "T", &lj, &c__1, &k, &alpha, &a[jj + a_dim1],
+                           nmax, &a[j + a_dim1], nmax, &beta,
+                           &c__[jj + j * c_dim1], nmax, &ct[1], &g[1], &cc[jc],
+                           &ldc, eps, &err, fatal, nout, &c_true, (ftnlen)1,
+                           (ftnlen)1);
+                  }
+                  if (upper) {
+                    jc += ldc;
+                  } else {
+                    jc = jc + ldc + 1;
+                  }
+                  errmax = max(errmax, err);
+                  /*                             If got really bad answer,
+                   * report and */
+                  /*                             return. */
+                  if (*fatal) {
+                    goto L110;
+                  }
+                  /* L40: */
+                }
+              }
+
+              /* L50: */
+            }
+
+            /* L60: */
+          }
+
+          /* L70: */
+        }
+
+      L80:;
+      }
+
+      /* L90: */
+    }
+
+  L100:;
+  }
+
+  /*     Report result. */
+
+  if (errmax < *thresh) {
+    if (*iorder == 0) {
+      io___297.ciunit = *nout;
+      s_wsfe(&io___297);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      e_wsfe();
+    }
+    if (*iorder == 1) {
+      io___298.ciunit = *nout;
+      s_wsfe(&io___298);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      e_wsfe();
+    }
+  } else {
+    if (*iorder == 0) {
+      io___299.ciunit = *nout;
+      s_wsfe(&io___299);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+    if (*iorder == 1) {
+      io___300.ciunit = *nout;
+      s_wsfe(&io___300);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+  }
+  goto L130;
+
+L110:
+  if (n > 1) {
+    io___301.ciunit = *nout;
+    s_wsfe(&io___301);
+    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
+    e_wsfe();
+  }
+
+L120:
+  io___302.ciunit = *nout;
+  s_wsfe(&io___302);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  sprcn4_(nout, &nc, sname, iorder, uplo, trans, &n, &k, &alpha, &lda, &beta,
+          &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);
+
+L130:
+  return 0;
+
+  /* L9994: */
+
+  /*     End of SCHK4. */
+
+} /* schk4_ */
+
+/* Subroutine */ int sprcn4_(integer *nout, integer *nc, char *sname,
+                             integer *iorder, char *uplo, char *transa,
+                             integer *n, integer *k, real *alpha, integer *lda,
+                             real *beta, integer *ldc, ftnlen sname_len,
+                             ftnlen uplo_len, ftnlen transa_len) {
+  /* Format strings */
+  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
+                           "\002))";
+  static char fmt_9994[] = "(20x,2(i3,\002,\002),f4.1,\002, A,\002,i3"
+                           ",\002,\002,f4.1,\002, C,\002,i3,\002).\002)";
+
+  /* Builtin functions */
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);
+
+  /* Local variables */
+  char ca[14], cu[14], crc[14];
+
+  /* Fortran I/O blocks */
+  static cilist io___306 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___307 = {0, 0, 0, fmt_9994, 0};
+
+  if (*(unsigned char *)uplo == 'U') {
+    s_copy(cu, "    CblasUpper", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(cu, "    CblasLower", (ftnlen)14, (ftnlen)14);
+  }
+  if (*(unsigned char *)transa == 'N') {
+    s_copy(ca, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
+  } else if (*(unsigned char *)transa == 'T') {
+    s_copy(ca, "    CblasTrans", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(ca, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
+  }
+  if (*iorder == 1) {
+    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
+  }
+  io___306.ciunit = *nout;
+  s_wsfe(&io___306);
+  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
+  do_fio(&c__1, sname, (ftnlen)12);
+  do_fio(&c__1, crc, (ftnlen)14);
+  do_fio(&c__1, cu, (ftnlen)14);
+  do_fio(&c__1, ca, (ftnlen)14);
+  e_wsfe();
+  io___307.ciunit = *nout;
+  s_wsfe(&io___307);
+  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*k), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*alpha), (ftnlen)sizeof(real));
+  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*beta), (ftnlen)sizeof(real));
+  do_fio(&c__1, (char *)&(*ldc), (ftnlen)sizeof(integer));
+  e_wsfe();
+  return 0;
+} /* sprcn4_ */
+
+/* Subroutine */ int schk5_(char *sname, real *eps, real *thresh, integer *nout,
+                            integer *ntra, logical *trace, logical *rewi,
+                            logical *fatal, integer *nidim, integer *idim,
+                            integer *nalf, real *alf, integer *nbet, real *bet,
+                            integer *nmax, real *ab, real *aa, real *as,
+                            real *bb, real *bs, real *c__, real *cc, real *cs,
+                            real *ct, real *g, real *w, integer *iorder,
+                            ftnlen sname_len) {
+  /* Initialized data */
+
+  static char icht[3] = "NTC";
+  static char ichu[2] = "UL";
+
+  /* Format strings */
+  static char fmt_9993[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_10000[] =
+      "(\002 \002,a12,\002 PASSED THE COLUMN-MAJOR C"
+      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_10001[] =
+      "(\002 \002,a12,\002 PASSED THE ROW-MAJOR    C"
+      "OMPUTATIONAL TESTS\002,\002 (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_10002[] =
+      "(\002 \002,a12,\002 COMPLETED THE COLUMN-MAJO"
+      "R COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
+      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
+      "ECT *******\002)";
+  static char fmt_10003[] =
+      "(\002 \002,a12,\002 COMPLETED THE ROW-MAJOR  "
+      "  COMPUTATIONAL \002,\002TESTS (\002,i6,\002 CALLS)\002,/\002 **"
+      "***** BUT WITH MAXIMUM TEST \002,\002RATIO \002,f8.2,\002 - SUSP"
+      "ECT *******\002)";
+  static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
+                           " \002,i3)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer c_dim1, c_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7, i__8;
+  alist al__1;
+
+  /* Builtin functions */
+  integer f_rew(alist *), s_wsfe(cilist *), e_wsfe(void),
+      do_fio(integer *, char *, ftnlen);
+
+  /* Local variables */
+  integer i__, j, k, n, ia, ib, jc, ma, na, nc, ik, in, jj, lj, ks, ns, laa,
+      lbb, lda, lcc, ldb, ldc;
+  real als;
+  integer ict, icu;
+  extern logical lse_(real *, real *, integer *);
+  real err;
+  integer jjab;
+  real beta;
+  integer ldas, ldbs, ldcs;
+  logical same;
+  real bets;
+  logical tran, null;
+  char uplo[1];
+  real alpha;
+  logical isame[13];
+  extern /* Subroutine */ int smake_(
+      char *, char *, char *, integer *, integer *, real *, integer *, real *,
+      integer *, logical *, real *, ftnlen, ftnlen, ftnlen),
+      smmch_(char *, char *, integer *, integer *, integer *, real *, real *,
+             integer *, real *, integer *, real *, real *, integer *, real *,
+             real *, real *, integer *, real *, real *, logical *, integer *,
+             logical *, ftnlen, ftnlen);
+  integer nargs;
+  logical reset;
+  char trans[1];
+  logical upper;
+  char uplos[1];
+  extern /* Subroutine */ int sprcn5_(integer *, integer *, char *, integer *,
+                                      char *, char *, integer *, integer *,
+                                      real *, integer *, integer *, real *,
+                                      integer *, ftnlen, ftnlen, ftnlen);
+  real errmax;
+  extern logical lseres_(char *, char *, integer *, integer *, real *, real *,
+                         integer *, ftnlen, ftnlen);
+  char transs[1];
+  extern /* Subroutine */ void cssyr2k_(
+      integer *, char *, char *, integer *, integer *, real *, real *,
+      integer *, real *, integer *, real *, real *, integer *);
+
+  /* Fortran I/O blocks */
+  static cilist io___347 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___350 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___357 = {0, 0, 0, fmt_10000, 0};
+  static cilist io___358 = {0, 0, 0, fmt_10001, 0};
+  static cilist io___359 = {0, 0, 0, fmt_10002, 0};
+  static cilist io___360 = {0, 0, 0, fmt_10003, 0};
+  static cilist io___361 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___362 = {0, 0, 0, fmt_9996, 0};
+
+  /*  Tests SSYR2K. */
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Parameters .. */
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Local Arrays .. */
+  /*     .. External Functions .. */
+  /*     .. External Subroutines .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. Scalars in Common .. */
+  /*     .. Common blocks .. */
+  /*     .. Data statements .. */
+  /* Parameter adjustments */
+  --idim;
+  --alf;
+  --bet;
+  --w;
+  --g;
+  --ct;
+  --cs;
+  --cc;
+  c_dim1 = *nmax;
+  c_offset = 1 + c_dim1;
+  c__ -= c_offset;
+  --bs;
+  --bb;
+  --as;
+  --aa;
+  --ab;
+
+  /* Function Body */
+  /*     .. Executable Statements .. */
+
+  nargs = 12;
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.f;
+
+  i__1 = *nidim;
+  for (in = 1; in <= i__1; ++in) {
+    n = idim[in];
+    /*        Set LDC to 1 more than minimum value if room. */
+    ldc = n;
+    if (ldc < *nmax) {
+      ++ldc;
+    }
+    /*        Skip tests if not enough room. */
+    if (ldc > *nmax) {
+      goto L130;
+    }
+    lcc = ldc * n;
+    null = n <= 0;
+
+    i__2 = *nidim;
+    for (ik = 1; ik <= i__2; ++ik) {
+      k = idim[ik];
+
+      for (ict = 1; ict <= 3; ++ict) {
+        *(unsigned char *)trans = *(unsigned char *)&icht[ict - 1];
+        tran = *(unsigned char *)trans == 'T' || *(unsigned char *)trans == 'C';
+        if (tran) {
+          ma = k;
+          na = n;
+        } else {
+          ma = n;
+          na = k;
+        }
+        /*              Set LDA to 1 more than minimum value if room. */
+        lda = ma;
+        if (lda < *nmax) {
+          ++lda;
+        }
+        /*              Skip tests if not enough room. */
+        if (lda > *nmax) {
+          goto L110;
+        }
+        laa = lda * na;
+
+        /*              Generate the matrix A. */
+
+        if (tran) {
+          i__3 = *nmax << 1;
+          smake_("GE", " ", " ", &ma, &na, &ab[1], &i__3, &aa[1], &lda, &reset,
+                 &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+        } else {
+          smake_("GE", " ", " ", &ma, &na, &ab[1], nmax, &aa[1], &lda, &reset,
+                 &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+        }
+
+        /*              Generate the matrix B. */
+
+        ldb = lda;
+        lbb = laa;
+        if (tran) {
+          i__3 = *nmax << 1;
+          smake_("GE", " ", " ", &ma, &na, &ab[k + 1], &i__3, &bb[1], &ldb,
+                 &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+        } else {
+          smake_("GE", " ", " ", &ma, &na, &ab[k * *nmax + 1], nmax, &bb[1],
+                 &ldb, &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+        }
+
+        for (icu = 1; icu <= 2; ++icu) {
+          *(unsigned char *)uplo = *(unsigned char *)&ichu[icu - 1];
+          upper = *(unsigned char *)uplo == 'U';
+
+          i__3 = *nalf;
+          for (ia = 1; ia <= i__3; ++ia) {
+            alpha = alf[ia];
+
+            i__4 = *nbet;
+            for (ib = 1; ib <= i__4; ++ib) {
+              beta = bet[ib];
+
+              /*                       Generate the matrix C. */
+
+              smake_("SY", uplo, " ", &n, &n, &c__[c_offset], nmax, &cc[1],
+                     &ldc, &reset, &c_b103, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+              ++nc;
+
+              /*                       Save every datum before calling the
+               * subroutine. */
+
+              *(unsigned char *)uplos = *(unsigned char *)uplo;
+              *(unsigned char *)transs = *(unsigned char *)trans;
+              ns = n;
+              ks = k;
+              als = alpha;
+              i__5 = laa;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                as[i__] = aa[i__];
+                /* L10: */
+              }
+              ldas = lda;
+              i__5 = lbb;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                bs[i__] = bb[i__];
+                /* L20: */
+              }
+              ldbs = ldb;
+              bets = beta;
+              i__5 = lcc;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                cs[i__] = cc[i__];
+                /* L30: */
+              }
+              ldcs = ldc;
+
+              /*                       Call the subroutine. */
+
+              if (*trace) {
+                sprcn5_(ntra, &nc, sname, iorder, uplo, trans, &n, &k, &alpha,
+                        &lda, &ldb, &beta, &ldc, (ftnlen)12, (ftnlen)1,
+                        (ftnlen)1);
+              }
+              if (*rewi) {
+                al__1.aerr = 0;
+                al__1.aunit = *ntra;
+                f_rew(&al__1);
+              }
+              cssyr2k_(iorder, uplo, trans, &n, &k, &alpha, &aa[1], &lda,
+                       &bb[1], &ldb, &beta, &cc[1], &ldc);
+
+              /*                       Check if error-exit was taken
+               * incorrectly. */
+
+              if (!infoc_1.ok) {
+                io___347.ciunit = *nout;
+                s_wsfe(&io___347);
+                e_wsfe();
+                *fatal = TRUE_;
+                goto L150;
+              }
+
+              /*                       See what data changed inside subroutines.
+               */
+
+              isame[0] = *(unsigned char *)uplos == *(unsigned char *)uplo;
+              isame[1] = *(unsigned char *)transs == *(unsigned char *)trans;
+              isame[2] = ns == n;
+              isame[3] = ks == k;
+              isame[4] = als == alpha;
+              isame[5] = lse_(&as[1], &aa[1], &laa);
+              isame[6] = ldas == lda;
+              isame[7] = lse_(&bs[1], &bb[1], &lbb);
+              isame[8] = ldbs == ldb;
+              isame[9] = bets == beta;
+              if (null) {
+                isame[10] = lse_(&cs[1], &cc[1], &lcc);
+              } else {
+                isame[10] = lseres_("SY", uplo, &n, &n, &cs[1], &cc[1], &ldc,
+                                    (ftnlen)2, (ftnlen)1);
+              }
+              isame[11] = ldcs == ldc;
+
+              /*                       If data was incorrectly changed, report
+               * and */
+              /*                       return. */
+
+              same = TRUE_;
+              i__5 = nargs;
+              for (i__ = 1; i__ <= i__5; ++i__) {
+                same = same && isame[i__ - 1];
+                if (!isame[i__ - 1]) {
+                  io___350.ciunit = *nout;
+                  s_wsfe(&io___350);
+                  i__6 = i__ + 1;
+                  do_fio(&c__1, (char *)&i__6, (ftnlen)sizeof(integer));
+                  e_wsfe();
+                }
+                /* L40: */
+              }
+              if (!same) {
+                *fatal = TRUE_;
+                goto L150;
+              }
+
+              if (!null) {
+
+                /*                          Check the result column by column.
+                 */
+
+                jjab = 1;
+                jc = 1;
+                i__5 = n;
+                for (j = 1; j <= i__5; ++j) {
+                  if (upper) {
+                    jj = 1;
+                    lj = j;
+                  } else {
+                    jj = j;
+                    lj = n - j + 1;
+                  }
+                  if (tran) {
+                    i__6 = k;
+                    for (i__ = 1; i__ <= i__6; ++i__) {
+                      w[i__] = ab[(j - 1 << 1) * *nmax + k + i__];
+                      w[k + i__] = ab[(j - 1 << 1) * *nmax + i__];
+                      /* L50: */
+                    }
+                    i__6 = k << 1;
+                    i__7 = *nmax << 1;
+                    i__8 = *nmax << 1;
+                    smmch_("T", "N", &lj, &c__1, &i__6, &alpha, &ab[jjab],
+                           &i__7, &w[1], &i__8, &beta, &c__[jj + j * c_dim1],
+                           nmax, &ct[1], &g[1], &cc[jc], &ldc, eps, &err, fatal,
+                           nout, &c_true, (ftnlen)1, (ftnlen)1);
+                  } else {
+                    i__6 = k;
+                    for (i__ = 1; i__ <= i__6; ++i__) {
+                      w[i__] = ab[(k + i__ - 1) * *nmax + j];
+                      w[k + i__] = ab[(i__ - 1) * *nmax + j];
+                      /* L60: */
+                    }
+                    i__6 = k << 1;
+                    i__7 = *nmax << 1;
+                    smmch_("N", "N", &lj, &c__1, &i__6, &alpha, &ab[jj], nmax,
+                           &w[1], &i__7, &beta, &c__[jj + j * c_dim1], nmax,
+                           &ct[1], &g[1], &cc[jc], &ldc, eps, &err, fatal, nout,
+                           &c_true, (ftnlen)1, (ftnlen)1);
+                  }
+                  if (upper) {
+                    jc += ldc;
+                  } else {
+                    jc = jc + ldc + 1;
+                    if (tran) {
+                      jjab += *nmax << 1;
+                    }
+                  }
+                  errmax = max(errmax, err);
+                  /*                             If got really bad answer,
+                   * report and */
+                  /*                             return. */
+                  if (*fatal) {
+                    goto L140;
+                  }
+                  /* L70: */
+                }
+              }
+
+              /* L80: */
+            }
+
+            /* L90: */
+          }
+
+          /* L100: */
+        }
+
+      L110:;
+      }
+
+      /* L120: */
+    }
+
+  L130:;
+  }
+
+  /*     Report result. */
+
+  if (errmax < *thresh) {
+    if (*iorder == 0) {
+      io___357.ciunit = *nout;
+      s_wsfe(&io___357);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      e_wsfe();
+    }
+    if (*iorder == 1) {
+      io___358.ciunit = *nout;
+      s_wsfe(&io___358);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      e_wsfe();
+    }
+  } else {
+    if (*iorder == 0) {
+      io___359.ciunit = *nout;
+      s_wsfe(&io___359);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+    if (*iorder == 1) {
+      io___360.ciunit = *nout;
+      s_wsfe(&io___360);
+      do_fio(&c__1, sname, (ftnlen)12);
+      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+  }
+  goto L160;
+
+L140:
+  if (n > 1) {
+    io___361.ciunit = *nout;
+    s_wsfe(&io___361);
+    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
+    e_wsfe();
+  }
+
+L150:
+  io___362.ciunit = *nout;
+  s_wsfe(&io___362);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  sprcn5_(nout, &nc, sname, iorder, uplo, trans, &n, &k, &alpha, &lda, &ldb,
+          &beta, &ldc, (ftnlen)12, (ftnlen)1, (ftnlen)1);
+
+L160:
+  return 0;
+
+  /* L9994: */
+
+  /*     End of SCHK5. */
+
+} /* schk5_ */
+
+/* Subroutine */ int sprcn5_(integer *nout, integer *nc, char *sname,
+                             integer *iorder, char *uplo, char *transa,
+                             integer *n, integer *k, real *alpha, integer *lda,
+                             integer *ldb, real *beta, integer *ldc,
+                             ftnlen sname_len, ftnlen uplo_len,
+                             ftnlen transa_len) {
+  /* Format strings */
+  static char fmt_9995[] = "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
+                           "\002))";
+  static char fmt_9994[] =
+      "(20x,2(i3,\002,\002),f4.1,\002, A,\002,i3,\002"
+      ", B\002,i3,\002,\002,f4.1,\002, C,\002,i3,\002).\002)";
+
+  /* Builtin functions */
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void);
+
+  /* Local variables */
+  char ca[14], cu[14], crc[14];
+
+  /* Fortran I/O blocks */
+  static cilist io___366 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___367 = {0, 0, 0, fmt_9994, 0};
+
+  if (*(unsigned char *)uplo == 'U') {
+    s_copy(cu, "    CblasUpper", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(cu, "    CblasLower", (ftnlen)14, (ftnlen)14);
+  }
+  if (*(unsigned char *)transa == 'N') {
+    s_copy(ca, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
+  } else if (*(unsigned char *)transa == 'T') {
+    s_copy(ca, "    CblasTrans", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(ca, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
+  }
+  if (*iorder == 1) {
+    s_copy(crc, " CblasRowMajor", (ftnlen)14, (ftnlen)14);
+  } else {
+    s_copy(crc, " CblasColMajor", (ftnlen)14, (ftnlen)14);
+  }
+  io___366.ciunit = *nout;
+  s_wsfe(&io___366);
+  do_fio(&c__1, (char *)&(*nc), (ftnlen)sizeof(integer));
+  do_fio(&c__1, sname, (ftnlen)12);
+  do_fio(&c__1, crc, (ftnlen)14);
+  do_fio(&c__1, cu, (ftnlen)14);
+  do_fio(&c__1, ca, (ftnlen)14);
+  e_wsfe();
+  io___367.ciunit = *nout;
+  s_wsfe(&io___367);
+  do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*k), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*alpha), (ftnlen)sizeof(real));
+  do_fio(&c__1, (char *)&(*lda), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*ldb), (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&(*beta), (ftnlen)sizeof(real));
+  do_fio(&c__1, (char *)&(*ldc), (ftnlen)sizeof(integer));
+  e_wsfe();
+  return 0;
+} /* sprcn5_ */
+
+/* Subroutine */ int smake_(char *type__, char *uplo, char *diag, integer *m,
+                            integer *n, real *a, integer *nmax, real *aa,
+                            integer *lda, logical *reset, real *transl,
+                            ftnlen type_len, ftnlen uplo_len, ftnlen diag_len) {
+  /* System generated locals */
+  integer a_dim1, a_offset, i__1, i__2;
+
+  /* Builtin functions */
+  integer s_cmp(char *, char *, ftnlen, ftnlen);
+
+  /* Local variables */
+  integer i__, j;
+  logical gen, tri, sym;
+  integer ibeg, iend;
+  extern real sbeg_(logical *);
+  logical unit, lower, upper;
+
+  /*  Generates values for an M by N matrix A. */
+  /*  Stores the values in the array AA in the data structure required */
+  /*  by the routine, with unwanted elements set to rogue value. */
+
+  /*  TYPE is 'GE', 'SY' or 'TR'. */
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Parameters .. */
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. External Functions .. */
+  /*     .. Executable Statements .. */
+  /* Parameter adjustments */
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+  --aa;
+
+  /* Function Body */
+  gen = s_cmp(type__, "GE", (ftnlen)2, (ftnlen)2) == 0;
+  sym = s_cmp(type__, "SY", (ftnlen)2, (ftnlen)2) == 0;
+  tri = s_cmp(type__, "TR", (ftnlen)2, (ftnlen)2) == 0;
+  upper = (sym || tri) && *(unsigned char *)uplo == 'U';
+  lower = (sym || tri) && *(unsigned char *)uplo == 'L';
+  unit = tri && *(unsigned char *)diag == 'U';
+
+  /*     Generate data in array A. */
+
+  i__1 = *n;
+  for (j = 1; j <= i__1; ++j) {
+    i__2 = *m;
+    for (i__ = 1; i__ <= i__2; ++i__) {
+      if (gen || upper && i__ <= j || lower && i__ >= j) {
+        a[i__ + j * a_dim1] = sbeg_(reset) + *transl;
+        if (i__ != j) {
+          /*                 Set some elements to zero */
+          if (*n > 3 && j == *n / 2) {
+            a[i__ + j * a_dim1] = 0.f;
+          }
+          if (sym) {
+            a[j + i__ * a_dim1] = a[i__ + j * a_dim1];
+          } else if (tri) {
+            a[j + i__ * a_dim1] = 0.f;
+          }
+        }
+      }
+      /* L10: */
+    }
+    if (tri) {
+      a[j + j * a_dim1] += 1.f;
+    }
+    if (unit) {
+      a[j + j * a_dim1] = 1.f;
+    }
+    /* L20: */
+  }
+
+  /*     Store elements in array AS in data structure required by routine. */
+
+  if (s_cmp(type__, "GE", (ftnlen)2, (ftnlen)2) == 0) {
+    i__1 = *n;
+    for (j = 1; j <= i__1; ++j) {
+      i__2 = *m;
+      for (i__ = 1; i__ <= i__2; ++i__) {
+        aa[i__ + (j - 1) * *lda] = a[i__ + j * a_dim1];
+        /* L30: */
+      }
+      i__2 = *lda;
+      for (i__ = *m + 1; i__ <= i__2; ++i__) {
+        aa[i__ + (j - 1) * *lda] = -1e10f;
+        /* L40: */
+      }
+      /* L50: */
+    }
+  } else if (s_cmp(type__, "SY", (ftnlen)2, (ftnlen)2) == 0 ||
+             s_cmp(type__, "TR", (ftnlen)2, (ftnlen)2) == 0) {
+    i__1 = *n;
+    for (j = 1; j <= i__1; ++j) {
+      if (upper) {
+        ibeg = 1;
+        if (unit) {
+          iend = j - 1;
+        } else {
+          iend = j;
+        }
+      } else {
+        if (unit) {
+          ibeg = j + 1;
+        } else {
+          ibeg = j;
+        }
+        iend = *n;
+      }
+      i__2 = ibeg - 1;
+      for (i__ = 1; i__ <= i__2; ++i__) {
+        aa[i__ + (j - 1) * *lda] = -1e10f;
+        /* L60: */
+      }
+      i__2 = iend;
+      for (i__ = ibeg; i__ <= i__2; ++i__) {
+        aa[i__ + (j - 1) * *lda] = a[i__ + j * a_dim1];
+        /* L70: */
+      }
+      i__2 = *lda;
+      for (i__ = iend + 1; i__ <= i__2; ++i__) {
+        aa[i__ + (j - 1) * *lda] = -1e10f;
+        /* L80: */
+      }
+      /* L90: */
+    }
+  }
+  return 0;
+
+  /*     End of SMAKE. */
+
+} /* smake_ */
+
+/* Subroutine */ int smmch_(char *transa, char *transb, integer *m, integer *n,
+                            integer *kk, real *alpha, real *a, integer *lda,
+                            real *b, integer *ldb, real *beta, real *c__,
+                            integer *ldc, real *ct, real *g, real *cc,
+                            integer *ldcc, real *eps, real *err, logical *fatal,
+                            integer *nout, logical *mv, ftnlen transa_len,
+                            ftnlen transb_len) {
+  /* Format strings */
+  static char fmt_9999[] =
+      "(\002 ******* FATAL ERROR - COMPUTED RESULT IS"
+      " LESS THAN HAL\002,\002F ACCURATE *******\002,/\002           EX"
+      "PECTED RESULT   COMPU\002,\002TED RESULT\002)";
+  static char fmt_9998[] = "(1x,i7,2g18.6)";
+  static char fmt_9997[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
+                           " \002,i3)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, cc_dim1,
+      cc_offset, i__1, i__2, i__3;
+  real r__1, r__2;
+
+  /* Builtin functions */
+  double sqrt(doublereal);
+  integer s_wsfe(cilist *), e_wsfe(void), do_fio(integer *, char *, ftnlen);
+
+  /* Local variables */
+  integer i__, j, k;
+  real erri;
+  logical trana, tranb;
+
+  /* Fortran I/O blocks */
+  static cilist io___384 = {0, 0, 0, fmt_9999, 0};
+  static cilist io___385 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___386 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___387 = {0, 0, 0, fmt_9997, 0};
+
+  /*  Checks the results of the computational tests. */
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Parameters .. */
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. Executable Statements .. */
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
+  --ct;
+  --g;
+  cc_dim1 = *ldcc;
+  cc_offset = 1 + cc_dim1;
+  cc -= cc_offset;
+
+  /* Function Body */
+  trana = *(unsigned char *)transa == 'T' || *(unsigned char *)transa == 'C';
+  tranb = *(unsigned char *)transb == 'T' || *(unsigned char *)transb == 'C';
+
+  /*     Compute expected result, one column at a time, in CT using data */
+  /*     in A, B and C. */
+  /*     Compute gauges in G. */
+
+  i__1 = *n;
+  for (j = 1; j <= i__1; ++j) {
+
+    i__2 = *m;
+    for (i__ = 1; i__ <= i__2; ++i__) {
+      ct[i__] = 0.f;
+      g[i__] = 0.f;
+      /* L10: */
+    }
+    if (!trana && !tranb) {
+      i__2 = *kk;
+      for (k = 1; k <= i__2; ++k) {
+        i__3 = *m;
+        for (i__ = 1; i__ <= i__3; ++i__) {
+          ct[i__] += a[i__ + k * a_dim1] * b[k + j * b_dim1];
+          g[i__] += (r__1 = a[i__ + k * a_dim1], abs(r__1)) *
+                    (r__2 = b[k + j * b_dim1], abs(r__2));
+          /* L20: */
+        }
+        /* L30: */
+      }
+    } else if (trana && !tranb) {
+      i__2 = *kk;
+      for (k = 1; k <= i__2; ++k) {
+        i__3 = *m;
+        for (i__ = 1; i__ <= i__3; ++i__) {
+          ct[i__] += a[k + i__ * a_dim1] * b[k + j * b_dim1];
+          g[i__] += (r__1 = a[k + i__ * a_dim1], abs(r__1)) *
+                    (r__2 = b[k + j * b_dim1], abs(r__2));
+          /* L40: */
+        }
+        /* L50: */
+      }
+    } else if (!trana && tranb) {
+      i__2 = *kk;
+      for (k = 1; k <= i__2; ++k) {
+        i__3 = *m;
+        for (i__ = 1; i__ <= i__3; ++i__) {
+          ct[i__] += a[i__ + k * a_dim1] * b[j + k * b_dim1];
+          g[i__] += (r__1 = a[i__ + k * a_dim1], abs(r__1)) *
+                    (r__2 = b[j + k * b_dim1], abs(r__2));
+          /* L60: */
+        }
+        /* L70: */
+      }
+    } else if (trana && tranb) {
+      i__2 = *kk;
+      for (k = 1; k <= i__2; ++k) {
+        i__3 = *m;
+        for (i__ = 1; i__ <= i__3; ++i__) {
+          ct[i__] += a[k + i__ * a_dim1] * b[j + k * b_dim1];
+          g[i__] += (r__1 = a[k + i__ * a_dim1], abs(r__1)) *
+                    (r__2 = b[j + k * b_dim1], abs(r__2));
+          /* L80: */
+        }
+        /* L90: */
+      }
+    }
+    i__2 = *m;
+    for (i__ = 1; i__ <= i__2; ++i__) {
+      ct[i__] = *alpha * ct[i__] + *beta * c__[i__ + j * c_dim1];
+      g[i__] = abs(*alpha) * g[i__] +
+               abs(*beta) * (r__1 = c__[i__ + j * c_dim1], abs(r__1));
+      /* L100: */
+    }
+
+    /*        Compute the error ratio for this result. */
+
+    *err = 0.f;
+    i__2 = *m;
+    for (i__ = 1; i__ <= i__2; ++i__) {
+      erri = (r__1 = ct[i__] - cc[i__ + j * cc_dim1], abs(r__1)) / *eps;
+      if (g[i__] != 0.f) {
+        erri /= g[i__];
+      }
+      *err = max(*err, erri);
+      if (*err * sqrt(*eps) >= 1.f) {
+        goto L130;
+      }
+      /* L110: */
+    }
+
+    /* L120: */
+  }
+
+  /*     If the loop completes, all results are at least half accurate. */
+  goto L150;
+
+  /*     Report fatal error. */
+
+L130:
+  *fatal = TRUE_;
+  io___384.ciunit = *nout;
+  s_wsfe(&io___384);
+  e_wsfe();
+  i__1 = *m;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    if (*mv) {
+      io___385.ciunit = *nout;
+      s_wsfe(&io___385);
+      do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&ct[i__], (ftnlen)sizeof(real));
+      do_fio(&c__1, (char *)&cc[i__ + j * cc_dim1], (ftnlen)sizeof(real));
+      e_wsfe();
+    } else {
+      io___386.ciunit = *nout;
+      s_wsfe(&io___386);
+      do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
+      do_fio(&c__1, (char *)&cc[i__ + j * cc_dim1], (ftnlen)sizeof(real));
+      do_fio(&c__1, (char *)&ct[i__], (ftnlen)sizeof(real));
+      e_wsfe();
+    }
+    /* L140: */
+  }
+  if (*n > 1) {
+    io___387.ciunit = *nout;
+    s_wsfe(&io___387);
+    do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
+    e_wsfe();
+  }
+
+L150:
+  return 0;
+
+  /*     End of SMMCH. */
+
+} /* smmch_ */
+
+logical lse_(real *ri, real *rj, integer *lr) {
+  /* System generated locals */
+  integer i__1;
+  logical ret_val;
+
+  /* Local variables */
+  integer i__;
+
+  /*  Tests if two arrays are identical. */
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Executable Statements .. */
+  /* Parameter adjustments */
+  --rj;
+  --ri;
+
+  /* Function Body */
+  i__1 = *lr;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    if (ri[i__] != rj[i__]) {
+      goto L20;
+    }
+    /* L10: */
+  }
+  ret_val = TRUE_;
+  goto L30;
+L20:
+  ret_val = FALSE_;
+L30:
+  return ret_val;
+
+  /*     End of LSE. */
+
+} /* lse_ */
+
+logical lseres_(char *type__, char *uplo, integer *m, integer *n, real *aa,
+                real *as, integer *lda, ftnlen type_len, ftnlen uplo_len) {
+  /* System generated locals */
+  integer aa_dim1, aa_offset, as_dim1, as_offset, i__1, i__2;
+  logical ret_val;
+
+  /* Builtin functions */
+  integer s_cmp(char *, char *, ftnlen, ftnlen);
+
+  /* Local variables */
+  integer i__, j, ibeg, iend;
+  logical upper;
+
+  /*  Tests if selected elements in two arrays are equal. */
+
+  /*  TYPE is 'GE' or 'SY'. */
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Executable Statements .. */
+  /* Parameter adjustments */
+  as_dim1 = *lda;
+  as_offset = 1 + as_dim1;
+  as -= as_offset;
+  aa_dim1 = *lda;
+  aa_offset = 1 + aa_dim1;
+  aa -= aa_offset;
+
+  /* Function Body */
+  upper = *(unsigned char *)uplo == 'U';
+  if (s_cmp(type__, "GE", (ftnlen)2, (ftnlen)2) == 0) {
+    i__1 = *n;
+    for (j = 1; j <= i__1; ++j) {
+      i__2 = *lda;
+      for (i__ = *m + 1; i__ <= i__2; ++i__) {
+        if (aa[i__ + j * aa_dim1] != as[i__ + j * as_dim1]) {
+          goto L70;
+        }
+        /* L10: */
+      }
+      /* L20: */
+    }
+  } else if (s_cmp(type__, "SY", (ftnlen)2, (ftnlen)2) == 0) {
+    i__1 = *n;
+    for (j = 1; j <= i__1; ++j) {
+      if (upper) {
+        ibeg = 1;
+        iend = j;
+      } else {
+        ibeg = j;
+        iend = *n;
+      }
+      i__2 = ibeg - 1;
+      for (i__ = 1; i__ <= i__2; ++i__) {
+        if (aa[i__ + j * aa_dim1] != as[i__ + j * as_dim1]) {
+          goto L70;
+        }
+        /* L30: */
+      }
+      i__2 = *lda;
+      for (i__ = iend + 1; i__ <= i__2; ++i__) {
+        if (aa[i__ + j * aa_dim1] != as[i__ + j * as_dim1]) {
+          goto L70;
+        }
+        /* L40: */
+      }
+      /* L50: */
+    }
+  }
+
+  /* L60: */
+  ret_val = TRUE_;
+  goto L80;
+L70:
+  ret_val = FALSE_;
+L80:
+  return ret_val;
+
+  /*     End of LSERES. */
+
+} /* lseres_ */
+
+real sbeg_(logical *reset) {
+  /* System generated locals */
+  real ret_val;
+
+  /* Local variables */
+  static integer i__, ic, mi;
+
+  /*  Generates random numbers uniformly distributed between -0.5 and 0.5. */
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Scalar Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Save statement .. */
+  /*     .. Executable Statements .. */
+  if (*reset) {
+    /*        Initialize local variables. */
+    mi = 891;
+    i__ = 7;
+    ic = 0;
+    *reset = FALSE_;
+  }
+
+  /*     The sequence of values of I is bounded between 1 and 999. */
+  /*     If initial I = 1,2,3,6,7 or 9, the period will be 50. */
+  /*     If initial I = 4 or 8, the period will be 25. */
+  /*     If initial I = 5, the period will be 10. */
+  /*     IC is used to break up the period by skipping 1 value of I in 6. */
+
+  ++ic;
+L10:
+  i__ *= mi;
+  i__ -= i__ / 1000 * 1000;
+  if (ic >= 5) {
+    ic = 0;
+    goto L10;
+  }
+  ret_val = (i__ - 500) / 1001.f;
+  return ret_val;
+
+  /*     End of SBEG. */
+
+} /* sbeg_ */
+
+real sdiff_(real *x, real *y) {
+  /* System generated locals */
+  real ret_val;
+
+  /*  Auxiliary routine for test program for Level 3 Blas. */
+
+  /*  -- Written on 8-February-1989. */
+  /*     Jack Dongarra, Argonne National Laboratory. */
+  /*     Iain Duff, AERE Harwell. */
+  /*     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
+  /*     Sven Hammarling, Numerical Algorithms Group Ltd. */
+
+  /*     .. Scalar Arguments .. */
+  /*     .. Executable Statements .. */
+  ret_val = *x - *y;
+  return ret_val;
+
+  /*     End of SDIFF. */
+
+} /* sdiff_ */
+
+/* Main program alias */ int sblat3_() {
+  MAIN__();
+  return 0;
+}
