--- ../../../to_patch/CBLAS//testing/c_zblat2.c	1970-01-01 01:00:00.000000000 +0100
+++ ./testing/c_zblat2.c	2020-03-18 14:52:00.354157549 +0100
@@ -0,0 +1,4771 @@
+/* testing/c_zblat2.f -- translated by f2c (version 20191129).
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
+static doublecomplex c_b1 = {0., 0.};
+static doublecomplex c_b2 = {1., 0.};
+static integer c__9 = 9;
+static integer c__1 = 1;
+static integer c__3 = 3;
+static integer c__8 = 8;
+static integer c__5 = 5;
+static integer c__65 = 65;
+static integer c__7 = 7;
+static integer c__2 = 2;
+static doublereal c_b125 = 1.;
+static integer c__6 = 6;
+static logical c_true = TRUE_;
+static integer c_n1 = -1;
+static integer c__0 = 0;
+static logical c_false = FALSE_;
+
+/* Main program */ int MAIN__(void) {
+  /* Initialized data */
+
+  static char snames[12 * 17] = "cblas_zgemv "
+                                "cblas_zgbmv "
+                                "cblas_zhemv "
+                                "cblas_zhbmv "
+                                "cblas_zhpmv "
+                                "cblas_ztrmv "
+                                "cblas_ztbmv "
+                                "cbl"
+                                "as_ztpmv "
+                                "cblas_ztrsv "
+                                "cblas_ztbsv "
+                                "cblas_ztpsv "
+                                "cblas_z"
+                                "gerc "
+                                "cblas_zgeru "
+                                "cblas_zher  "
+                                "cblas_zhpr  "
+                                "cblas_zher2 "
+                                "cblas_zhpr2 ";
+
+  /* Format strings */
+  static char fmt_9997[] = "(\002 NUMBER OF VALUES OF \002,a,\002 IS LESS "
+                           "THAN 1 OR GREATER \002,\002THAN \002,i2)";
+  static char fmt_9996[] = "(\002 VALUE OF N IS LESS THAN 0 OR GREATER THA"
+                           "N \002,i2)";
+  static char fmt_9995[] = "(\002 VALUE OF K IS LESS THAN 0\002)";
+  static char fmt_9994[] = "(\002 ABSOLUTE VALUE OF INCX OR INCY IS 0 OR G"
+                           "REATER THAN \002,i2)";
+  static char fmt_9993[] =
+      "(\002 TESTS OF THE COMPLEX*16      LEVEL 2 B"
+      "LAS\002,//\002 THE F\002,\002OLLOWING PARAMETER VALUES WILL BE U"
+      "SED:\002)";
+  static char fmt_9992[] = "(\002   FOR N              \002,9i6)";
+  static char fmt_9991[] = "(\002   FOR K              \002,7i6)";
+  static char fmt_9990[] = "(\002   FOR INCX AND INCY  \002,7i6)";
+  static char fmt_9989[] = "(\002   FOR ALPHA          \002,7(\002(\002,f4"
+                           ".1,\002,\002,f4.1,\002)  \002,:))";
+  static char fmt_9988[] = "(\002   FOR BETA           \002,7(\002(\002,f4"
+                           ".1,\002,\002,f4.1,\002)  \002,:))";
+  static char fmt_9980[] = "(\002 ERROR-EXITS WILL NOT BE TESTED\002)";
+  static char fmt_9999[] = "(\002 ROUTINES PASS COMPUTATIONAL TESTS IF TES"
+                           "T RATIO IS LES\002,\002S THAN\002,f8.2)";
+  static char fmt_10002[] = "(\002 COLUMN-MAJOR AND ROW-MAJOR DATA LAYOUTS"
+                            " ARE TESTED\002)";
+  static char fmt_10001[] = "(\002 ROW-MAJOR DATA LAYOUT IS TESTED\002)";
+  static char fmt_10000[] = "(\002 COLUMN-MAJOR DATA LAYOUT IS TESTED\002)";
+  static char fmt_9984[] = "(a12,l2)";
+  static char fmt_9986[] =
+      "(\002 SUBPROGRAM NAME \002,a12,\002 NOT RECOGN"
+      "IZED\002,/\002 ******* T\002,\002ESTS ABANDONED *******\002)";
+  static char fmt_9998[] = "(\002 RELATIVE MACHINE PRECISION IS TAKEN TO"
+                           " BE\002,1p,e9.1)";
+  static char fmt_9985[] =
+      "(\002 ERROR IN CMVCH -  IN-LINE DOT PRODUCTS A"
+      "RE BEING EVALU\002,\002ATED WRONGLY.\002,/\002 CMVCH WAS CALLED "
+      "WITH TRANS = \002,a1,\002 AND RETURNED SAME = \002,l1,\002 AND E"
+      "RR = \002,f12.3,\002.\002,/\002 THIS MAY BE DUE TO FAULTS IN THE"
+      " ARITHMETIC OR THE COMPILER.\002,/\002 ******* TESTS ABANDONED *"
+      "******\002)";
+  static char fmt_9983[] = "(1x,a12,\002 WAS NOT TESTED\002)";
+  static char fmt_9982[] = "(/\002 END OF TESTS\002)";
+  static char fmt_9981[] = "(/\002 ******* FATAL ERROR - TESTS ABANDONED *"
+                           "******\002)";
+  static char fmt_9987[] =
+      "(\002 AMEND DATA FILE OR INCREASE ARRAY SIZES "
+      "IN PROGRAM\002,/\002 ******* TESTS ABANDONED *******\002)";
+
+  /* System generated locals */
+  integer i__1, i__2, i__3, i__4, i__5;
+  doublereal d__1;
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
+  doublecomplex a[4225] /* was [65][65] */;
+  doublereal g[65];
+  integer i__, j, n;
+  doublecomplex x[65], y[65], z__[130], aa[4225];
+  integer kb[7];
+  doublecomplex as[4225], xs[130], ys[130], yt[65], xx[130], yy[130], alf[7];
+  integer inc[7], nkb;
+  doublecomplex bet[7];
+  doublereal eps, err;
+  extern logical lze_(doublecomplex *, doublecomplex *, integer *);
+  integer nalf, idim[9];
+  logical same;
+  integer ninc, nbet, ntra;
+  logical rewi;
+  extern /* Subroutine */ int zchk1_(
+      char *, doublereal *, doublereal *, integer *, integer *, logical *,
+      logical *, logical *, integer *, integer *, integer *, integer *,
+      integer *, doublecomplex *, integer *, doublecomplex *, integer *,
+      integer *, integer *, integer *, doublecomplex *, doublecomplex *,
+      doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+      doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+      doublereal *, integer *, ftnlen),
+      zchk2_(char *, doublereal *, doublereal *, integer *, integer *,
+             logical *, logical *, logical *, integer *, integer *, integer *,
+             integer *, integer *, doublecomplex *, integer *, doublecomplex *,
+             integer *, integer *, integer *, integer *, doublecomplex *,
+             doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+             doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+             doublecomplex *, doublereal *, integer *, ftnlen),
+      zchk3_(char *, doublereal *, doublereal *, integer *, integer *,
+             logical *, logical *, logical *, integer *, integer *, integer *,
+             integer *, integer *, integer *, integer *, integer *,
+             doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+             doublecomplex *, doublecomplex *, doublecomplex *, doublereal *,
+             doublecomplex *, integer *, ftnlen),
+      zchk4_(char *, doublereal *, doublereal *, integer *, integer *,
+             logical *, logical *, logical *, integer *, integer *, integer *,
+             doublecomplex *, integer *, integer *, integer *, integer *,
+             doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+             doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+             doublecomplex *, doublecomplex *, doublereal *, doublecomplex *,
+             integer *, ftnlen),
+      zchk5_(char *, doublereal *, doublereal *, integer *, integer *,
+             logical *, logical *, logical *, integer *, integer *, integer *,
+             doublecomplex *, integer *, integer *, integer *, integer *,
+             doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+             doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+             doublecomplex *, doublecomplex *, doublereal *, doublecomplex *,
+             integer *, ftnlen),
+      zchk6_(char *, doublereal *, doublereal *, integer *, integer *,
+             logical *, logical *, logical *, integer *, integer *, integer *,
+             doublecomplex *, integer *, integer *, integer *, integer *,
+             doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+             doublecomplex *, doublecomplex *, doublecomplex *, doublecomplex *,
+             doublecomplex *, doublecomplex *, doublereal *, doublecomplex *,
+             integer *, ftnlen);
+  extern doublereal ddiff_(doublereal *, doublereal *);
+  logical fatal, trace;
+  integer nidim;
+  char snaps[32], trans[1];
+  extern /* Subroutine */ int zmvch_(
+      char *, integer *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, doublereal *, doublecomplex *, doublereal *,
+      doublereal *, logical *, integer *, logical *, ftnlen);
+  integer isnum;
+  logical ltest[17], sfatal, corder;
+  char snamet[12];
+  doublereal thresh;
+  logical rorder;
+  integer layout;
+  logical ltestt, tsterr;
+  extern /* Subroutine */ void cz2chke_(char *);
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
+  static cilist io___29 = {0, 6, 0, fmt_9995, 0};
+  static cilist io___30 = {0, 5, 0, 0, 0};
+  static cilist io___32 = {0, 6, 0, fmt_9997, 0};
+  static cilist io___33 = {0, 5, 0, 0, 0};
+  static cilist io___35 = {0, 6, 0, fmt_9994, 0};
+  static cilist io___36 = {0, 5, 0, 0, 0};
+  static cilist io___38 = {0, 6, 0, fmt_9997, 0};
+  static cilist io___39 = {0, 5, 0, 0, 0};
+  static cilist io___41 = {0, 5, 0, 0, 0};
+  static cilist io___43 = {0, 6, 0, fmt_9997, 0};
+  static cilist io___44 = {0, 5, 0, 0, 0};
+  static cilist io___46 = {0, 6, 0, fmt_9993, 0};
+  static cilist io___47 = {0, 6, 0, fmt_9992, 0};
+  static cilist io___48 = {0, 6, 0, fmt_9991, 0};
+  static cilist io___49 = {0, 6, 0, fmt_9990, 0};
+  static cilist io___50 = {0, 6, 0, fmt_9989, 0};
+  static cilist io___51 = {0, 6, 0, fmt_9988, 0};
+  static cilist io___52 = {0, 6, 0, 0, 0};
+  static cilist io___53 = {0, 6, 0, fmt_9980, 0};
+  static cilist io___54 = {0, 6, 0, 0, 0};
+  static cilist io___55 = {0, 6, 0, fmt_9999, 0};
+  static cilist io___56 = {0, 6, 0, 0, 0};
+  static cilist io___59 = {0, 6, 0, fmt_10002, 0};
+  static cilist io___60 = {0, 6, 0, fmt_10001, 0};
+  static cilist io___61 = {0, 6, 0, fmt_10000, 0};
+  static cilist io___62 = {0, 6, 0, 0, 0};
+  static cilist io___64 = {0, 5, 1, fmt_9984, 0};
+  static cilist io___67 = {0, 6, 0, fmt_9986, 0};
+  static cilist io___69 = {0, 6, 0, fmt_9998, 0};
+  static cilist io___82 = {0, 6, 0, fmt_9985, 0};
+  static cilist io___83 = {0, 6, 0, fmt_9985, 0};
+  static cilist io___85 = {0, 6, 0, 0, 0};
+  static cilist io___86 = {0, 6, 0, fmt_9983, 0};
+  static cilist io___87 = {0, 6, 0, 0, 0};
+  static cilist io___94 = {0, 6, 0, fmt_9982, 0};
+  static cilist io___95 = {0, 6, 0, fmt_9981, 0};
+  static cilist io___96 = {0, 6, 0, fmt_9987, 0};
+
+  /*  Test program for the COMPLEX*16          Level 2 Blas. */
+
+  /*  The program must be driven by a short data file. The first 17 records */
+  /*  of the file are read using list-directed input, the last 17 records */
+  /*  are read using the format ( A12, L2 ). An annotated example of a data */
+  /*  file can be obtained by deleting the first 3 characters from the */
+  /*  following 34 lines: */
+  /*  'CBLAT2.SNAP'     NAME OF SNAPSHOT OUTPUT FILE */
+  /*  -1                UNIT NUMBER OF SNAPSHOT FILE (NOT USED IF .LT. 0) */
+  /*  F        LOGICAL FLAG, T TO REWIND SNAPSHOT FILE AFTER EACH RECORD. */
+  /*  F        LOGICAL FLAG, T TO STOP ON FAILURES. */
+  /*  T        LOGICAL FLAG, T TO TEST ERROR EXITS. */
+  /*  2        0 TO TEST COLUMN-MAJOR, 1 TO TEST ROW-MAJOR, 2 TO TEST BOTH */
+  /*  16.0     THRESHOLD VALUE OF TEST RATIO */
+  /*  6                 NUMBER OF VALUES OF N */
+  /*  0 1 2 3 5 9       VALUES OF N */
+  /*  4                 NUMBER OF VALUES OF K */
+  /*  0 1 2 4           VALUES OF K */
+  /*  4                 NUMBER OF VALUES OF INCX AND INCY */
+  /*  1 2 -1 -2         VALUES OF INCX AND INCY */
+  /*  3                 NUMBER OF VALUES OF ALPHA */
+  /*  (0.0,0.0) (1.0,0.0) (0.7,-0.9)       VALUES OF ALPHA */
+  /*  3                 NUMBER OF VALUES OF BETA */
+  /*  (0.0,0.0) (1.0,0.0) (1.3,-1.1)       VALUES OF BETA */
+  /*  cblas_zgemv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_zgbmv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_zhemv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_zhbmv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_zhpmv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_ztrmv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_ztbmv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_ztpmv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_ztrsv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_ztbsv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_ztpsv  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_zgerc  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_zgeru  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_zher   T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_zhpr   T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_zher2  T PUT F FOR NO TEST. SAME COLUMNS. */
+  /*  cblas_zhpr2  T PUT F FOR NO TEST. SAME COLUMNS. */
+
+  /*     See: */
+
+  /*        Dongarra J. J., Du Croz J. J., Hammarling S.  and Hanson R. J.. */
+  /*        An  extended  set of Fortran  Basic Linear Algebra Subprograms. */
+
+  /*        Technical  Memoranda  Nos. 41 (revision 3) and 81,  Mathematics */
+  /*        and  Computer Science  Division,  Argonne  National Laboratory, */
+  /*        9700 South Cass Avenue, Argonne, Illinois 60439, US. */
+
+  /*        Or */
+
+  /*        NAG  Technical Reports TR3/87 and TR4/87,  Numerical Algorithms */
+  /*        Group  Ltd.,  NAG  Central  Office,  256  Banbury  Road, Oxford */
+  /*        OX2 7DE, UK,  and  Numerical Algorithms Group Inc.,  1101  31st */
+  /*        Street,  Suite 100,  Downers Grove,  Illinois 60515-1263,  USA. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
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
+
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
+  do_lio(&c__5, &c__1, (char *)&thresh, (ftnlen)sizeof(doublereal));
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
+    goto L230;
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
+      goto L230;
+    }
+    /* L10: */
+  }
+  /*     Values of K */
+  s_rsle(&io___24);
+  do_lio(&c__3, &c__1, (char *)&nkb, (ftnlen)sizeof(integer));
+  e_rsle();
+  if (nkb < 1 || nkb > 7) {
+    s_wsfe(&io___26);
+    do_fio(&c__1, "K", (ftnlen)1);
+    do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
+    e_wsfe();
+    goto L230;
+  }
+  s_rsle(&io___27);
+  i__1 = nkb;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_lio(&c__3, &c__1, (char *)&kb[i__ - 1], (ftnlen)sizeof(integer));
+  }
+  e_rsle();
+  i__1 = nkb;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    if (kb[i__ - 1] < 0) {
+      s_wsfe(&io___29);
+      e_wsfe();
+      goto L230;
+    }
+    /* L20: */
+  }
+  /*     Values of INCX and INCY */
+  s_rsle(&io___30);
+  do_lio(&c__3, &c__1, (char *)&ninc, (ftnlen)sizeof(integer));
+  e_rsle();
+  if (ninc < 1 || ninc > 7) {
+    s_wsfe(&io___32);
+    do_fio(&c__1, "INCX AND INCY", (ftnlen)13);
+    do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
+    e_wsfe();
+    goto L230;
+  }
+  s_rsle(&io___33);
+  i__1 = ninc;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_lio(&c__3, &c__1, (char *)&inc[i__ - 1], (ftnlen)sizeof(integer));
+  }
+  e_rsle();
+  i__1 = ninc;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    if (inc[i__ - 1] == 0 || (i__2 = inc[i__ - 1], abs(i__2)) > 2) {
+      s_wsfe(&io___35);
+      do_fio(&c__1, (char *)&c__2, (ftnlen)sizeof(integer));
+      e_wsfe();
+      goto L230;
+    }
+    /* L30: */
+  }
+  /*     Values of ALPHA */
+  s_rsle(&io___36);
+  do_lio(&c__3, &c__1, (char *)&nalf, (ftnlen)sizeof(integer));
+  e_rsle();
+  if (nalf < 1 || nalf > 7) {
+    s_wsfe(&io___38);
+    do_fio(&c__1, "ALPHA", (ftnlen)5);
+    do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
+    e_wsfe();
+    goto L230;
+  }
+  s_rsle(&io___39);
+  i__1 = nalf;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_lio(&c__7, &c__1, (char *)&alf[i__ - 1], (ftnlen)sizeof(doublecomplex));
+  }
+  e_rsle();
+  /*     Values of BETA */
+  s_rsle(&io___41);
+  do_lio(&c__3, &c__1, (char *)&nbet, (ftnlen)sizeof(integer));
+  e_rsle();
+  if (nbet < 1 || nbet > 7) {
+    s_wsfe(&io___43);
+    do_fio(&c__1, "BETA", (ftnlen)4);
+    do_fio(&c__1, (char *)&c__7, (ftnlen)sizeof(integer));
+    e_wsfe();
+    goto L230;
+  }
+  s_rsle(&io___44);
+  i__1 = nbet;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_lio(&c__7, &c__1, (char *)&bet[i__ - 1], (ftnlen)sizeof(doublecomplex));
+  }
+  e_rsle();
+
+  /*     Report values of parameters. */
+
+  s_wsfe(&io___46);
+  e_wsfe();
+  s_wsfe(&io___47);
+  i__1 = nidim;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_fio(&c__1, (char *)&idim[i__ - 1], (ftnlen)sizeof(integer));
+  }
+  e_wsfe();
+  s_wsfe(&io___48);
+  i__1 = nkb;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_fio(&c__1, (char *)&kb[i__ - 1], (ftnlen)sizeof(integer));
+  }
+  e_wsfe();
+  s_wsfe(&io___49);
+  i__1 = ninc;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_fio(&c__1, (char *)&inc[i__ - 1], (ftnlen)sizeof(integer));
+  }
+  e_wsfe();
+  s_wsfe(&io___50);
+  i__1 = nalf;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_fio(&c__2, (char *)&alf[i__ - 1], (ftnlen)sizeof(doublereal));
+  }
+  e_wsfe();
+  s_wsfe(&io___51);
+  i__1 = nbet;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    do_fio(&c__2, (char *)&bet[i__ - 1], (ftnlen)sizeof(doublereal));
+  }
+  e_wsfe();
+  if (!tsterr) {
+    s_wsle(&io___52);
+    e_wsle();
+    s_wsfe(&io___53);
+    e_wsfe();
+  }
+  s_wsle(&io___54);
+  e_wsle();
+  s_wsfe(&io___55);
+  do_fio(&c__1, (char *)&thresh, (ftnlen)sizeof(doublereal));
+  e_wsfe();
+  s_wsle(&io___56);
+  e_wsle();
+  rorder = FALSE_;
+  corder = FALSE_;
+  if (layout == 2) {
+    rorder = TRUE_;
+    corder = TRUE_;
+    s_wsfe(&io___59);
+    e_wsfe();
+  } else if (layout == 1) {
+    rorder = TRUE_;
+    s_wsfe(&io___60);
+    e_wsfe();
+  } else if (layout == 0) {
+    corder = TRUE_;
+    s_wsfe(&io___61);
+    e_wsfe();
+  }
+  s_wsle(&io___62);
+  e_wsle();
+
+  /*     Read names of subroutines and flags which indicate */
+  /*     whether they are to be tested. */
+
+  for (i__ = 1; i__ <= 17; ++i__) {
+    ltest[i__ - 1] = FALSE_;
+    /* L40: */
+  }
+L50:
+  i__1 = s_rsfe(&io___64);
+  if (i__1 != 0) {
+    goto L80;
+  }
+  i__1 = do_fio(&c__1, snamet, (ftnlen)12);
+  if (i__1 != 0) {
+    goto L80;
+  }
+  i__1 = do_fio(&c__1, (char *)&ltestt, (ftnlen)sizeof(logical));
+  if (i__1 != 0) {
+    goto L80;
+  }
+  i__1 = e_rsfe();
+  if (i__1 != 0) {
+    goto L80;
+  }
+  for (i__ = 1; i__ <= 17; ++i__) {
+    if (s_cmp(snamet, snames + (i__ - 1) * 12, (ftnlen)12, (ftnlen)12) == 0) {
+      goto L70;
+    }
+    /* L60: */
+  }
+  s_wsfe(&io___67);
+  do_fio(&c__1, snamet, (ftnlen)12);
+  e_wsfe();
+  s_stop("", (ftnlen)0);
+L70:
+  ltest[i__ - 1] = ltestt;
+  goto L50;
+
+L80:
+  cl__1.cerr = 0;
+  cl__1.cunit = 5;
+  cl__1.csta = 0;
+  f_clos(&cl__1);
+
+  /*     Compute EPS (the machine precision). */
+
+  eps = 1.;
+L90:
+  d__1 = eps + 1.;
+  if (ddiff_(&d__1, &c_b125) == 0.) {
+    goto L100;
+  }
+  eps *= .5;
+  goto L90;
+L100:
+  eps += eps;
+  s_wsfe(&io___69);
+  do_fio(&c__1, (char *)&eps, (ftnlen)sizeof(doublereal));
+  e_wsfe();
+
+  /*     Check the reliability of ZMVCH using exact data. */
+
+  n = 32;
+  i__1 = n;
+  for (j = 1; j <= i__1; ++j) {
+    i__2 = n;
+    for (i__ = 1; i__ <= i__2; ++i__) {
+      i__3 = i__ + j * 65 - 66;
+      /* Computing MAX */
+      i__5 = i__ - j + 1;
+      i__4 = max(i__5, 0);
+      a[i__3].r = (doublereal)i__4, a[i__3].i = 0.;
+      /* L110: */
+    }
+    i__2 = j - 1;
+    x[i__2].r = (doublereal)j, x[i__2].i = 0.;
+    i__2 = j - 1;
+    y[i__2].r = 0., y[i__2].i = 0.;
+    /* L120: */
+  }
+  i__1 = n;
+  for (j = 1; j <= i__1; ++j) {
+    i__2 = j - 1;
+    i__3 = j * ((j + 1) * j) / 2 - (j + 1) * j * (j - 1) / 3;
+    yy[i__2].r = (doublereal)i__3, yy[i__2].i = 0.;
+    /* L130: */
+  }
+  /*     YY holds the exact result. On exit from CMVCH YT holds */
+  /*     the result computed by CMVCH. */
+  *(unsigned char *)trans = 'N';
+  zmvch_(trans, &n, &n, &c_b2, a, &c__65, x, &c__1, &c_b1, y, &c__1, yt, g, yy,
+         &eps, &err, &fatal, &c__6, &c_true, (ftnlen)1);
+  same = lze_(yy, yt, &n);
+  if (!same || err != 0.) {
+    s_wsfe(&io___82);
+    do_fio(&c__1, trans, (ftnlen)1);
+    do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
+    do_fio(&c__1, (char *)&err, (ftnlen)sizeof(doublereal));
+    e_wsfe();
+    s_stop("", (ftnlen)0);
+  }
+  *(unsigned char *)trans = 'T';
+  zmvch_(trans, &n, &n, &c_b2, a, &c__65, x, &c_n1, &c_b1, y, &c_n1, yt, g, yy,
+         &eps, &err, &fatal, &c__6, &c_true, (ftnlen)1);
+  same = lze_(yy, yt, &n);
+  if (!same || err != 0.) {
+    s_wsfe(&io___83);
+    do_fio(&c__1, trans, (ftnlen)1);
+    do_fio(&c__1, (char *)&same, (ftnlen)sizeof(logical));
+    do_fio(&c__1, (char *)&err, (ftnlen)sizeof(doublereal));
+    e_wsfe();
+    s_stop("", (ftnlen)0);
+  }
+
+  /*     Test each subroutine in turn. */
+
+  for (isnum = 1; isnum <= 17; ++isnum) {
+    s_wsle(&io___85);
+    e_wsle();
+    if (!ltest[isnum - 1]) {
+      /*           Subprogram is not to be tested. */
+      s_wsfe(&io___86);
+      do_fio(&c__1, snames + (isnum - 1) * 12, (ftnlen)12);
+      e_wsfe();
+    } else {
+      s_copy(srnamc_1.srnamt, snames + (isnum - 1) * 12, (ftnlen)12,
+             (ftnlen)12);
+      /*           Test error exits. */
+      if (tsterr) {
+        cz2chke_(snames + (isnum - 1) * 12);
+        s_wsle(&io___87);
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
+        goto L140;
+      case 3:
+        goto L150;
+      case 4:
+        goto L150;
+      case 5:
+        goto L150;
+      case 6:
+        goto L160;
+      case 7:
+        goto L160;
+      case 8:
+        goto L160;
+      case 9:
+        goto L160;
+      case 10:
+        goto L160;
+      case 11:
+        goto L160;
+      case 12:
+        goto L170;
+      case 13:
+        goto L170;
+      case 14:
+        goto L180;
+      case 15:
+        goto L180;
+      case 16:
+        goto L190;
+      case 17:
+        goto L190;
+      }
+    /*           Test ZGEMV, 01, and ZGBMV, 02. */
+    L140:
+      if (corder) {
+        zchk1_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf, alf, &nbet, bet,
+               &ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy, ys, yt,
+               g, &c__0, (ftnlen)12);
+      }
+      if (rorder) {
+        zchk1_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf, alf, &nbet, bet,
+               &ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy, ys, yt,
+               g, &c__1, (ftnlen)12);
+      }
+      goto L200;
+    /*           Test ZHEMV, 03, ZHBMV, 04, and ZHPMV, 05. */
+    L150:
+      if (corder) {
+        zchk2_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf, alf, &nbet, bet,
+               &ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy, ys, yt,
+               g, &c__0, (ftnlen)12);
+      }
+      if (rorder) {
+        zchk2_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nkb, kb, &nalf, alf, &nbet, bet,
+               &ninc, inc, &c__65, &c__2, a, aa, as, x, xx, xs, y, yy, ys, yt,
+               g, &c__1, (ftnlen)12);
+      }
+      goto L200;
+    /*           Test ZTRMV, 06, ZTBMV, 07, ZTPMV, 08, */
+    /*           ZTRSV, 09, ZTBSV, 10, and ZTPSV, 11. */
+    L160:
+      if (corder) {
+        zchk3_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nkb, kb, &ninc, inc, &c__65, &c__2,
+               a, aa, as, y, yy, ys, yt, g, z__, &c__0, (ftnlen)12);
+      }
+      if (rorder) {
+        zchk3_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nkb, kb, &ninc, inc, &c__65, &c__2,
+               a, aa, as, y, yy, ys, yt, g, z__, &c__1, (ftnlen)12);
+      }
+      goto L200;
+    /*           Test ZGERC, 12, ZGERU, 13. */
+    L170:
+      if (corder) {
+        zchk4_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &ninc, inc, &c__65,
+               &c__2, a, aa, as, x, xx, xs, y, yy, ys, yt, g, z__, &c__0,
+               (ftnlen)12);
+      }
+      if (rorder) {
+        zchk4_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &ninc, inc, &c__65,
+               &c__2, a, aa, as, x, xx, xs, y, yy, ys, yt, g, z__, &c__1,
+               (ftnlen)12);
+      }
+      goto L200;
+    /*           Test ZHER, 14, and ZHPR, 15. */
+    L180:
+      if (corder) {
+        zchk5_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &ninc, inc, &c__65,
+               &c__2, a, aa, as, x, xx, xs, y, yy, ys, yt, g, z__, &c__0,
+               (ftnlen)12);
+      }
+      if (rorder) {
+        zchk5_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &ninc, inc, &c__65,
+               &c__2, a, aa, as, x, xx, xs, y, yy, ys, yt, g, z__, &c__1,
+               (ftnlen)12);
+      }
+      goto L200;
+    /*           Test ZHER2, 16, and ZHPR2, 17. */
+    L190:
+      if (corder) {
+        zchk6_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &ninc, inc, &c__65,
+               &c__2, a, aa, as, x, xx, xs, y, yy, ys, yt, g, z__, &c__0,
+               (ftnlen)12);
+      }
+      if (rorder) {
+        zchk6_(snames + (isnum - 1) * 12, &eps, &thresh, &c__6, &ntra, &trace,
+               &rewi, &fatal, &nidim, idim, &nalf, alf, &ninc, inc, &c__65,
+               &c__2, a, aa, as, x, xx, xs, y, yy, ys, yt, g, z__, &c__1,
+               (ftnlen)12);
+      }
+
+    L200:
+      if (fatal && sfatal) {
+        goto L220;
+      }
+    }
+    /* L210: */
+  }
+  s_wsfe(&io___94);
+  e_wsfe();
+  goto L240;
+
+L220:
+  s_wsfe(&io___95);
+  e_wsfe();
+  goto L240;
+
+L230:
+  s_wsfe(&io___96);
+  e_wsfe();
+
+L240:
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
+  /*     End of ZBLAT2. */
+
+  return 0;
+} /* MAIN__ */
+
+/* Subroutine */ int
+zchk1_(char *sname, doublereal *eps, doublereal *thresh, integer *nout,
+       integer *ntra, logical *trace, logical *rewi, logical *fatal,
+       integer *nidim, integer *idim, integer *nkb, integer *kb, integer *nalf,
+       doublecomplex *alf, integer *nbet, doublecomplex *bet, integer *ninc,
+       integer *inc, integer *nmax, integer *incmax, doublecomplex *a,
+       doublecomplex *aa, doublecomplex *as, doublecomplex *x,
+       doublecomplex *xx, doublecomplex *xs, doublecomplex *y,
+       doublecomplex *yy, doublecomplex *ys, doublecomplex *yt, doublereal *g,
+       integer *iorder, ftnlen sname_len) {
+  /* Initialized data */
+
+  static char ich[3] = "NTC";
+
+  /* Format strings */
+  static char fmt_9994[] =
+      "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+      "2(i3,\002,\002),\002(\002,f4.1,\002,\002,f4.1,\002), A,\002,/10x"
+      ",i3,\002, X,\002,i2,\002,(\002,f4.1,\002,\002,f4.1,\002), Y,\002"
+      ",i2,\002) .\002)";
+  static char fmt_9995[] =
+      "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+      "4(i3,\002,\002),\002(\002,f4.1,\002,\002,f4.1,\002), A,\002,/10x"
+      ",i3,\002, X,\002,i2,\002,(\002,f4.1,\002,\002,f4.1,\002), Y,\002"
+      ",i2,\002) .\002)";
+  static char fmt_9993[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
+                           "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_9997[] =
+      "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
+      "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
+      " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7, i__8,
+      i__9;
+  alist al__1;
+
+  /* Builtin functions */
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
+      f_rew(alist *);
+
+  /* Local variables */
+  integer i__, m, n, ia, ib, ic, nc, nd, im, in, kl, ml, nk, nl, ku, ix, iy, ms,
+      lx, ly, ns, laa, lda;
+  doublecomplex als, bls;
+  doublereal err;
+  integer iku, kls;
+  extern logical lze_(doublecomplex *, doublecomplex *, integer *);
+  integer kus;
+  doublecomplex beta;
+  integer ldas;
+  logical same;
+  integer incx, incy;
+  logical full, tran, null;
+  doublecomplex alpha;
+  logical isame[13];
+  extern /* Subroutine */ int zmake_(
+      char *, char *, char *, integer *, integer *, doublecomplex *, integer *,
+      doublecomplex *, integer *, integer *, integer *, logical *,
+      doublecomplex *, ftnlen, ftnlen, ftnlen);
+  integer nargs;
+  logical reset;
+  integer incxs, incys;
+  char trans[1];
+  extern /* Subroutine */ int zmvch_(
+      char *, integer *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, doublereal *, doublecomplex *, doublereal *,
+      doublereal *, logical *, integer *, logical *, ftnlen);
+  logical banded;
+  extern /* Subroutine */ void czgbmv_(
+      integer *, char *, integer *, integer *, integer *, integer *,
+      doublecomplex *, doublecomplex *, integer *, doublecomplex *, integer *,
+      doublecomplex *, doublecomplex *, integer *);
+  char ctrans[14];
+  extern /* Subroutine */ void czgemv_(
+      integer *, char *, integer *, integer *, doublecomplex *, doublecomplex *,
+      integer *, doublecomplex *, integer *, doublecomplex *, doublecomplex *,
+      integer *);
+  doublereal errmax;
+  doublecomplex transl;
+  extern logical lzeres_(char *, char *, integer *, integer *, doublecomplex *,
+                         doublecomplex *, integer *, ftnlen, ftnlen);
+  char transs[1];
+
+  /* Fortran I/O blocks */
+  static cilist io___144 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___145 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___146 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___149 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___151 = {0, 0, 0, fmt_9999, 0};
+  static cilist io___152 = {0, 0, 0, fmt_9997, 0};
+  static cilist io___153 = {0, 0, 0, fmt_9996, 0};
+  static cilist io___154 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___155 = {0, 0, 0, fmt_9995, 0};
+
+  /*  Tests CGEMV and CGBMV. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
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
+  --kb;
+  --alf;
+  --bet;
+  --inc;
+  --g;
+  --yt;
+  --y;
+  --x;
+  --as;
+  --aa;
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+  --ys;
+  --yy;
+  --xs;
+  --xx;
+
+  /* Function Body */
+  /*     .. Executable Statements .. */
+  full = *(unsigned char *)&sname[8] == 'e';
+  banded = *(unsigned char *)&sname[8] == 'b';
+  /*     Define the number of arguments. */
+  if (full) {
+    nargs = 11;
+  } else if (banded) {
+    nargs = 13;
+  }
+
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.;
+
+  i__1 = *nidim;
+  for (in = 1; in <= i__1; ++in) {
+    n = idim[in];
+    nd = n / 2 + 1;
+
+    for (im = 1; im <= 2; ++im) {
+      if (im == 1) {
+        /* Computing MAX */
+        i__2 = n - nd;
+        m = max(i__2, 0);
+      }
+      if (im == 2) {
+        /* Computing MIN */
+        i__2 = n + nd;
+        m = min(i__2, *nmax);
+      }
+
+      if (banded) {
+        nk = *nkb;
+      } else {
+        nk = 1;
+      }
+      i__2 = nk;
+      for (iku = 1; iku <= i__2; ++iku) {
+        if (banded) {
+          ku = kb[iku];
+          /* Computing MAX */
+          i__3 = ku - 1;
+          kl = max(i__3, 0);
+        } else {
+          ku = n - 1;
+          kl = m - 1;
+        }
+        /*              Set LDA to 1 more than minimum value if room. */
+        if (banded) {
+          lda = kl + ku + 1;
+        } else {
+          lda = m;
+        }
+        if (lda < *nmax) {
+          ++lda;
+        }
+        /*              Skip tests if not enough room. */
+        if (lda > *nmax) {
+          goto L100;
+        }
+        laa = lda * n;
+        null = n <= 0 || m <= 0;
+
+        /*              Generate the matrix A. */
+
+        transl.r = 0., transl.i = 0.;
+        zmake_(sname + 7, " ", " ", &m, &n, &a[a_offset], nmax, &aa[1], &lda,
+               &kl, &ku, &reset, &transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+        for (ic = 1; ic <= 3; ++ic) {
+          *(unsigned char *)trans = *(unsigned char *)&ich[ic - 1];
+          if (*(unsigned char *)trans == 'N') {
+            s_copy(ctrans, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
+          } else if (*(unsigned char *)trans == 'T') {
+            s_copy(ctrans, "    CblasTrans", (ftnlen)14, (ftnlen)14);
+          } else {
+            s_copy(ctrans, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
+          }
+          tran =
+              *(unsigned char *)trans == 'T' || *(unsigned char *)trans == 'C';
+
+          if (tran) {
+            ml = n;
+            nl = m;
+          } else {
+            ml = m;
+            nl = n;
+          }
+
+          i__3 = *ninc;
+          for (ix = 1; ix <= i__3; ++ix) {
+            incx = inc[ix];
+            lx = abs(incx) * nl;
+
+            /*                    Generate the vector X. */
+
+            transl.r = .5, transl.i = 0.;
+            i__4 = abs(incx);
+            i__5 = nl - 1;
+            zmake_("ge", " ", " ", &c__1, &nl, &x[1], &c__1, &xx[1], &i__4,
+                   &c__0, &i__5, &reset, &transl, (ftnlen)2, (ftnlen)1,
+                   (ftnlen)1);
+            if (nl > 1) {
+              i__4 = nl / 2;
+              x[i__4].r = 0., x[i__4].i = 0.;
+              i__4 = abs(incx) * (nl / 2 - 1) + 1;
+              xx[i__4].r = 0., xx[i__4].i = 0.;
+            }
+
+            i__4 = *ninc;
+            for (iy = 1; iy <= i__4; ++iy) {
+              incy = inc[iy];
+              ly = abs(incy) * ml;
+
+              i__5 = *nalf;
+              for (ia = 1; ia <= i__5; ++ia) {
+                i__6 = ia;
+                alpha.r = alf[i__6].r, alpha.i = alf[i__6].i;
+
+                i__6 = *nbet;
+                for (ib = 1; ib <= i__6; ++ib) {
+                  i__7 = ib;
+                  beta.r = bet[i__7].r, beta.i = bet[i__7].i;
+
+                  /*                             Generate the vector Y. */
+
+                  transl.r = 0., transl.i = 0.;
+                  i__7 = abs(incy);
+                  i__8 = ml - 1;
+                  zmake_("ge", " ", " ", &c__1, &ml, &y[1], &c__1, &yy[1],
+                         &i__7, &c__0, &i__8, &reset, &transl, (ftnlen)2,
+                         (ftnlen)1, (ftnlen)1);
+
+                  ++nc;
+
+                  /*                             Save every datum before calling
+                   * the */
+                  /*                             subroutine. */
+
+                  *(unsigned char *)transs = *(unsigned char *)trans;
+                  ms = m;
+                  ns = n;
+                  kls = kl;
+                  kus = ku;
+                  als.r = alpha.r, als.i = alpha.i;
+                  i__7 = laa;
+                  for (i__ = 1; i__ <= i__7; ++i__) {
+                    i__8 = i__;
+                    i__9 = i__;
+                    as[i__8].r = aa[i__9].r, as[i__8].i = aa[i__9].i;
+                    /* L10: */
+                  }
+                  ldas = lda;
+                  i__7 = lx;
+                  for (i__ = 1; i__ <= i__7; ++i__) {
+                    i__8 = i__;
+                    i__9 = i__;
+                    xs[i__8].r = xx[i__9].r, xs[i__8].i = xx[i__9].i;
+                    /* L20: */
+                  }
+                  incxs = incx;
+                  bls.r = beta.r, bls.i = beta.i;
+                  i__7 = ly;
+                  for (i__ = 1; i__ <= i__7; ++i__) {
+                    i__8 = i__;
+                    i__9 = i__;
+                    ys[i__8].r = yy[i__9].r, ys[i__8].i = yy[i__9].i;
+                    /* L30: */
+                  }
+                  incys = incy;
+
+                  /*                             Call the subroutine. */
+
+                  if (full) {
+                    if (*trace) {
+                      io___144.ciunit = *ntra;
+                      s_wsfe(&io___144);
+                      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                      do_fio(&c__1, sname, (ftnlen)12);
+                      do_fio(&c__1, ctrans, (ftnlen)14);
+                      do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
+                      do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                      do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+                      do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+                      do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                      do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(doublereal));
+                      do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+                      e_wsfe();
+                    }
+                    if (*rewi) {
+                      al__1.aerr = 0;
+                      al__1.aunit = *ntra;
+                      f_rew(&al__1);
+                    }
+                    czgemv_(iorder, trans, &m, &n, &alpha, &aa[1], &lda, &xx[1],
+                            &incx, &beta, &yy[1], &incy);
+                  } else if (banded) {
+                    if (*trace) {
+                      io___145.ciunit = *ntra;
+                      s_wsfe(&io___145);
+                      do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                      do_fio(&c__1, sname, (ftnlen)12);
+                      do_fio(&c__1, ctrans, (ftnlen)14);
+                      do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
+                      do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                      do_fio(&c__1, (char *)&kl, (ftnlen)sizeof(integer));
+                      do_fio(&c__1, (char *)&ku, (ftnlen)sizeof(integer));
+                      do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+                      do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+                      do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                      do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(doublereal));
+                      do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+                      e_wsfe();
+                    }
+                    if (*rewi) {
+                      al__1.aerr = 0;
+                      al__1.aunit = *ntra;
+                      f_rew(&al__1);
+                    }
+                    czgbmv_(iorder, trans, &m, &n, &kl, &ku, &alpha, &aa[1],
+                            &lda, &xx[1], &incx, &beta, &yy[1], &incy);
+                  }
+
+                  /*                            Check if error-exit was taken
+                   * incorrectly. */
+
+                  if (!infoc_1.ok) {
+                    io___146.ciunit = *nout;
+                    s_wsfe(&io___146);
+                    e_wsfe();
+                    *fatal = TRUE_;
+                    goto L130;
+                  }
+
+                  /*                             See what data changed inside
+                   * subroutines. */
+
+                  /*        IF(TRANS .NE. 'C' .OR. (INCX .GT. 0 .AND. INCY .GT.
+                   * 0)) THEN */
+                  isame[0] =
+                      *(unsigned char *)trans == *(unsigned char *)transs;
+                  isame[1] = ms == m;
+                  isame[2] = ns == n;
+                  if (full) {
+                    isame[3] = als.r == alpha.r && als.i == alpha.i;
+                    isame[4] = lze_(&as[1], &aa[1], &laa);
+                    isame[5] = ldas == lda;
+                    isame[6] = lze_(&xs[1], &xx[1], &lx);
+                    isame[7] = incxs == incx;
+                    isame[8] = bls.r == beta.r && bls.i == beta.i;
+                    if (null) {
+                      isame[9] = lze_(&ys[1], &yy[1], &ly);
+                    } else {
+                      i__7 = abs(incy);
+                      isame[9] = lzeres_("ge", " ", &c__1, &ml, &ys[1], &yy[1],
+                                         &i__7, (ftnlen)2, (ftnlen)1);
+                    }
+                    isame[10] = incys == incy;
+                  } else if (banded) {
+                    isame[3] = kls == kl;
+                    isame[4] = kus == ku;
+                    isame[5] = als.r == alpha.r && als.i == alpha.i;
+                    isame[6] = lze_(&as[1], &aa[1], &laa);
+                    isame[7] = ldas == lda;
+                    isame[8] = lze_(&xs[1], &xx[1], &lx);
+                    isame[9] = incxs == incx;
+                    isame[10] = bls.r == beta.r && bls.i == beta.i;
+                    if (null) {
+                      isame[11] = lze_(&ys[1], &yy[1], &ly);
+                    } else {
+                      i__7 = abs(incy);
+                      isame[11] = lzeres_("ge", " ", &c__1, &ml, &ys[1], &yy[1],
+                                          &i__7, (ftnlen)2, (ftnlen)1);
+                    }
+                    isame[12] = incys == incy;
+                  }
+
+                  /*                             If data was incorrectly
+                   * changed, report */
+                  /*                             and return. */
+
+                  same = TRUE_;
+                  i__7 = nargs;
+                  for (i__ = 1; i__ <= i__7; ++i__) {
+                    same = same && isame[i__ - 1];
+                    if (!isame[i__ - 1]) {
+                      io___149.ciunit = *nout;
+                      s_wsfe(&io___149);
+                      do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
+                      e_wsfe();
+                    }
+                    /* L40: */
+                  }
+                  if (!same) {
+                    *fatal = TRUE_;
+                    goto L130;
+                  }
+
+                  if (!null) {
+
+                    /*                                Check the result. */
+
+                    zmvch_(trans, &m, &n, &alpha, &a[a_offset], nmax, &x[1],
+                           &incx, &beta, &y[1], &incy, &yt[1], &g[1], &yy[1],
+                           eps, &err, fatal, nout, &c_true, (ftnlen)1);
+                    errmax = max(errmax, err);
+                    /*                                If got really bad answer,
+                     * report and */
+                    /*                                return. */
+                    if (*fatal) {
+                      goto L130;
+                    }
+                  } else {
+                    /*                                Avoid repeating tests with
+                     * M.le.0 or */
+                    /*                                N.le.0. */
+                    goto L110;
+                  }
+                  /*                          END IF */
+
+                  /* L50: */
+                }
+
+                /* L60: */
+              }
+
+              /* L70: */
+            }
+
+            /* L80: */
+          }
+
+          /* L90: */
+        }
+
+      L100:;
+      }
+
+    L110:;
+    }
+
+    /* L120: */
+  }
+
+  /*     Report result. */
+
+  if (errmax < *thresh) {
+    io___151.ciunit = *nout;
+    s_wsfe(&io___151);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else {
+    io___152.ciunit = *nout;
+    s_wsfe(&io___152);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
+    e_wsfe();
+  }
+  goto L140;
+
+L130:
+  io___153.ciunit = *nout;
+  s_wsfe(&io___153);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  if (full) {
+    io___154.ciunit = *nout;
+    s_wsfe(&io___154);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, ctrans, (ftnlen)14);
+    do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else if (banded) {
+    io___155.ciunit = *nout;
+    s_wsfe(&io___155);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, ctrans, (ftnlen)14);
+    do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&kl, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&ku, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+    e_wsfe();
+  }
+
+L140:
+  return 0;
+
+  /*     End of ZCHK1. */
+
+} /* zchk1_ */
+
+/* Subroutine */ int
+zchk2_(char *sname, doublereal *eps, doublereal *thresh, integer *nout,
+       integer *ntra, logical *trace, logical *rewi, logical *fatal,
+       integer *nidim, integer *idim, integer *nkb, integer *kb, integer *nalf,
+       doublecomplex *alf, integer *nbet, doublecomplex *bet, integer *ninc,
+       integer *inc, integer *nmax, integer *incmax, doublecomplex *a,
+       doublecomplex *aa, doublecomplex *as, doublecomplex *x,
+       doublecomplex *xx, doublecomplex *xs, doublecomplex *y,
+       doublecomplex *yy, doublecomplex *ys, doublecomplex *yt, doublereal *g,
+       integer *iorder, ftnlen sname_len) {
+  /* Initialized data */
+
+  static char ich[2] = "UL";
+
+  /* Format strings */
+  static char fmt_9993[] =
+      "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+      "i3,\002,(\002,f4.1,\002,\002,f4.1,\002), A,\002,i3,\002, X,\002,"
+      "/10x,i2,\002,(\002,f4.1,\002,\002,f4.1,\002), \002,\002Y,\002,i2,"
+      "\002) .\002)";
+  static char fmt_9994[] =
+      "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+      "2(i3,\002,\002),\002(\002,f4.1,\002,\002,f4.1,\002), A,\002,i3"
+      ",\002, X,\002,/10x,i2,\002,(\002,f4.1,\002,\002,f4.1,\002), Y"
+      ",\002,i2,\002) .\002)";
+  static char fmt_9995[] =
+      "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+      "i3,\002,(\002,f4.1,\002,\002,f4.1,\002), AP, X,\002,/10x,i2,\002"
+      ",(\002,f4.1,\002,\002,f4.1,\002), Y,\002,i2,\002) .\002)";
+  static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
+                           "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_9997[] =
+      "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
+      "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
+      " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7, i__8,
+      i__9;
+  alist al__1;
+
+  /* Builtin functions */
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
+      f_rew(alist *);
+
+  /* Local variables */
+  integer i__, k, n, ia, ib, ic, nc, ik, in, nk, ks, ix, iy, ns, lx, ly, laa,
+      lda;
+  doublecomplex als, bls;
+  doublereal err;
+  extern logical lze_(doublecomplex *, doublecomplex *, integer *);
+  doublecomplex beta;
+  integer ldas;
+  logical same;
+  integer incx, incy;
+  logical full, null;
+  char uplo[1];
+  doublecomplex alpha;
+  logical isame[13];
+  extern /* Subroutine */ int zmake_(
+      char *, char *, char *, integer *, integer *, doublecomplex *, integer *,
+      doublecomplex *, integer *, integer *, integer *, logical *,
+      doublecomplex *, ftnlen, ftnlen, ftnlen);
+  integer nargs;
+  logical reset;
+  char cuplo[14];
+  integer incxs, incys;
+  extern /* Subroutine */ int zmvch_(
+      char *, integer *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, doublereal *, doublecomplex *, doublereal *,
+      doublereal *, logical *, integer *, logical *, ftnlen);
+  char uplos[1];
+  logical banded, packed;
+  extern /* Subroutine */ void czhbmv_(
+      integer *, char *, integer *, integer *, doublecomplex *, doublecomplex *,
+      integer *, doublecomplex *, integer *, doublecomplex *, doublecomplex *,
+      integer *),
+      czhemv_(integer *, char *, integer *, doublecomplex *, doublecomplex *,
+              integer *, doublecomplex *, integer *, doublecomplex *,
+              doublecomplex *, integer *);
+  doublereal errmax;
+  doublecomplex transl;
+  extern logical lzeres_(char *, char *, integer *, integer *, doublecomplex *,
+                         doublecomplex *, integer *, ftnlen, ftnlen);
+  extern /* Subroutine */ void czhpmv_(
+      integer *, char *, integer *, doublecomplex *, doublecomplex *,
+      doublecomplex *, integer *, doublecomplex *, doublecomplex *, integer *);
+
+  /* Fortran I/O blocks */
+  static cilist io___195 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___196 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___197 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___198 = {0, 0, 0, fmt_9992, 0};
+  static cilist io___201 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___203 = {0, 0, 0, fmt_9999, 0};
+  static cilist io___204 = {0, 0, 0, fmt_9997, 0};
+  static cilist io___205 = {0, 0, 0, fmt_9996, 0};
+  static cilist io___206 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___207 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___208 = {0, 0, 0, fmt_9995, 0};
+
+  /*  Tests CHEMV, CHBMV and CHPMV. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
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
+  --kb;
+  --alf;
+  --bet;
+  --inc;
+  --g;
+  --yt;
+  --y;
+  --x;
+  --as;
+  --aa;
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+  --ys;
+  --yy;
+  --xs;
+  --xx;
+
+  /* Function Body */
+  /*     .. Executable Statements .. */
+  full = *(unsigned char *)&sname[8] == 'e';
+  banded = *(unsigned char *)&sname[8] == 'b';
+  packed = *(unsigned char *)&sname[8] == 'p';
+  /*     Define the number of arguments. */
+  if (full) {
+    nargs = 10;
+  } else if (banded) {
+    nargs = 11;
+  } else if (packed) {
+    nargs = 9;
+  }
+
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.;
+
+  i__1 = *nidim;
+  for (in = 1; in <= i__1; ++in) {
+    n = idim[in];
+
+    if (banded) {
+      nk = *nkb;
+    } else {
+      nk = 1;
+    }
+    i__2 = nk;
+    for (ik = 1; ik <= i__2; ++ik) {
+      if (banded) {
+        k = kb[ik];
+      } else {
+        k = n - 1;
+      }
+      /*           Set LDA to 1 more than minimum value if room. */
+      if (banded) {
+        lda = k + 1;
+      } else {
+        lda = n;
+      }
+      if (lda < *nmax) {
+        ++lda;
+      }
+      /*           Skip tests if not enough room. */
+      if (lda > *nmax) {
+        goto L100;
+      }
+      if (packed) {
+        laa = n * (n + 1) / 2;
+      } else {
+        laa = lda * n;
+      }
+      null = n <= 0;
+
+      for (ic = 1; ic <= 2; ++ic) {
+        *(unsigned char *)uplo = *(unsigned char *)&ich[ic - 1];
+        if (*(unsigned char *)uplo == 'U') {
+          s_copy(cuplo, "    CblasUpper", (ftnlen)14, (ftnlen)14);
+        } else {
+          s_copy(cuplo, "    CblasLower", (ftnlen)14, (ftnlen)14);
+        }
+
+        /*              Generate the matrix A. */
+
+        transl.r = 0., transl.i = 0.;
+        zmake_(sname + 7, uplo, " ", &n, &n, &a[a_offset], nmax, &aa[1], &lda,
+               &k, &k, &reset, &transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+
+        i__3 = *ninc;
+        for (ix = 1; ix <= i__3; ++ix) {
+          incx = inc[ix];
+          lx = abs(incx) * n;
+
+          /*                 Generate the vector X. */
+
+          transl.r = .5, transl.i = 0.;
+          i__4 = abs(incx);
+          i__5 = n - 1;
+          zmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &xx[1], &i__4, &c__0,
+                 &i__5, &reset, &transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+          if (n > 1) {
+            i__4 = n / 2;
+            x[i__4].r = 0., x[i__4].i = 0.;
+            i__4 = abs(incx) * (n / 2 - 1) + 1;
+            xx[i__4].r = 0., xx[i__4].i = 0.;
+          }
+
+          i__4 = *ninc;
+          for (iy = 1; iy <= i__4; ++iy) {
+            incy = inc[iy];
+            ly = abs(incy) * n;
+
+            i__5 = *nalf;
+            for (ia = 1; ia <= i__5; ++ia) {
+              i__6 = ia;
+              alpha.r = alf[i__6].r, alpha.i = alf[i__6].i;
+
+              i__6 = *nbet;
+              for (ib = 1; ib <= i__6; ++ib) {
+                i__7 = ib;
+                beta.r = bet[i__7].r, beta.i = bet[i__7].i;
+
+                /*                          Generate the vector Y. */
+
+                transl.r = 0., transl.i = 0.;
+                i__7 = abs(incy);
+                i__8 = n - 1;
+                zmake_("ge", " ", " ", &c__1, &n, &y[1], &c__1, &yy[1], &i__7,
+                       &c__0, &i__8, &reset, &transl, (ftnlen)2, (ftnlen)1,
+                       (ftnlen)1);
+
+                ++nc;
+
+                /*                          Save every datum before calling the
+                 */
+                /*                          subroutine. */
+
+                *(unsigned char *)uplos = *(unsigned char *)uplo;
+                ns = n;
+                ks = k;
+                als.r = alpha.r, als.i = alpha.i;
+                i__7 = laa;
+                for (i__ = 1; i__ <= i__7; ++i__) {
+                  i__8 = i__;
+                  i__9 = i__;
+                  as[i__8].r = aa[i__9].r, as[i__8].i = aa[i__9].i;
+                  /* L10: */
+                }
+                ldas = lda;
+                i__7 = lx;
+                for (i__ = 1; i__ <= i__7; ++i__) {
+                  i__8 = i__;
+                  i__9 = i__;
+                  xs[i__8].r = xx[i__9].r, xs[i__8].i = xx[i__9].i;
+                  /* L20: */
+                }
+                incxs = incx;
+                bls.r = beta.r, bls.i = beta.i;
+                i__7 = ly;
+                for (i__ = 1; i__ <= i__7; ++i__) {
+                  i__8 = i__;
+                  i__9 = i__;
+                  ys[i__8].r = yy[i__9].r, ys[i__8].i = yy[i__9].i;
+                  /* L30: */
+                }
+                incys = incy;
+
+                /*                          Call the subroutine. */
+
+                if (full) {
+                  if (*trace) {
+                    io___195.ciunit = *ntra;
+                    s_wsfe(&io___195);
+                    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, sname, (ftnlen)12);
+                    do_fio(&c__1, cuplo, (ftnlen)14);
+                    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+                    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                    do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(doublereal));
+                    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  czhemv_(iorder, uplo, &n, &alpha, &aa[1], &lda, &xx[1], &incx,
+                          &beta, &yy[1], &incy);
+                } else if (banded) {
+                  if (*trace) {
+                    io___196.ciunit = *ntra;
+                    s_wsfe(&io___196);
+                    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, sname, (ftnlen)12);
+                    do_fio(&c__1, cuplo, (ftnlen)14);
+                    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
+                    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+                    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                    do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(doublereal));
+                    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  czhbmv_(iorder, uplo, &n, &k, &alpha, &aa[1], &lda, &xx[1],
+                          &incx, &beta, &yy[1], &incy);
+                } else if (packed) {
+                  if (*trace) {
+                    io___197.ciunit = *ntra;
+                    s_wsfe(&io___197);
+                    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, sname, (ftnlen)12);
+                    do_fio(&c__1, cuplo, (ftnlen)14);
+                    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+                    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                    do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(doublereal));
+                    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  czhpmv_(iorder, uplo, &n, &alpha, &aa[1], &xx[1], &incx,
+                          &beta, &yy[1], &incy);
+                }
+
+                /*                          Check if error-exit was taken
+                 * incorrectly. */
+
+                if (!infoc_1.ok) {
+                  io___198.ciunit = *nout;
+                  s_wsfe(&io___198);
+                  e_wsfe();
+                  *fatal = TRUE_;
+                  goto L120;
+                }
+
+                /*                          See what data changed inside
+                 * subroutines. */
+
+                isame[0] = *(unsigned char *)uplo == *(unsigned char *)uplos;
+                isame[1] = ns == n;
+                if (full) {
+                  isame[2] = als.r == alpha.r && als.i == alpha.i;
+                  isame[3] = lze_(&as[1], &aa[1], &laa);
+                  isame[4] = ldas == lda;
+                  isame[5] = lze_(&xs[1], &xx[1], &lx);
+                  isame[6] = incxs == incx;
+                  isame[7] = bls.r == beta.r && bls.i == beta.i;
+                  if (null) {
+                    isame[8] = lze_(&ys[1], &yy[1], &ly);
+                  } else {
+                    i__7 = abs(incy);
+                    isame[8] = lzeres_("ge", " ", &c__1, &n, &ys[1], &yy[1],
+                                       &i__7, (ftnlen)2, (ftnlen)1);
+                  }
+                  isame[9] = incys == incy;
+                } else if (banded) {
+                  isame[2] = ks == k;
+                  isame[3] = als.r == alpha.r && als.i == alpha.i;
+                  isame[4] = lze_(&as[1], &aa[1], &laa);
+                  isame[5] = ldas == lda;
+                  isame[6] = lze_(&xs[1], &xx[1], &lx);
+                  isame[7] = incxs == incx;
+                  isame[8] = bls.r == beta.r && bls.i == beta.i;
+                  if (null) {
+                    isame[9] = lze_(&ys[1], &yy[1], &ly);
+                  } else {
+                    i__7 = abs(incy);
+                    isame[9] = lzeres_("ge", " ", &c__1, &n, &ys[1], &yy[1],
+                                       &i__7, (ftnlen)2, (ftnlen)1);
+                  }
+                  isame[10] = incys == incy;
+                } else if (packed) {
+                  isame[2] = als.r == alpha.r && als.i == alpha.i;
+                  isame[3] = lze_(&as[1], &aa[1], &laa);
+                  isame[4] = lze_(&xs[1], &xx[1], &lx);
+                  isame[5] = incxs == incx;
+                  isame[6] = bls.r == beta.r && bls.i == beta.i;
+                  if (null) {
+                    isame[7] = lze_(&ys[1], &yy[1], &ly);
+                  } else {
+                    i__7 = abs(incy);
+                    isame[7] = lzeres_("ge", " ", &c__1, &n, &ys[1], &yy[1],
+                                       &i__7, (ftnlen)2, (ftnlen)1);
+                  }
+                  isame[8] = incys == incy;
+                }
+
+                /*                          If data was incorrectly changed,
+                 * report and */
+                /*                          return. */
+
+                same = TRUE_;
+                i__7 = nargs;
+                for (i__ = 1; i__ <= i__7; ++i__) {
+                  same = same && isame[i__ - 1];
+                  if (!isame[i__ - 1]) {
+                    io___201.ciunit = *nout;
+                    s_wsfe(&io___201);
+                    do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
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
+                  zmvch_("N", &n, &n, &alpha, &a[a_offset], nmax, &x[1], &incx,
+                         &beta, &y[1], &incy, &yt[1], &g[1], &yy[1], eps, &err,
+                         fatal, nout, &c_true, (ftnlen)1);
+                  errmax = max(errmax, err);
+                  /*                             If got really bad answer,
+                   * report and */
+                  /*                             return. */
+                  if (*fatal) {
+                    goto L120;
+                  }
+                } else {
+                  /*                             Avoid repeating tests with
+                   * N.le.0 */
+                  goto L110;
+                }
+
+                /* L50: */
+              }
+
+              /* L60: */
+            }
+
+            /* L70: */
+          }
+
+          /* L80: */
+        }
+
+        /* L90: */
+      }
+
+    L100:;
+    }
+
+  L110:;
+  }
+
+  /*     Report result. */
+
+  if (errmax < *thresh) {
+    io___203.ciunit = *nout;
+    s_wsfe(&io___203);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else {
+    io___204.ciunit = *nout;
+    s_wsfe(&io___204);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
+    e_wsfe();
+  }
+  goto L130;
+
+L120:
+  io___205.ciunit = *nout;
+  s_wsfe(&io___205);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  if (full) {
+    io___206.ciunit = *nout;
+    s_wsfe(&io___206);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, cuplo, (ftnlen)14);
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else if (banded) {
+    io___207.ciunit = *nout;
+    s_wsfe(&io___207);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, cuplo, (ftnlen)14);
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else if (packed) {
+    io___208.ciunit = *nout;
+    s_wsfe(&io___208);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, cuplo, (ftnlen)14);
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&beta, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+    e_wsfe();
+  }
+
+L130:
+  return 0;
+
+  /*     End of CZHK2. */
+
+} /* zchk2_ */
+
+/* Subroutine */ int
+zchk3_(char *sname, doublereal *eps, doublereal *thresh, integer *nout,
+       integer *ntra, logical *trace, logical *rewi, logical *fatal,
+       integer *nidim, integer *idim, integer *nkb, integer *kb, integer *ninc,
+       integer *inc, integer *nmax, integer *incmax, doublecomplex *a,
+       doublecomplex *aa, doublecomplex *as, doublecomplex *x,
+       doublecomplex *xx, doublecomplex *xs, doublecomplex *xt, doublereal *g,
+       doublecomplex *z__, integer *iorder, ftnlen sname_len) {
+  /* Initialized data */
+
+  static char ichu[2] = "UL";
+  static char icht[3] = "NTC";
+  static char ichd[2] = "UN";
+
+  /* Format strings */
+  static char fmt_9993[] =
+      "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
+      "\002),/10x,i3,\002, A,\002,i3,\002, X,\002,i2,\002) .\002)";
+  static char fmt_9994[] =
+      "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
+      "\002),/10x,2(i3,\002,\002),\002 A,\002,i3,\002, X,\002,i2,\002) ."
+      "\002)";
+  static char fmt_9995[] =
+      "(1x,i6,\002: \002,a12,\002(\002,3(a14,\002,"
+      "\002),/10x,i3,\002, AP, \002,\002X,\002,i2,\002) .\002)";
+  static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
+                           "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_9997[] =
+      "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
+      "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
+      " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
+  alist al__1;
+
+  /* Builtin functions */
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+  integer s_cmp(char *, char *, ftnlen, ftnlen), s_wsfe(cilist *),
+      do_fio(integer *, char *, ftnlen), e_wsfe(void), f_rew(alist *);
+
+  /* Local variables */
+  integer i__, k, n, nc, ik, in, nk, ks, ix, ns, lx, laa, icd, lda, ict, icu;
+  doublereal err;
+  extern logical lze_(doublecomplex *, doublecomplex *, integer *);
+  char diag[1];
+  integer ldas;
+  logical same;
+  integer incx;
+  logical full, null;
+  char uplo[1], cdiag[14], diags[1];
+  logical isame[13];
+  extern /* Subroutine */ int zmake_(
+      char *, char *, char *, integer *, integer *, doublecomplex *, integer *,
+      doublecomplex *, integer *, integer *, integer *, logical *,
+      doublecomplex *, ftnlen, ftnlen, ftnlen);
+  integer nargs;
+  logical reset;
+  char cuplo[14];
+  integer incxs;
+  char trans[1];
+  extern /* Subroutine */ int zmvch_(
+      char *, integer *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, doublereal *, doublecomplex *, doublereal *,
+      doublereal *, logical *, integer *, logical *, ftnlen);
+  char uplos[1];
+  logical banded, packed;
+  char ctrans[14];
+  doublereal errmax;
+  doublecomplex transl;
+  extern logical lzeres_(char *, char *, integer *, integer *, doublecomplex *,
+                         doublecomplex *, integer *, ftnlen, ftnlen);
+  extern /* Subroutine */ void cztbmv_(
+      integer *, char *, char *, char *, integer *, integer *, doublecomplex *,
+      integer *, doublecomplex *, integer *);
+  char transs[1];
+  extern /* Subroutine */ void cztbsv_(
+      integer *, char *, char *, char *, integer *, integer *, doublecomplex *,
+      integer *, doublecomplex *, integer *),
+      cztpmv_(integer *, char *, char *, char *, integer *, doublecomplex *,
+              doublecomplex *, integer *),
+      cztrmv_(integer *, char *, char *, char *, integer *, doublecomplex *,
+              integer *, doublecomplex *, integer *),
+      cztpsv_(integer *, char *, char *, char *, integer *, doublecomplex *,
+              doublecomplex *, integer *),
+      cztrsv_(integer *, char *, char *, char *, integer *, doublecomplex *,
+              integer *, doublecomplex *, integer *);
+
+  /* Fortran I/O blocks */
+  static cilist io___248 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___249 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___250 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___251 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___252 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___253 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___254 = {0, 0, 0, fmt_9992, 0};
+  static cilist io___257 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___259 = {0, 0, 0, fmt_9999, 0};
+  static cilist io___260 = {0, 0, 0, fmt_9997, 0};
+  static cilist io___261 = {0, 0, 0, fmt_9996, 0};
+  static cilist io___262 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___263 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___264 = {0, 0, 0, fmt_9995, 0};
+
+  /*  Tests ZTRMV, ZTBMV, ZTPMV, ZTRSV, ZTBSV and ZTPSV. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
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
+  --kb;
+  --inc;
+  --z__;
+  --g;
+  --xt;
+  --x;
+  --as;
+  --aa;
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+  --xs;
+  --xx;
+
+  /* Function Body */
+  /*     .. Executable Statements .. */
+  full = *(unsigned char *)&sname[8] == 'r';
+  banded = *(unsigned char *)&sname[8] == 'b';
+  packed = *(unsigned char *)&sname[8] == 'p';
+  /*     Define the number of arguments. */
+  if (full) {
+    nargs = 8;
+  } else if (banded) {
+    nargs = 9;
+  } else if (packed) {
+    nargs = 7;
+  }
+
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.;
+  /*     Set up zero vector for ZMVCH. */
+  i__1 = *nmax;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    i__2 = i__;
+    z__[i__2].r = 0., z__[i__2].i = 0.;
+    /* L10: */
+  }
+
+  i__1 = *nidim;
+  for (in = 1; in <= i__1; ++in) {
+    n = idim[in];
+
+    if (banded) {
+      nk = *nkb;
+    } else {
+      nk = 1;
+    }
+    i__2 = nk;
+    for (ik = 1; ik <= i__2; ++ik) {
+      if (banded) {
+        k = kb[ik];
+      } else {
+        k = n - 1;
+      }
+      /*           Set LDA to 1 more than minimum value if room. */
+      if (banded) {
+        lda = k + 1;
+      } else {
+        lda = n;
+      }
+      if (lda < *nmax) {
+        ++lda;
+      }
+      /*           Skip tests if not enough room. */
+      if (lda > *nmax) {
+        goto L100;
+      }
+      if (packed) {
+        laa = n * (n + 1) / 2;
+      } else {
+        laa = lda * n;
+      }
+      null = n <= 0;
+
+      for (icu = 1; icu <= 2; ++icu) {
+        *(unsigned char *)uplo = *(unsigned char *)&ichu[icu - 1];
+        if (*(unsigned char *)uplo == 'U') {
+          s_copy(cuplo, "    CblasUpper", (ftnlen)14, (ftnlen)14);
+        } else {
+          s_copy(cuplo, "    CblasLower", (ftnlen)14, (ftnlen)14);
+        }
+
+        for (ict = 1; ict <= 3; ++ict) {
+          *(unsigned char *)trans = *(unsigned char *)&icht[ict - 1];
+          if (*(unsigned char *)trans == 'N') {
+            s_copy(ctrans, "  CblasNoTrans", (ftnlen)14, (ftnlen)14);
+          } else if (*(unsigned char *)trans == 'T') {
+            s_copy(ctrans, "    CblasTrans", (ftnlen)14, (ftnlen)14);
+          } else {
+            s_copy(ctrans, "CblasConjTrans", (ftnlen)14, (ftnlen)14);
+          }
+
+          for (icd = 1; icd <= 2; ++icd) {
+            *(unsigned char *)diag = *(unsigned char *)&ichd[icd - 1];
+            if (*(unsigned char *)diag == 'N') {
+              s_copy(cdiag, "  CblasNonUnit", (ftnlen)14, (ftnlen)14);
+            } else {
+              s_copy(cdiag, "     CblasUnit", (ftnlen)14, (ftnlen)14);
+            }
+
+            /*                    Generate the matrix A. */
+
+            transl.r = 0., transl.i = 0.;
+            zmake_(sname + 7, uplo, diag, &n, &n, &a[a_offset], nmax, &aa[1],
+                   &lda, &k, &k, &reset, &transl, (ftnlen)2, (ftnlen)1,
+                   (ftnlen)1);
+
+            i__3 = *ninc;
+            for (ix = 1; ix <= i__3; ++ix) {
+              incx = inc[ix];
+              lx = abs(incx) * n;
+
+              /*                       Generate the vector X. */
+
+              transl.r = .5, transl.i = 0.;
+              i__4 = abs(incx);
+              i__5 = n - 1;
+              zmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &xx[1], &i__4,
+                     &c__0, &i__5, &reset, &transl, (ftnlen)2, (ftnlen)1,
+                     (ftnlen)1);
+              if (n > 1) {
+                i__4 = n / 2;
+                x[i__4].r = 0., x[i__4].i = 0.;
+                i__4 = abs(incx) * (n / 2 - 1) + 1;
+                xx[i__4].r = 0., xx[i__4].i = 0.;
+              }
+
+              ++nc;
+
+              /*                       Save every datum before calling the
+               * subroutine. */
+
+              *(unsigned char *)uplos = *(unsigned char *)uplo;
+              *(unsigned char *)transs = *(unsigned char *)trans;
+              *(unsigned char *)diags = *(unsigned char *)diag;
+              ns = n;
+              ks = k;
+              i__4 = laa;
+              for (i__ = 1; i__ <= i__4; ++i__) {
+                i__5 = i__;
+                i__6 = i__;
+                as[i__5].r = aa[i__6].r, as[i__5].i = aa[i__6].i;
+                /* L20: */
+              }
+              ldas = lda;
+              i__4 = lx;
+              for (i__ = 1; i__ <= i__4; ++i__) {
+                i__5 = i__;
+                i__6 = i__;
+                xs[i__5].r = xx[i__6].r, xs[i__5].i = xx[i__6].i;
+                /* L30: */
+              }
+              incxs = incx;
+
+              /*                       Call the subroutine. */
+
+              if (s_cmp(sname + 3, "mv", (ftnlen)2, (ftnlen)2) == 0) {
+                if (full) {
+                  if (*trace) {
+                    io___248.ciunit = *ntra;
+                    s_wsfe(&io___248);
+                    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, sname, (ftnlen)12);
+                    do_fio(&c__1, cuplo, (ftnlen)14);
+                    do_fio(&c__1, ctrans, (ftnlen)14);
+                    do_fio(&c__1, cdiag, (ftnlen)14);
+                    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  cztrmv_(iorder, uplo, trans, diag, &n, &aa[1], &lda, &xx[1],
+                          &incx);
+                } else if (banded) {
+                  if (*trace) {
+                    io___249.ciunit = *ntra;
+                    s_wsfe(&io___249);
+                    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, sname, (ftnlen)12);
+                    do_fio(&c__1, cuplo, (ftnlen)14);
+                    do_fio(&c__1, ctrans, (ftnlen)14);
+                    do_fio(&c__1, cdiag, (ftnlen)14);
+                    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  cztbmv_(iorder, uplo, trans, diag, &n, &k, &aa[1], &lda,
+                          &xx[1], &incx);
+                } else if (packed) {
+                  if (*trace) {
+                    io___250.ciunit = *ntra;
+                    s_wsfe(&io___250);
+                    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, sname, (ftnlen)12);
+                    do_fio(&c__1, cuplo, (ftnlen)14);
+                    do_fio(&c__1, ctrans, (ftnlen)14);
+                    do_fio(&c__1, cdiag, (ftnlen)14);
+                    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  cztpmv_(iorder, uplo, trans, diag, &n, &aa[1], &xx[1], &incx);
+                }
+              } else if (s_cmp(sname + 3, "sv", (ftnlen)2, (ftnlen)2) == 0) {
+                if (full) {
+                  if (*trace) {
+                    io___251.ciunit = *ntra;
+                    s_wsfe(&io___251);
+                    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, sname, (ftnlen)12);
+                    do_fio(&c__1, cuplo, (ftnlen)14);
+                    do_fio(&c__1, ctrans, (ftnlen)14);
+                    do_fio(&c__1, cdiag, (ftnlen)14);
+                    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  cztrsv_(iorder, uplo, trans, diag, &n, &aa[1], &lda, &xx[1],
+                          &incx);
+                } else if (banded) {
+                  if (*trace) {
+                    io___252.ciunit = *ntra;
+                    s_wsfe(&io___252);
+                    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, sname, (ftnlen)12);
+                    do_fio(&c__1, cuplo, (ftnlen)14);
+                    do_fio(&c__1, ctrans, (ftnlen)14);
+                    do_fio(&c__1, cdiag, (ftnlen)14);
+                    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  cztbsv_(iorder, uplo, trans, diag, &n, &k, &aa[1], &lda,
+                          &xx[1], &incx);
+                } else if (packed) {
+                  if (*trace) {
+                    io___253.ciunit = *ntra;
+                    s_wsfe(&io___253);
+                    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, sname, (ftnlen)12);
+                    do_fio(&c__1, cuplo, (ftnlen)14);
+                    do_fio(&c__1, ctrans, (ftnlen)14);
+                    do_fio(&c__1, cdiag, (ftnlen)14);
+                    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                    e_wsfe();
+                  }
+                  if (*rewi) {
+                    al__1.aerr = 0;
+                    al__1.aunit = *ntra;
+                    f_rew(&al__1);
+                  }
+                  cztpsv_(iorder, uplo, trans, diag, &n, &aa[1], &xx[1], &incx);
+                }
+              }
+
+              /*                       Check if error-exit was taken
+               * incorrectly. */
+
+              if (!infoc_1.ok) {
+                io___254.ciunit = *nout;
+                s_wsfe(&io___254);
+                e_wsfe();
+                *fatal = TRUE_;
+                goto L120;
+              }
+
+              /*                       See what data changed inside subroutines.
+               */
+
+              isame[0] = *(unsigned char *)uplo == *(unsigned char *)uplos;
+              isame[1] = *(unsigned char *)trans == *(unsigned char *)transs;
+              isame[2] = *(unsigned char *)diag == *(unsigned char *)diags;
+              isame[3] = ns == n;
+              if (full) {
+                isame[4] = lze_(&as[1], &aa[1], &laa);
+                isame[5] = ldas == lda;
+                if (null) {
+                  isame[6] = lze_(&xs[1], &xx[1], &lx);
+                } else {
+                  i__4 = abs(incx);
+                  isame[6] = lzeres_("ge", " ", &c__1, &n, &xs[1], &xx[1],
+                                     &i__4, (ftnlen)2, (ftnlen)1);
+                }
+                isame[7] = incxs == incx;
+              } else if (banded) {
+                isame[4] = ks == k;
+                isame[5] = lze_(&as[1], &aa[1], &laa);
+                isame[6] = ldas == lda;
+                if (null) {
+                  isame[7] = lze_(&xs[1], &xx[1], &lx);
+                } else {
+                  i__4 = abs(incx);
+                  isame[7] = lzeres_("ge", " ", &c__1, &n, &xs[1], &xx[1],
+                                     &i__4, (ftnlen)2, (ftnlen)1);
+                }
+                isame[8] = incxs == incx;
+              } else if (packed) {
+                isame[4] = lze_(&as[1], &aa[1], &laa);
+                if (null) {
+                  isame[5] = lze_(&xs[1], &xx[1], &lx);
+                } else {
+                  i__4 = abs(incx);
+                  isame[5] = lzeres_("ge", " ", &c__1, &n, &xs[1], &xx[1],
+                                     &i__4, (ftnlen)2, (ftnlen)1);
+                }
+                isame[6] = incxs == incx;
+              }
+
+              /*                       If data was incorrectly changed, report
+               * and */
+              /*                       return. */
+
+              same = TRUE_;
+              i__4 = nargs;
+              for (i__ = 1; i__ <= i__4; ++i__) {
+                same = same && isame[i__ - 1];
+                if (!isame[i__ - 1]) {
+                  io___257.ciunit = *nout;
+                  s_wsfe(&io___257);
+                  do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
+                  e_wsfe();
+                }
+                /* L40: */
+              }
+              if (!same) {
+                *fatal = TRUE_;
+                goto L120;
+              }
+
+              if (!null) {
+                if (s_cmp(sname + 3, "mv", (ftnlen)2, (ftnlen)2) == 0) {
+
+                  /*                             Check the result. */
+
+                  zmvch_(trans, &n, &n, &c_b2, &a[a_offset], nmax, &x[1], &incx,
+                         &c_b1, &z__[1], &incx, &xt[1], &g[1], &xx[1], eps,
+                         &err, fatal, nout, &c_true, (ftnlen)1);
+                } else if (s_cmp(sname + 3, "sv", (ftnlen)2, (ftnlen)2) == 0) {
+
+                  /*                             Compute approximation to
+                   * original vector. */
+
+                  i__4 = n;
+                  for (i__ = 1; i__ <= i__4; ++i__) {
+                    i__5 = i__;
+                    i__6 = (i__ - 1) * abs(incx) + 1;
+                    z__[i__5].r = xx[i__6].r, z__[i__5].i = xx[i__6].i;
+                    i__5 = (i__ - 1) * abs(incx) + 1;
+                    i__6 = i__;
+                    xx[i__5].r = x[i__6].r, xx[i__5].i = x[i__6].i;
+                    /* L50: */
+                  }
+                  zmvch_(trans, &n, &n, &c_b2, &a[a_offset], nmax, &z__[1],
+                         &incx, &c_b1, &x[1], &incx, &xt[1], &g[1], &xx[1], eps,
+                         &err, fatal, nout, &c_false, (ftnlen)1);
+                }
+                errmax = max(errmax, err);
+                /*                          If got really bad answer, report and
+                 * return. */
+                if (*fatal) {
+                  goto L120;
+                }
+              } else {
+                /*                          Avoid repeating tests with N.le.0.
+                 */
+                goto L110;
+              }
+
+              /* L60: */
+            }
+
+            /* L70: */
+          }
+
+          /* L80: */
+        }
+
+        /* L90: */
+      }
+
+    L100:;
+    }
+
+  L110:;
+  }
+
+  /*     Report result. */
+
+  if (errmax < *thresh) {
+    io___259.ciunit = *nout;
+    s_wsfe(&io___259);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else {
+    io___260.ciunit = *nout;
+    s_wsfe(&io___260);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
+    e_wsfe();
+  }
+  goto L130;
+
+L120:
+  io___261.ciunit = *nout;
+  s_wsfe(&io___261);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  if (full) {
+    io___262.ciunit = *nout;
+    s_wsfe(&io___262);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, cuplo, (ftnlen)14);
+    do_fio(&c__1, ctrans, (ftnlen)14);
+    do_fio(&c__1, cdiag, (ftnlen)14);
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else if (banded) {
+    io___263.ciunit = *nout;
+    s_wsfe(&io___263);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, cuplo, (ftnlen)14);
+    do_fio(&c__1, ctrans, (ftnlen)14);
+    do_fio(&c__1, cdiag, (ftnlen)14);
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else if (packed) {
+    io___264.ciunit = *nout;
+    s_wsfe(&io___264);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, cuplo, (ftnlen)14);
+    do_fio(&c__1, ctrans, (ftnlen)14);
+    do_fio(&c__1, cdiag, (ftnlen)14);
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    e_wsfe();
+  }
+
+L130:
+  return 0;
+
+  /*     End of ZCHK3. */
+
+} /* zchk3_ */
+
+/* Subroutine */ int
+zchk4_(char *sname, doublereal *eps, doublereal *thresh, integer *nout,
+       integer *ntra, logical *trace, logical *rewi, logical *fatal,
+       integer *nidim, integer *idim, integer *nalf, doublecomplex *alf,
+       integer *ninc, integer *inc, integer *nmax, integer *incmax,
+       doublecomplex *a, doublecomplex *aa, doublecomplex *as, doublecomplex *x,
+       doublecomplex *xx, doublecomplex *xs, doublecomplex *y,
+       doublecomplex *yy, doublecomplex *ys, doublecomplex *yt, doublereal *g,
+       doublecomplex *z__, integer *iorder, ftnlen sname_len) {
+  /* Format strings */
+  static char fmt_9994[] =
+      "(1x,i6,\002: \002,a12,\002(\002,2(i3,\002,\002"
+      "),\002(\002,f4.1,\002,\002,f4.1,\002), X,\002,i2,\002, Y,\002,i2,"
+      "\002, A,\002,i3,\002) .\002)";
+  static char fmt_9993[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
+                           "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_9997[] =
+      "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
+      "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
+      " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
+  static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
+                           " \002,i3)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6, i__7;
+  doublecomplex z__1;
+  alist al__1;
+
+  /* Builtin functions */
+  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
+      f_rew(alist *);
+  void d_cnjg(doublecomplex *, doublecomplex *);
+
+  /* Local variables */
+  integer i__, j, m, n;
+  doublecomplex w[1];
+  integer ia, nc, nd, im, in, ms, ix, iy, ns, lx, ly, laa, lda;
+  doublecomplex als;
+  doublereal err;
+  extern logical lze_(doublecomplex *, doublecomplex *, integer *);
+  integer ldas;
+  logical same, conj;
+  integer incx, incy;
+  logical null;
+  doublecomplex alpha;
+  logical isame[13];
+  extern /* Subroutine */ int zmake_(
+      char *, char *, char *, integer *, integer *, doublecomplex *, integer *,
+      doublecomplex *, integer *, integer *, integer *, logical *,
+      doublecomplex *, ftnlen, ftnlen, ftnlen);
+  integer nargs;
+  logical reset;
+  integer incxs, incys;
+  extern /* Subroutine */ int zmvch_(
+      char *, integer *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, doublereal *, doublecomplex *, doublereal *,
+      doublereal *, logical *, integer *, logical *, ftnlen);
+      
+  extern void czgerc_(integer *, integer *, integer *, doublecomplex *, doublecomplex *,
+                      integer *, doublecomplex *, integer *, doublecomplex *,
+                      integer *);
+  doublereal errmax;
+  extern /* Subroutine */ void czgeru_(
+      integer *, integer *, integer *, doublecomplex *, doublecomplex *,
+      integer *, doublecomplex *, integer *, doublecomplex *, integer *);
+  doublecomplex transl;
+  extern logical lzeres_(char *, char *, integer *, integer *, doublecomplex *,
+                         doublecomplex *, integer *, ftnlen, ftnlen);
+
+  /* Fortran I/O blocks */
+  static cilist io___294 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___295 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___298 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___302 = {0, 0, 0, fmt_9999, 0};
+  static cilist io___303 = {0, 0, 0, fmt_9997, 0};
+  static cilist io___304 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___305 = {0, 0, 0, fmt_9996, 0};
+  static cilist io___306 = {0, 0, 0, fmt_9994, 0};
+
+  /*  Tests ZGERC and ZGERU. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
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
+  /*     .. Executable Statements .. */
+  /* Parameter adjustments */
+  --idim;
+  --alf;
+  --inc;
+  --z__;
+  --g;
+  --yt;
+  --y;
+  --x;
+  --as;
+  --aa;
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+  --ys;
+  --yy;
+  --xs;
+  --xx;
+
+  /* Function Body */
+  conj = *(unsigned char *)&sname[4] == 'c';
+  /*     Define the number of arguments. */
+  nargs = 9;
+
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.;
+
+  i__1 = *nidim;
+  for (in = 1; in <= i__1; ++in) {
+    n = idim[in];
+    nd = n / 2 + 1;
+
+    for (im = 1; im <= 2; ++im) {
+      if (im == 1) {
+        /* Computing MAX */
+        i__2 = n - nd;
+        m = max(i__2, 0);
+      }
+      if (im == 2) {
+        /* Computing MIN */
+        i__2 = n + nd;
+        m = min(i__2, *nmax);
+      }
+
+      /*           Set LDA to 1 more than minimum value if room. */
+      lda = m;
+      if (lda < *nmax) {
+        ++lda;
+      }
+      /*           Skip tests if not enough room. */
+      if (lda > *nmax) {
+        goto L110;
+      }
+      laa = lda * n;
+      null = n <= 0 || m <= 0;
+
+      i__2 = *ninc;
+      for (ix = 1; ix <= i__2; ++ix) {
+        incx = inc[ix];
+        lx = abs(incx) * m;
+
+        /*              Generate the vector X. */
+
+        transl.r = .5, transl.i = 0.;
+        i__3 = abs(incx);
+        i__4 = m - 1;
+        zmake_("ge", " ", " ", &c__1, &m, &x[1], &c__1, &xx[1], &i__3, &c__0,
+               &i__4, &reset, &transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+        if (m > 1) {
+          i__3 = m / 2;
+          x[i__3].r = 0., x[i__3].i = 0.;
+          i__3 = abs(incx) * (m / 2 - 1) + 1;
+          xx[i__3].r = 0., xx[i__3].i = 0.;
+        }
+
+        i__3 = *ninc;
+        for (iy = 1; iy <= i__3; ++iy) {
+          incy = inc[iy];
+          ly = abs(incy) * n;
+
+          /*                 Generate the vector Y. */
+
+          transl.r = 0., transl.i = 0.;
+          i__4 = abs(incy);
+          i__5 = n - 1;
+          zmake_("ge", " ", " ", &c__1, &n, &y[1], &c__1, &yy[1], &i__4, &c__0,
+                 &i__5, &reset, &transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+          if (n > 1) {
+            i__4 = n / 2;
+            y[i__4].r = 0., y[i__4].i = 0.;
+            i__4 = abs(incy) * (n / 2 - 1) + 1;
+            yy[i__4].r = 0., yy[i__4].i = 0.;
+          }
+
+          i__4 = *nalf;
+          for (ia = 1; ia <= i__4; ++ia) {
+            i__5 = ia;
+            alpha.r = alf[i__5].r, alpha.i = alf[i__5].i;
+
+            /*                    Generate the matrix A. */
+
+            transl.r = 0., transl.i = 0.;
+            i__5 = m - 1;
+            i__6 = n - 1;
+            zmake_(sname + 7, " ", " ", &m, &n, &a[a_offset], nmax, &aa[1],
+                   &lda, &i__5, &i__6, &reset, &transl, (ftnlen)2, (ftnlen)1,
+                   (ftnlen)1);
+
+            ++nc;
+
+            /*                    Save every datum before calling the
+             * subroutine. */
+
+            ms = m;
+            ns = n;
+            als.r = alpha.r, als.i = alpha.i;
+            i__5 = laa;
+            for (i__ = 1; i__ <= i__5; ++i__) {
+              i__6 = i__;
+              i__7 = i__;
+              as[i__6].r = aa[i__7].r, as[i__6].i = aa[i__7].i;
+              /* L10: */
+            }
+            ldas = lda;
+            i__5 = lx;
+            for (i__ = 1; i__ <= i__5; ++i__) {
+              i__6 = i__;
+              i__7 = i__;
+              xs[i__6].r = xx[i__7].r, xs[i__6].i = xx[i__7].i;
+              /* L20: */
+            }
+            incxs = incx;
+            i__5 = ly;
+            for (i__ = 1; i__ <= i__5; ++i__) {
+              i__6 = i__;
+              i__7 = i__;
+              ys[i__6].r = yy[i__7].r, ys[i__6].i = yy[i__7].i;
+              /* L30: */
+            }
+            incys = incy;
+
+            /*                    Call the subroutine. */
+
+            if (*trace) {
+              io___294.ciunit = *ntra;
+              s_wsfe(&io___294);
+              do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+              do_fio(&c__1, sname, (ftnlen)12);
+              do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
+              do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+              do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+              do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+              do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+              do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+              e_wsfe();
+            }
+            if (conj) {
+              if (*rewi) {
+                al__1.aerr = 0;
+                al__1.aunit = *ntra;
+                f_rew(&al__1);
+              }
+              czgerc_(iorder, &m, &n, &alpha, &xx[1], &incx, &yy[1], &incy,
+                      &aa[1], &lda);
+            } else {
+              if (*rewi) {
+                al__1.aerr = 0;
+                al__1.aunit = *ntra;
+                f_rew(&al__1);
+              }
+              czgeru_(iorder, &m, &n, &alpha, &xx[1], &incx, &yy[1], &incy,
+                      &aa[1], &lda);
+            }
+
+            /*                    Check if error-exit was taken incorrectly. */
+
+            if (!infoc_1.ok) {
+              io___295.ciunit = *nout;
+              s_wsfe(&io___295);
+              e_wsfe();
+              *fatal = TRUE_;
+              goto L140;
+            }
+
+            /*                    See what data changed inside subroutine. */
+
+            isame[0] = ms == m;
+            isame[1] = ns == n;
+            isame[2] = als.r == alpha.r && als.i == alpha.i;
+            isame[3] = lze_(&xs[1], &xx[1], &lx);
+            isame[4] = incxs == incx;
+            isame[5] = lze_(&ys[1], &yy[1], &ly);
+            isame[6] = incys == incy;
+            if (null) {
+              isame[7] = lze_(&as[1], &aa[1], &laa);
+            } else {
+              isame[7] = lzeres_("ge", " ", &m, &n, &as[1], &aa[1], &lda,
+                                 (ftnlen)2, (ftnlen)1);
+            }
+            isame[8] = ldas == lda;
+
+            /*                   If data was incorrectly changed, report and
+             * return. */
+
+            same = TRUE_;
+            i__5 = nargs;
+            for (i__ = 1; i__ <= i__5; ++i__) {
+              same = same && isame[i__ - 1];
+              if (!isame[i__ - 1]) {
+                io___298.ciunit = *nout;
+                s_wsfe(&io___298);
+                do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
+                e_wsfe();
+              }
+              /* L40: */
+            }
+            if (!same) {
+              *fatal = TRUE_;
+              goto L140;
+            }
+
+            if (!null) {
+
+              /*                       Check the result column by column. */
+
+              if (incx > 0) {
+                i__5 = m;
+                for (i__ = 1; i__ <= i__5; ++i__) {
+                  i__6 = i__;
+                  i__7 = i__;
+                  z__[i__6].r = x[i__7].r, z__[i__6].i = x[i__7].i;
+                  /* L50: */
+                }
+              } else {
+                i__5 = m;
+                for (i__ = 1; i__ <= i__5; ++i__) {
+                  i__6 = i__;
+                  i__7 = m - i__ + 1;
+                  z__[i__6].r = x[i__7].r, z__[i__6].i = x[i__7].i;
+                  /* L60: */
+                }
+              }
+              i__5 = n;
+              for (j = 1; j <= i__5; ++j) {
+                if (incy > 0) {
+                  i__6 = j;
+                  w[0].r = y[i__6].r, w[0].i = y[i__6].i;
+                } else {
+                  i__6 = n - j + 1;
+                  w[0].r = y[i__6].r, w[0].i = y[i__6].i;
+                }
+                if (conj) {
+                  d_cnjg(&z__1, w);
+                  w[0].r = z__1.r, w[0].i = z__1.i;
+                }
+                zmvch_("N", &m, &c__1, &alpha, &z__[1], nmax, w, &c__1, &c_b2,
+                       &a[j * a_dim1 + 1], &c__1, &yt[1], &g[1],
+                       &aa[(j - 1) * lda + 1], eps, &err, fatal, nout, &c_true,
+                       (ftnlen)1);
+                errmax = max(errmax, err);
+                /*                          If got really bad answer, report and
+                 * return. */
+                if (*fatal) {
+                  goto L130;
+                }
+                /* L70: */
+              }
+            } else {
+              /*                       Avoid repeating tests with M.le.0 or
+               * N.le.0. */
+              goto L110;
+            }
+
+            /* L80: */
+          }
+
+          /* L90: */
+        }
+
+        /* L100: */
+      }
+
+    L110:;
+    }
+
+    /* L120: */
+  }
+
+  /*     Report result. */
+
+  if (errmax < *thresh) {
+    io___302.ciunit = *nout;
+    s_wsfe(&io___302);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else {
+    io___303.ciunit = *nout;
+    s_wsfe(&io___303);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
+    e_wsfe();
+  }
+  goto L150;
+
+L130:
+  io___304.ciunit = *nout;
+  s_wsfe(&io___304);
+  do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
+  e_wsfe();
+
+L140:
+  io___305.ciunit = *nout;
+  s_wsfe(&io___305);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  io___306.ciunit = *nout;
+  s_wsfe(&io___306);
+  do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+  do_fio(&c__1, sname, (ftnlen)12);
+  do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+  do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+  do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+  do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+  e_wsfe();
+
+L150:
+  return 0;
+
+  /*     End of ZCHK4. */
+
+} /* zchk4_ */
+
+/* Subroutine */ int
+zchk5_(char *sname, doublereal *eps, doublereal *thresh, integer *nout,
+       integer *ntra, logical *trace, logical *rewi, logical *fatal,
+       integer *nidim, integer *idim, integer *nalf, doublecomplex *alf,
+       integer *ninc, integer *inc, integer *nmax, integer *incmax,
+       doublecomplex *a, doublecomplex *aa, doublecomplex *as, doublecomplex *x,
+       doublecomplex *xx, doublecomplex *xs, doublecomplex *y,
+       doublecomplex *yy, doublecomplex *ys, doublecomplex *yt, doublereal *g,
+       doublecomplex *z__, integer *iorder, ftnlen sname_len) {
+  /* Initialized data */
+
+  static char ich[2] = "UL";
+
+  /* Format strings */
+  static char fmt_9993[] =
+      "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+      "i3,\002,\002,f4.1,\002, X,\002,i2,\002, A,\002,i3,\002) .\002)";
+  static char fmt_9994[] = "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+                           "i3,\002,\002,f4.1,\002, X,\002,i2,\002, AP) .\002)";
+  static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
+                           "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_9997[] =
+      "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
+      "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
+      " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
+  static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
+                           " \002,i3)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
+  doublecomplex z__1;
+  alist al__1;
+
+  /* Builtin functions */
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
+      f_rew(alist *);
+  void d_cnjg(doublecomplex *, doublecomplex *);
+
+  /* Local variables */
+  integer i__, j, n;
+  doublecomplex w[1];
+  integer ia, ja, ic, nc, jj, lj, in, ix, ns, lx, laa, lda;
+  doublereal err;
+  extern logical lze_(doublecomplex *, doublecomplex *, integer *);
+  integer ldas;
+  logical same;
+  doublereal rals;
+  integer incx;
+  logical full, null;
+  char uplo[1];
+  doublecomplex alpha;
+  logical isame[13];
+  extern /* Subroutine */ int zmake_(
+      char *, char *, char *, integer *, integer *, doublecomplex *, integer *,
+      doublecomplex *, integer *, integer *, integer *, logical *,
+      doublecomplex *, ftnlen, ftnlen, ftnlen);
+  integer nargs;
+  extern /* Subroutine */ void czher_(integer *, char *, integer *, doublereal *,
+                                     doublecomplex *, integer *,
+                                     doublecomplex *, integer *);
+  logical reset;
+  char cuplo[14];
+  integer incxs;
+  extern /* Subroutine */ void czhpr_(integer *, char *, integer *, doublereal *,
+                                     doublecomplex *, integer *,
+                                     doublecomplex *);
+  extern int zmvch_(char *, integer *, integer *, doublecomplex *, doublecomplex *,
+                    integer *, doublecomplex *, integer *, doublecomplex *,
+                    doublecomplex *, integer *, doublecomplex *, doublereal *,
+                    doublecomplex *, doublereal *, doublereal *, logical *, integer *,
+                    logical *, ftnlen);
+  logical upper;
+  char uplos[1];
+  logical packed;
+  doublereal ralpha, errmax;
+  doublecomplex transl;
+  extern logical lzeres_(char *, char *, integer *, integer *, doublecomplex *,
+                         doublecomplex *, integer *, ftnlen, ftnlen);
+
+  /* Fortran I/O blocks */
+  static cilist io___336 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___337 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___338 = {0, 0, 0, fmt_9992, 0};
+  static cilist io___341 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___348 = {0, 0, 0, fmt_9999, 0};
+  static cilist io___349 = {0, 0, 0, fmt_9997, 0};
+  static cilist io___350 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___351 = {0, 0, 0, fmt_9996, 0};
+  static cilist io___352 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___353 = {0, 0, 0, fmt_9994, 0};
+
+  /*  Tests ZHER and ZHPR. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
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
+  --inc;
+  --z__;
+  --g;
+  --yt;
+  --y;
+  --x;
+  --as;
+  --aa;
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+  --ys;
+  --yy;
+  --xs;
+  --xx;
+
+  /* Function Body */
+  /*     .. Executable Statements .. */
+  full = *(unsigned char *)&sname[8] == 'e';
+  packed = *(unsigned char *)&sname[8] == 'p';
+  /*     Define the number of arguments. */
+  if (full) {
+    nargs = 7;
+  } else if (packed) {
+    nargs = 6;
+  }
+
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.;
+
+  i__1 = *nidim;
+  for (in = 1; in <= i__1; ++in) {
+    n = idim[in];
+    /*        Set LDA to 1 more than minimum value if room. */
+    lda = n;
+    if (lda < *nmax) {
+      ++lda;
+    }
+    /*        Skip tests if not enough room. */
+    if (lda > *nmax) {
+      goto L100;
+    }
+    if (packed) {
+      laa = n * (n + 1) / 2;
+    } else {
+      laa = lda * n;
+    }
+
+    for (ic = 1; ic <= 2; ++ic) {
+      *(unsigned char *)uplo = *(unsigned char *)&ich[ic - 1];
+      if (*(unsigned char *)uplo == 'U') {
+        s_copy(cuplo, "    CblasUpper", (ftnlen)14, (ftnlen)14);
+      } else {
+        s_copy(cuplo, "    CblasLower", (ftnlen)14, (ftnlen)14);
+      }
+      upper = *(unsigned char *)uplo == 'U';
+
+      i__2 = *ninc;
+      for (ix = 1; ix <= i__2; ++ix) {
+        incx = inc[ix];
+        lx = abs(incx) * n;
+
+        /*              Generate the vector X. */
+
+        transl.r = .5, transl.i = 0.;
+        i__3 = abs(incx);
+        i__4 = n - 1;
+        zmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &xx[1], &i__3, &c__0,
+               &i__4, &reset, &transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+        if (n > 1) {
+          i__3 = n / 2;
+          x[i__3].r = 0., x[i__3].i = 0.;
+          i__3 = abs(incx) * (n / 2 - 1) + 1;
+          xx[i__3].r = 0., xx[i__3].i = 0.;
+        }
+
+        i__3 = *nalf;
+        for (ia = 1; ia <= i__3; ++ia) {
+          i__4 = ia;
+          ralpha = alf[i__4].r;
+          z__1.r = ralpha, z__1.i = 0.;
+          alpha.r = z__1.r, alpha.i = z__1.i;
+          null = n <= 0 || ralpha == 0.;
+
+          /*                 Generate the matrix A. */
+
+          transl.r = 0., transl.i = 0.;
+          i__4 = n - 1;
+          i__5 = n - 1;
+          zmake_(sname + 7, uplo, " ", &n, &n, &a[a_offset], nmax, &aa[1], &lda,
+                 &i__4, &i__5, &reset, &transl, (ftnlen)2, (ftnlen)1,
+                 (ftnlen)1);
+
+          ++nc;
+
+          /*                 Save every datum before calling the subroutine. */
+
+          *(unsigned char *)uplos = *(unsigned char *)uplo;
+          ns = n;
+          rals = ralpha;
+          i__4 = laa;
+          for (i__ = 1; i__ <= i__4; ++i__) {
+            i__5 = i__;
+            i__6 = i__;
+            as[i__5].r = aa[i__6].r, as[i__5].i = aa[i__6].i;
+            /* L10: */
+          }
+          ldas = lda;
+          i__4 = lx;
+          for (i__ = 1; i__ <= i__4; ++i__) {
+            i__5 = i__;
+            i__6 = i__;
+            xs[i__5].r = xx[i__6].r, xs[i__5].i = xx[i__6].i;
+            /* L20: */
+          }
+          incxs = incx;
+
+          /*                 Call the subroutine. */
+
+          if (full) {
+            if (*trace) {
+              io___336.ciunit = *ntra;
+              s_wsfe(&io___336);
+              do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+              do_fio(&c__1, sname, (ftnlen)12);
+              do_fio(&c__1, cuplo, (ftnlen)14);
+              do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+              do_fio(&c__1, (char *)&ralpha, (ftnlen)sizeof(doublereal));
+              do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+              do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+              e_wsfe();
+            }
+            if (*rewi) {
+              al__1.aerr = 0;
+              al__1.aunit = *ntra;
+              f_rew(&al__1);
+            }
+            czher_(iorder, uplo, &n, &ralpha, &xx[1], &incx, &aa[1], &lda);
+          } else if (packed) {
+            if (*trace) {
+              io___337.ciunit = *ntra;
+              s_wsfe(&io___337);
+              do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+              do_fio(&c__1, sname, (ftnlen)12);
+              do_fio(&c__1, cuplo, (ftnlen)14);
+              do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+              do_fio(&c__1, (char *)&ralpha, (ftnlen)sizeof(doublereal));
+              do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+              e_wsfe();
+            }
+            if (*rewi) {
+              al__1.aerr = 0;
+              al__1.aunit = *ntra;
+              f_rew(&al__1);
+            }
+            czhpr_(iorder, uplo, &n, &ralpha, &xx[1], &incx, &aa[1]);
+          }
+
+          /*                 Check if error-exit was taken incorrectly. */
+
+          if (!infoc_1.ok) {
+            io___338.ciunit = *nout;
+            s_wsfe(&io___338);
+            e_wsfe();
+            *fatal = TRUE_;
+            goto L120;
+          }
+
+          /*                 See what data changed inside subroutines. */
+
+          isame[0] = *(unsigned char *)uplo == *(unsigned char *)uplos;
+          isame[1] = ns == n;
+          isame[2] = rals == ralpha;
+          isame[3] = lze_(&xs[1], &xx[1], &lx);
+          isame[4] = incxs == incx;
+          if (null) {
+            isame[5] = lze_(&as[1], &aa[1], &laa);
+          } else {
+            isame[5] = lzeres_(sname + 7, uplo, &n, &n, &as[1], &aa[1], &lda,
+                               (ftnlen)2, (ftnlen)1);
+          }
+          if (!packed) {
+            isame[6] = ldas == lda;
+          }
+
+          /*                 If data was incorrectly changed, report and return.
+           */
+
+          same = TRUE_;
+          i__4 = nargs;
+          for (i__ = 1; i__ <= i__4; ++i__) {
+            same = same && isame[i__ - 1];
+            if (!isame[i__ - 1]) {
+              io___341.ciunit = *nout;
+              s_wsfe(&io___341);
+              do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
+              e_wsfe();
+            }
+            /* L30: */
+          }
+          if (!same) {
+            *fatal = TRUE_;
+            goto L120;
+          }
+
+          if (!null) {
+
+            /*                    Check the result column by column. */
+
+            if (incx > 0) {
+              i__4 = n;
+              for (i__ = 1; i__ <= i__4; ++i__) {
+                i__5 = i__;
+                i__6 = i__;
+                z__[i__5].r = x[i__6].r, z__[i__5].i = x[i__6].i;
+                /* L40: */
+              }
+            } else {
+              i__4 = n;
+              for (i__ = 1; i__ <= i__4; ++i__) {
+                i__5 = i__;
+                i__6 = n - i__ + 1;
+                z__[i__5].r = x[i__6].r, z__[i__5].i = x[i__6].i;
+                /* L50: */
+              }
+            }
+            ja = 1;
+            i__4 = n;
+            for (j = 1; j <= i__4; ++j) {
+              d_cnjg(&z__1, &z__[j]);
+              w[0].r = z__1.r, w[0].i = z__1.i;
+              if (upper) {
+                jj = 1;
+                lj = j;
+              } else {
+                jj = j;
+                lj = n - j + 1;
+              }
+              zmvch_("N", &lj, &c__1, &alpha, &z__[jj], &lj, w, &c__1, &c_b2,
+                     &a[jj + j * a_dim1], &c__1, &yt[1], &g[1], &aa[ja], eps,
+                     &err, fatal, nout, &c_true, (ftnlen)1);
+              if (full) {
+                if (upper) {
+                  ja += lda;
+                } else {
+                  ja = ja + lda + 1;
+                }
+              } else {
+                ja += lj;
+              }
+              errmax = max(errmax, err);
+              /*                       If got really bad answer, report and
+               * return. */
+              if (*fatal) {
+                goto L110;
+              }
+              /* L60: */
+            }
+          } else {
+            /*                    Avoid repeating tests if N.le.0. */
+            if (n <= 0) {
+              goto L100;
+            }
+          }
+
+          /* L70: */
+        }
+
+        /* L80: */
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
+    io___348.ciunit = *nout;
+    s_wsfe(&io___348);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else {
+    io___349.ciunit = *nout;
+    s_wsfe(&io___349);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
+    e_wsfe();
+  }
+  goto L130;
+
+L110:
+  io___350.ciunit = *nout;
+  s_wsfe(&io___350);
+  do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
+  e_wsfe();
+
+L120:
+  io___351.ciunit = *nout;
+  s_wsfe(&io___351);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  if (full) {
+    io___352.ciunit = *nout;
+    s_wsfe(&io___352);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, cuplo, (ftnlen)14);
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&ralpha, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else if (packed) {
+    io___353.ciunit = *nout;
+    s_wsfe(&io___353);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, cuplo, (ftnlen)14);
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&ralpha, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    e_wsfe();
+  }
+
+L130:
+  return 0;
+
+  /*     End of CZHK5. */
+
+} /* zchk5_ */
+
+/* Subroutine */ int
+zchk6_(char *sname, doublereal *eps, doublereal *thresh, integer *nout,
+       integer *ntra, logical *trace, logical *rewi, logical *fatal,
+       integer *nidim, integer *idim, integer *nalf, doublecomplex *alf,
+       integer *ninc, integer *inc, integer *nmax, integer *incmax,
+       doublecomplex *a, doublecomplex *aa, doublecomplex *as, doublecomplex *x,
+       doublecomplex *xx, doublecomplex *xs, doublecomplex *y,
+       doublecomplex *yy, doublecomplex *ys, doublecomplex *yt, doublereal *g,
+       doublecomplex *z__, integer *iorder, ftnlen sname_len) {
+  /* Initialized data */
+
+  static char ich[2] = "UL";
+
+  /* Format strings */
+  static char fmt_9993[] =
+      "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+      "i3,\002,(\002,f4.1,\002,\002,f4.1,\002), X,\002,i2,\002, Y,\002,"
+      "i2,\002, A,\002,i3,\002) .\002)";
+  static char fmt_9994[] =
+      "(1x,i6,\002: \002,a12,\002(\002,a14,\002,\002,"
+      "i3,\002,(\002,f4.1,\002,\002,f4.1,\002), X,\002,i2,\002, Y,\002,"
+      "i2,\002, AP) .\002)";
+  static char fmt_9992[] = "(\002 ******* FATAL ERROR - ERROR-EXIT TAKEN O"
+                           "N VALID CALL *\002,\002******\002)";
+  static char fmt_9998[] =
+      "(\002 ******* FATAL ERROR - PARAMETER NUMBER"
+      " \002,i2,\002 WAS CH\002,\002ANGED INCORRECTLY *******\002)";
+  static char fmt_9999[] = "(\002 \002,a12,\002 PASSED THE COMPUTATIONAL T"
+                           "ESTS (\002,i6,\002 CALL\002,\002S)\002)";
+  static char fmt_9997[] =
+      "(\002 \002,a12,\002 COMPLETED THE COMPUTATIONA"
+      "L TESTS (\002,i6,\002 C\002,\002ALLS)\002,/\002 ******* BUT WITH"
+      " MAXIMUM TEST RATIO\002,f8.2,\002 - SUSPECT *******\002)";
+  static char fmt_9995[] = "(\002      THESE ARE THE RESULTS FOR COLUMN"
+                           " \002,i3)";
+  static char fmt_9996[] = "(\002 ******* \002,a12,\002 FAILED ON CALL NUM"
+                           "BER:\002)";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, z_dim1, z_offset, i__1, i__2, i__3, i__4, i__5,
+      i__6, i__7;
+  doublecomplex z__1, z__2, z__3;
+  alist al__1;
+
+  /* Builtin functions */
+  /* Subroutine */ void s_copy(char *, char *, ftnlen, ftnlen);
+  integer s_wsfe(cilist *), do_fio(integer *, char *, ftnlen), e_wsfe(void),
+      f_rew(alist *);
+  void d_cnjg(doublecomplex *, doublecomplex *);
+
+  /* Local variables */
+  integer i__, j, n;
+  doublecomplex w[2];
+  integer ia, ja, ic, nc, jj, lj, in, ix, iy, ns, lx, ly, laa, lda;
+  doublecomplex als;
+  doublereal err;
+  extern logical lze_(doublecomplex *, doublecomplex *, integer *);
+  integer ldas;
+  logical same;
+  integer incx, incy;
+  logical full, null;
+  char uplo[1];
+  doublecomplex alpha;
+  logical isame[13];
+  extern /* Subroutine */ int zmake_(
+      char *, char *, char *, integer *, integer *, doublecomplex *, integer *,
+      doublecomplex *, integer *, integer *, integer *, logical *,
+      doublecomplex *, ftnlen, ftnlen, ftnlen);
+  integer nargs;
+  logical reset;
+  char cuplo[14];
+  integer incxs, incys;
+  extern /* Subroutine */ int zmvch_(
+      char *, integer *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, doublereal *, doublecomplex *, doublereal *,
+      doublereal *, logical *, integer *, logical *, ftnlen);
+  logical upper;
+  char uplos[1];
+  extern /* Subroutine */ void czher2_(
+      integer *, char *, integer *, doublecomplex *, doublecomplex *, integer *,
+      doublecomplex *, integer *, doublecomplex *, integer *),
+      czhpr2_(integer *, char *, integer *, doublecomplex *, doublecomplex *,
+              integer *, doublecomplex *, integer *, doublecomplex *);
+  logical packed;
+  doublereal errmax;
+  doublecomplex transl;
+  extern logical lzeres_(char *, char *, integer *, integer *, doublecomplex *,
+                         doublecomplex *, integer *, ftnlen, ftnlen);
+
+  /* Fortran I/O blocks */
+  static cilist io___386 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___387 = {0, 0, 0, fmt_9994, 0};
+  static cilist io___388 = {0, 0, 0, fmt_9992, 0};
+  static cilist io___391 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___398 = {0, 0, 0, fmt_9999, 0};
+  static cilist io___399 = {0, 0, 0, fmt_9997, 0};
+  static cilist io___400 = {0, 0, 0, fmt_9995, 0};
+  static cilist io___401 = {0, 0, 0, fmt_9996, 0};
+  static cilist io___402 = {0, 0, 0, fmt_9993, 0};
+  static cilist io___403 = {0, 0, 0, fmt_9994, 0};
+
+  /*  Tests ZHER2 and ZHPR2. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
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
+  --inc;
+  z_dim1 = *nmax;
+  z_offset = 1 + z_dim1;
+  z__ -= z_offset;
+  --g;
+  --yt;
+  --y;
+  --x;
+  --as;
+  --aa;
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+  --ys;
+  --yy;
+  --xs;
+  --xx;
+
+  /* Function Body */
+  /*     .. Executable Statements .. */
+  full = *(unsigned char *)&sname[8] == 'e';
+  packed = *(unsigned char *)&sname[8] == 'p';
+  /*     Define the number of arguments. */
+  if (full) {
+    nargs = 9;
+  } else if (packed) {
+    nargs = 8;
+  }
+
+  nc = 0;
+  reset = TRUE_;
+  errmax = 0.;
+
+  i__1 = *nidim;
+  for (in = 1; in <= i__1; ++in) {
+    n = idim[in];
+    /*        Set LDA to 1 more than minimum value if room. */
+    lda = n;
+    if (lda < *nmax) {
+      ++lda;
+    }
+    /*        Skip tests if not enough room. */
+    if (lda > *nmax) {
+      goto L140;
+    }
+    if (packed) {
+      laa = n * (n + 1) / 2;
+    } else {
+      laa = lda * n;
+    }
+
+    for (ic = 1; ic <= 2; ++ic) {
+      *(unsigned char *)uplo = *(unsigned char *)&ich[ic - 1];
+      if (*(unsigned char *)uplo == 'U') {
+        s_copy(cuplo, "    CblasUpper", (ftnlen)14, (ftnlen)14);
+      } else {
+        s_copy(cuplo, "    CblasLower", (ftnlen)14, (ftnlen)14);
+      }
+      upper = *(unsigned char *)uplo == 'U';
+
+      i__2 = *ninc;
+      for (ix = 1; ix <= i__2; ++ix) {
+        incx = inc[ix];
+        lx = abs(incx) * n;
+
+        /*              Generate the vector X. */
+
+        transl.r = .5, transl.i = 0.;
+        i__3 = abs(incx);
+        i__4 = n - 1;
+        zmake_("ge", " ", " ", &c__1, &n, &x[1], &c__1, &xx[1], &i__3, &c__0,
+               &i__4, &reset, &transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+        if (n > 1) {
+          i__3 = n / 2;
+          x[i__3].r = 0., x[i__3].i = 0.;
+          i__3 = abs(incx) * (n / 2 - 1) + 1;
+          xx[i__3].r = 0., xx[i__3].i = 0.;
+        }
+
+        i__3 = *ninc;
+        for (iy = 1; iy <= i__3; ++iy) {
+          incy = inc[iy];
+          ly = abs(incy) * n;
+
+          /*                 Generate the vector Y. */
+
+          transl.r = 0., transl.i = 0.;
+          i__4 = abs(incy);
+          i__5 = n - 1;
+          zmake_("ge", " ", " ", &c__1, &n, &y[1], &c__1, &yy[1], &i__4, &c__0,
+                 &i__5, &reset, &transl, (ftnlen)2, (ftnlen)1, (ftnlen)1);
+          if (n > 1) {
+            i__4 = n / 2;
+            y[i__4].r = 0., y[i__4].i = 0.;
+            i__4 = abs(incy) * (n / 2 - 1) + 1;
+            yy[i__4].r = 0., yy[i__4].i = 0.;
+          }
+
+          i__4 = *nalf;
+          for (ia = 1; ia <= i__4; ++ia) {
+            i__5 = ia;
+            alpha.r = alf[i__5].r, alpha.i = alf[i__5].i;
+            null = n <= 0 || alpha.r == 0. && alpha.i == 0.;
+
+            /*                    Generate the matrix A. */
+
+            transl.r = 0., transl.i = 0.;
+            i__5 = n - 1;
+            i__6 = n - 1;
+            zmake_(sname + 7, uplo, " ", &n, &n, &a[a_offset], nmax, &aa[1],
+                   &lda, &i__5, &i__6, &reset, &transl, (ftnlen)2, (ftnlen)1,
+                   (ftnlen)1);
+
+            ++nc;
+
+            /*                    Save every datum before calling the
+             * subroutine. */
+
+            *(unsigned char *)uplos = *(unsigned char *)uplo;
+            ns = n;
+            als.r = alpha.r, als.i = alpha.i;
+            i__5 = laa;
+            for (i__ = 1; i__ <= i__5; ++i__) {
+              i__6 = i__;
+              i__7 = i__;
+              as[i__6].r = aa[i__7].r, as[i__6].i = aa[i__7].i;
+              /* L10: */
+            }
+            ldas = lda;
+            i__5 = lx;
+            for (i__ = 1; i__ <= i__5; ++i__) {
+              i__6 = i__;
+              i__7 = i__;
+              xs[i__6].r = xx[i__7].r, xs[i__6].i = xx[i__7].i;
+              /* L20: */
+            }
+            incxs = incx;
+            i__5 = ly;
+            for (i__ = 1; i__ <= i__5; ++i__) {
+              i__6 = i__;
+              i__7 = i__;
+              ys[i__6].r = yy[i__7].r, ys[i__6].i = yy[i__7].i;
+              /* L30: */
+            }
+            incys = incy;
+
+            /*                    Call the subroutine. */
+
+            if (full) {
+              if (*trace) {
+                io___386.ciunit = *ntra;
+                s_wsfe(&io___386);
+                do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                do_fio(&c__1, sname, (ftnlen)12);
+                do_fio(&c__1, cuplo, (ftnlen)14);
+                do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+                do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+                do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+                e_wsfe();
+              }
+              if (*rewi) {
+                al__1.aerr = 0;
+                al__1.aunit = *ntra;
+                f_rew(&al__1);
+              }
+              czher2_(iorder, uplo, &n, &alpha, &xx[1], &incx, &yy[1], &incy,
+                      &aa[1], &lda);
+            } else if (packed) {
+              if (*trace) {
+                io___387.ciunit = *ntra;
+                s_wsfe(&io___387);
+                do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+                do_fio(&c__1, sname, (ftnlen)12);
+                do_fio(&c__1, cuplo, (ftnlen)14);
+                do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+                do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+                do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+                do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+                e_wsfe();
+              }
+              if (*rewi) {
+                al__1.aerr = 0;
+                al__1.aunit = *ntra;
+                f_rew(&al__1);
+              }
+              czhpr2_(iorder, uplo, &n, &alpha, &xx[1], &incx, &yy[1], &incy,
+                      &aa[1]);
+            }
+
+            /*                    Check if error-exit was taken incorrectly. */
+
+            if (!infoc_1.ok) {
+              io___388.ciunit = *nout;
+              s_wsfe(&io___388);
+              e_wsfe();
+              *fatal = TRUE_;
+              goto L160;
+            }
+
+            /*                    See what data changed inside subroutines. */
+
+            isame[0] = *(unsigned char *)uplo == *(unsigned char *)uplos;
+            isame[1] = ns == n;
+            isame[2] = als.r == alpha.r && als.i == alpha.i;
+            isame[3] = lze_(&xs[1], &xx[1], &lx);
+            isame[4] = incxs == incx;
+            isame[5] = lze_(&ys[1], &yy[1], &ly);
+            isame[6] = incys == incy;
+            if (null) {
+              isame[7] = lze_(&as[1], &aa[1], &laa);
+            } else {
+              isame[7] = lzeres_(sname + 7, uplo, &n, &n, &as[1], &aa[1], &lda,
+                                 (ftnlen)2, (ftnlen)1);
+            }
+            if (!packed) {
+              isame[8] = ldas == lda;
+            }
+
+            /*                   If data was incorrectly changed, report and
+             * return. */
+
+            same = TRUE_;
+            i__5 = nargs;
+            for (i__ = 1; i__ <= i__5; ++i__) {
+              same = same && isame[i__ - 1];
+              if (!isame[i__ - 1]) {
+                io___391.ciunit = *nout;
+                s_wsfe(&io___391);
+                do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
+                e_wsfe();
+              }
+              /* L40: */
+            }
+            if (!same) {
+              *fatal = TRUE_;
+              goto L160;
+            }
+
+            if (!null) {
+
+              /*                       Check the result column by column. */
+
+              if (incx > 0) {
+                i__5 = n;
+                for (i__ = 1; i__ <= i__5; ++i__) {
+                  i__6 = i__ + z_dim1;
+                  i__7 = i__;
+                  z__[i__6].r = x[i__7].r, z__[i__6].i = x[i__7].i;
+                  /* L50: */
+                }
+              } else {
+                i__5 = n;
+                for (i__ = 1; i__ <= i__5; ++i__) {
+                  i__6 = i__ + z_dim1;
+                  i__7 = n - i__ + 1;
+                  z__[i__6].r = x[i__7].r, z__[i__6].i = x[i__7].i;
+                  /* L60: */
+                }
+              }
+              if (incy > 0) {
+                i__5 = n;
+                for (i__ = 1; i__ <= i__5; ++i__) {
+                  i__6 = i__ + (z_dim1 << 1);
+                  i__7 = i__;
+                  z__[i__6].r = y[i__7].r, z__[i__6].i = y[i__7].i;
+                  /* L70: */
+                }
+              } else {
+                i__5 = n;
+                for (i__ = 1; i__ <= i__5; ++i__) {
+                  i__6 = i__ + (z_dim1 << 1);
+                  i__7 = n - i__ + 1;
+                  z__[i__6].r = y[i__7].r, z__[i__6].i = y[i__7].i;
+                  /* L80: */
+                }
+              }
+              ja = 1;
+              i__5 = n;
+              for (j = 1; j <= i__5; ++j) {
+                d_cnjg(&z__2, &z__[j + (z_dim1 << 1)]);
+                z__1.r = alpha.r * z__2.r - alpha.i * z__2.i,
+                z__1.i = alpha.r * z__2.i + alpha.i * z__2.r;
+                w[0].r = z__1.r, w[0].i = z__1.i;
+                d_cnjg(&z__2, &alpha);
+                d_cnjg(&z__3, &z__[j + z_dim1]);
+                z__1.r = z__2.r * z__3.r - z__2.i * z__3.i,
+                z__1.i = z__2.r * z__3.i + z__2.i * z__3.r;
+                w[1].r = z__1.r, w[1].i = z__1.i;
+                if (upper) {
+                  jj = 1;
+                  lj = j;
+                } else {
+                  jj = j;
+                  lj = n - j + 1;
+                }
+                zmvch_("N", &lj, &c__2, &c_b2, &z__[jj + z_dim1], nmax, w,
+                       &c__1, &c_b2, &a[jj + j * a_dim1], &c__1, &yt[1], &g[1],
+                       &aa[ja], eps, &err, fatal, nout, &c_true, (ftnlen)1);
+                if (full) {
+                  if (upper) {
+                    ja += lda;
+                  } else {
+                    ja = ja + lda + 1;
+                  }
+                } else {
+                  ja += lj;
+                }
+                errmax = max(errmax, err);
+                /*                          If got really bad answer, report and
+                 * return. */
+                if (*fatal) {
+                  goto L150;
+                }
+                /* L90: */
+              }
+            } else {
+              /*                       Avoid repeating tests with N.le.0. */
+              if (n <= 0) {
+                goto L140;
+              }
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
+      /* L130: */
+    }
+
+  L140:;
+  }
+
+  /*     Report result. */
+
+  if (errmax < *thresh) {
+    io___398.ciunit = *nout;
+    s_wsfe(&io___398);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else {
+    io___399.ciunit = *nout;
+    s_wsfe(&io___399);
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&errmax, (ftnlen)sizeof(doublereal));
+    e_wsfe();
+  }
+  goto L170;
+
+L150:
+  io___400.ciunit = *nout;
+  s_wsfe(&io___400);
+  do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
+  e_wsfe();
+
+L160:
+  io___401.ciunit = *nout;
+  s_wsfe(&io___401);
+  do_fio(&c__1, sname, (ftnlen)12);
+  e_wsfe();
+  if (full) {
+    io___402.ciunit = *nout;
+    s_wsfe(&io___402);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, cuplo, (ftnlen)14);
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&lda, (ftnlen)sizeof(integer));
+    e_wsfe();
+  } else if (packed) {
+    io___403.ciunit = *nout;
+    s_wsfe(&io___403);
+    do_fio(&c__1, (char *)&nc, (ftnlen)sizeof(integer));
+    do_fio(&c__1, sname, (ftnlen)12);
+    do_fio(&c__1, cuplo, (ftnlen)14);
+    do_fio(&c__1, (char *)&n, (ftnlen)sizeof(integer));
+    do_fio(&c__2, (char *)&alpha, (ftnlen)sizeof(doublereal));
+    do_fio(&c__1, (char *)&incx, (ftnlen)sizeof(integer));
+    do_fio(&c__1, (char *)&incy, (ftnlen)sizeof(integer));
+    e_wsfe();
+  }
+
+L170:
+  return 0;
+
+  /*     End of ZCHK6. */
+
+} /* zchk6_ */
+
+/* Subroutine */ int
+zmvch_(char *trans, integer *m, integer *n, doublecomplex *alpha,
+       doublecomplex *a, integer *nmax, doublecomplex *x, integer *incx,
+       doublecomplex *beta, doublecomplex *y, integer *incy, doublecomplex *yt,
+       doublereal *g, doublecomplex *yy, doublereal *eps, doublereal *err,
+       logical *fatal, integer *nout, logical *mv, ftnlen trans_len) {
+  /* Format strings */
+  static char fmt_9999[] =
+      "(\002 ******* FATAL ERROR - COMPUTED RESULT IS"
+      " LESS THAN HAL\002,\002F ACCURATE *******\002,/\002             "
+      "          EXPECTED RE\002,\002SULT                    COMPUTED R"
+      "ESULT\002)";
+  static char fmt_9998[] = "(1x,i7,2(\002  (\002,g15.6,\002,\002,g15.6,"
+                           "\002)\002))";
+
+  /* System generated locals */
+  integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;
+  doublereal d__1, d__2, d__3, d__4, d__5, d__6;
+  doublecomplex z__1, z__2, z__3;
+
+  /* Builtin functions */
+  double d_imag(doublecomplex *);
+  void d_cnjg(doublecomplex *, doublecomplex *);
+  double z_abs(doublecomplex *), sqrt(doublereal);
+  integer s_wsfe(cilist *), e_wsfe(void), do_fio(integer *, char *, ftnlen);
+
+  /* Local variables */
+  integer i__, j, ml, nl, iy, jx, kx, ky;
+  doublereal erri;
+  logical tran, ctran;
+  integer incxl, incyl;
+
+  /* Fortran I/O blocks */
+  static cilist io___417 = {0, 0, 0, fmt_9999, 0};
+  static cilist io___418 = {0, 0, 0, fmt_9998, 0};
+  static cilist io___419 = {0, 0, 0, fmt_9998, 0};
+
+  /*  Checks the results of the computational tests. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
+
+  /*     .. Parameters .. */
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. Statement Functions .. */
+  /*     .. Statement Function definitions .. */
+  /*     .. Executable Statements .. */
+  /* Parameter adjustments */
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+  --x;
+  --y;
+  --yt;
+  --g;
+  --yy;
+
+  /* Function Body */
+  tran = *(unsigned char *)trans == 'T';
+  ctran = *(unsigned char *)trans == 'C';
+  if (tran || ctran) {
+    ml = *n;
+    nl = *m;
+  } else {
+    ml = *m;
+    nl = *n;
+  }
+  if (*incx < 0) {
+    kx = nl;
+    incxl = -1;
+  } else {
+    kx = 1;
+    incxl = 1;
+  }
+  if (*incy < 0) {
+    ky = ml;
+    incyl = -1;
+  } else {
+    ky = 1;
+    incyl = 1;
+  }
+
+  /*     Compute expected result in YT using data in A, X and Y. */
+  /*     Compute gauges in G. */
+
+  iy = ky;
+  i__1 = ml;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    i__2 = iy;
+    yt[i__2].r = 0., yt[i__2].i = 0.;
+    g[iy] = 0.;
+    jx = kx;
+    if (tran) {
+      i__2 = nl;
+      for (j = 1; j <= i__2; ++j) {
+        i__3 = iy;
+        i__4 = iy;
+        i__5 = j + i__ * a_dim1;
+        i__6 = jx;
+        z__2.r = a[i__5].r * x[i__6].r - a[i__5].i * x[i__6].i,
+        z__2.i = a[i__5].r * x[i__6].i + a[i__5].i * x[i__6].r;
+        z__1.r = yt[i__4].r + z__2.r, z__1.i = yt[i__4].i + z__2.i;
+        yt[i__3].r = z__1.r, yt[i__3].i = z__1.i;
+        i__3 = j + i__ * a_dim1;
+        i__4 = jx;
+        g[iy] += ((d__1 = a[i__3].r, abs(d__1)) +
+                  (d__2 = d_imag(&a[j + i__ * a_dim1]), abs(d__2))) *
+                 ((d__3 = x[i__4].r, abs(d__3)) +
+                  (d__4 = d_imag(&x[jx]), abs(d__4)));
+        jx += incxl;
+        /* L10: */
+      }
+    } else if (ctran) {
+      i__2 = nl;
+      for (j = 1; j <= i__2; ++j) {
+        i__3 = iy;
+        i__4 = iy;
+        d_cnjg(&z__3, &a[j + i__ * a_dim1]);
+        i__5 = jx;
+        z__2.r = z__3.r * x[i__5].r - z__3.i * x[i__5].i,
+        z__2.i = z__3.r * x[i__5].i + z__3.i * x[i__5].r;
+        z__1.r = yt[i__4].r + z__2.r, z__1.i = yt[i__4].i + z__2.i;
+        yt[i__3].r = z__1.r, yt[i__3].i = z__1.i;
+        i__3 = j + i__ * a_dim1;
+        i__4 = jx;
+        g[iy] += ((d__1 = a[i__3].r, abs(d__1)) +
+                  (d__2 = d_imag(&a[j + i__ * a_dim1]), abs(d__2))) *
+                 ((d__3 = x[i__4].r, abs(d__3)) +
+                  (d__4 = d_imag(&x[jx]), abs(d__4)));
+        jx += incxl;
+        /* L20: */
+      }
+    } else {
+      i__2 = nl;
+      for (j = 1; j <= i__2; ++j) {
+        i__3 = iy;
+        i__4 = iy;
+        i__5 = i__ + j * a_dim1;
+        i__6 = jx;
+        z__2.r = a[i__5].r * x[i__6].r - a[i__5].i * x[i__6].i,
+        z__2.i = a[i__5].r * x[i__6].i + a[i__5].i * x[i__6].r;
+        z__1.r = yt[i__4].r + z__2.r, z__1.i = yt[i__4].i + z__2.i;
+        yt[i__3].r = z__1.r, yt[i__3].i = z__1.i;
+        i__3 = i__ + j * a_dim1;
+        i__4 = jx;
+        g[iy] += ((d__1 = a[i__3].r, abs(d__1)) +
+                  (d__2 = d_imag(&a[i__ + j * a_dim1]), abs(d__2))) *
+                 ((d__3 = x[i__4].r, abs(d__3)) +
+                  (d__4 = d_imag(&x[jx]), abs(d__4)));
+        jx += incxl;
+        /* L30: */
+      }
+    }
+    i__2 = iy;
+    i__3 = iy;
+    z__2.r = alpha->r * yt[i__3].r - alpha->i * yt[i__3].i,
+    z__2.i = alpha->r * yt[i__3].i + alpha->i * yt[i__3].r;
+    i__4 = iy;
+    z__3.r = beta->r * y[i__4].r - beta->i * y[i__4].i,
+    z__3.i = beta->r * y[i__4].i + beta->i * y[i__4].r;
+    z__1.r = z__2.r + z__3.r, z__1.i = z__2.i + z__3.i;
+    yt[i__2].r = z__1.r, yt[i__2].i = z__1.i;
+    i__2 = iy;
+    g[iy] = ((d__1 = alpha->r, abs(d__1)) + (d__2 = d_imag(alpha), abs(d__2))) *
+                g[iy] +
+            ((d__3 = beta->r, abs(d__3)) + (d__4 = d_imag(beta), abs(d__4))) *
+                ((d__5 = y[i__2].r, abs(d__5)) +
+                 (d__6 = d_imag(&y[iy]), abs(d__6)));
+    iy += incyl;
+    /* L40: */
+  }
+
+  /*     Compute the error ratio for this result. */
+
+  *err = 0.;
+  i__1 = ml;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    i__2 = i__;
+    i__3 = (i__ - 1) * abs(*incy) + 1;
+    z__1.r = yt[i__2].r - yy[i__3].r, z__1.i = yt[i__2].i - yy[i__3].i;
+    erri = z_abs(&z__1) / *eps;
+    if (g[i__] != 0.) {
+      erri /= g[i__];
+    }
+    *err = max(*err, erri);
+    if (*err * sqrt(*eps) >= 1.) {
+      goto L60;
+    }
+    /* L50: */
+  }
+  /*     If the loop completes, all results are at least half accurate. */
+  goto L80;
+
+  /*     Report fatal error. */
+
+L60:
+  *fatal = TRUE_;
+  io___417.ciunit = *nout;
+  s_wsfe(&io___417);
+  e_wsfe();
+  i__1 = ml;
+  for (i__ = 1; i__ <= i__1; ++i__) {
+    if (*mv) {
+      io___418.ciunit = *nout;
+      s_wsfe(&io___418);
+      do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
+      do_fio(&c__2, (char *)&yt[i__], (ftnlen)sizeof(doublereal));
+      do_fio(&c__2, (char *)&yy[(i__ - 1) * abs(*incy) + 1],
+             (ftnlen)sizeof(doublereal));
+      e_wsfe();
+    } else {
+      io___419.ciunit = *nout;
+      s_wsfe(&io___419);
+      do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
+      do_fio(&c__2, (char *)&yy[(i__ - 1) * abs(*incy) + 1],
+             (ftnlen)sizeof(doublereal));
+      do_fio(&c__2, (char *)&yt[i__], (ftnlen)sizeof(doublereal));
+      e_wsfe();
+    }
+    /* L70: */
+  }
+
+L80:
+  return 0;
+
+  /*     End of ZMVCH. */
+
+} /* zmvch_ */
+
+logical lze_(doublecomplex *ri, doublecomplex *rj, integer *lr) {
+  /* System generated locals */
+  integer i__1, i__2, i__3;
+  logical ret_val;
+
+  /* Local variables */
+  integer i__;
+
+  /*  Tests if two arrays are identical. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
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
+    i__2 = i__;
+    i__3 = i__;
+    if (ri[i__2].r != rj[i__3].r || ri[i__2].i != rj[i__3].i) {
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
+  /*     End of LZE. */
+
+} /* lze_ */
+
+logical lzeres_(char *type__, char *uplo, integer *m, integer *n,
+                doublecomplex *aa, doublecomplex *as, integer *lda,
+                ftnlen type_len, ftnlen uplo_len) {
+  /* System generated locals */
+  integer aa_dim1, aa_offset, as_dim1, as_offset, i__1, i__2, i__3, i__4;
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
+  /*  TYPE is 'ge', 'he' or 'hp'. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
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
+  if (s_cmp(type__, "ge", (ftnlen)2, (ftnlen)2) == 0) {
+    i__1 = *n;
+    for (j = 1; j <= i__1; ++j) {
+      i__2 = *lda;
+      for (i__ = *m + 1; i__ <= i__2; ++i__) {
+        i__3 = i__ + j * aa_dim1;
+        i__4 = i__ + j * as_dim1;
+        if (aa[i__3].r != as[i__4].r || aa[i__3].i != as[i__4].i) {
+          goto L70;
+        }
+        /* L10: */
+      }
+      /* L20: */
+    }
+  } else if (s_cmp(type__, "he", (ftnlen)2, (ftnlen)2) == 0) {
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
+        i__3 = i__ + j * aa_dim1;
+        i__4 = i__ + j * as_dim1;
+        if (aa[i__3].r != as[i__4].r || aa[i__3].i != as[i__4].i) {
+          goto L70;
+        }
+        /* L30: */
+      }
+      i__2 = *lda;
+      for (i__ = iend + 1; i__ <= i__2; ++i__) {
+        i__3 = i__ + j * aa_dim1;
+        i__4 = i__ + j * as_dim1;
+        if (aa[i__3].r != as[i__4].r || aa[i__3].i != as[i__4].i) {
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
+  /*     End of LZERES. */
+
+} /* lzeres_ */
+
+/* Double Complex */ VOID zbeg_(doublecomplex *ret_val, logical *reset) {
+  /* System generated locals */
+  doublereal d__1, d__2;
+  doublecomplex z__1;
+
+  /* Local variables */
+  static integer i__, j, ic, mi, mj;
+
+  /*  Generates complex numbers as pairs of random numbers uniformly */
+  /*  distributed between -0.5 and 0.5. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
+
+  /*     .. Scalar Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. Save statement .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. Executable Statements .. */
+  if (*reset) {
+    /*        Initialize local variables. */
+    mi = 891;
+    mj = 457;
+    i__ = 7;
+    j = 7;
+    ic = 0;
+    *reset = FALSE_;
+  }
+
+  /*     The sequence of values of I or J is bounded between 1 and 999. */
+  /*     If initial I or J = 1,2,3,6,7 or 9, the period will be 50. */
+  /*     If initial I or J = 4 or 8, the period will be 25. */
+  /*     If initial I or J = 5, the period will be 10. */
+  /*     IC is used to break up the period by skipping 1 value of I or J */
+  /*     in 6. */
+
+  ++ic;
+L10:
+  i__ *= mi;
+  j *= mj;
+  i__ -= i__ / 1000 * 1000;
+  j -= j / 1000 * 1000;
+  if (ic >= 5) {
+    ic = 0;
+    goto L10;
+  }
+  d__1 = (doublereal)((i__ - 500) / 1001.f);
+  d__2 = (doublereal)((j - 500) / 1001.f);
+  z__1.r = d__1, z__1.i = d__2;
+  ret_val->r = z__1.r, ret_val->i = z__1.i;
+  return;
+
+  /*     End of ZBEG. */
+
+} /* zbeg_ */
+
+doublereal ddiff_(doublereal *x, doublereal *y) {
+  /* System generated locals */
+  doublereal ret_val;
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+
+  /*     .. Scalar Arguments .. */
+  /*     .. Executable Statements .. */
+  ret_val = *x - *y;
+  return ret_val;
+
+  /*     End of DDIFF. */
+
+} /* ddiff_ */
+
+/* Subroutine */ int zmake_(char *type__, char *uplo, char *diag, integer *m,
+                            integer *n, doublecomplex *a, integer *nmax,
+                            doublecomplex *aa, integer *lda, integer *kl,
+                            integer *ku, logical *reset, doublecomplex *transl,
+                            ftnlen type_len, ftnlen uplo_len, ftnlen diag_len) {
+  /* System generated locals */
+  integer a_dim1, a_offset, i__1, i__2, i__3, i__4;
+  doublereal d__1;
+  doublecomplex z__1, z__2;
+
+  /* Builtin functions */
+  void d_cnjg(doublecomplex *, doublecomplex *);
+  integer s_cmp(char *, char *, ftnlen, ftnlen);
+
+  /* Local variables */
+  integer i__, j, i1, i2, i3, jj, kk;
+  logical gen, tri, sym;
+  integer ibeg, iend, ioff;
+  extern /* Double Complex */ VOID zbeg_(doublecomplex *, logical *);
+  logical unit, lower, upper;
+
+  /*  Generates values for an M by N matrix A within the bandwidth */
+  /*  defined by KL and KU. */
+  /*  Stores the values in the array AA in the data structure required */
+  /*  by the routine, with unwanted elements set to rogue value. */
+
+  /*  TYPE is 'ge', 'gb', 'he', 'hb', 'hp', 'tr', 'tb' OR 'tp'. */
+
+  /*  Auxiliary routine for test program for Level 2 Blas. */
+
+  /*  -- Written on 10-August-1987. */
+  /*     Richard Hanson, Sandia National Labs. */
+  /*     Jeremy Du Croz, NAG Central Office. */
+
+  /*     .. Parameters .. */
+  /*     .. Scalar Arguments .. */
+  /*     .. Array Arguments .. */
+  /*     .. Local Scalars .. */
+  /*     .. External Functions .. */
+  /*     .. Intrinsic Functions .. */
+  /*     .. Executable Statements .. */
+  /* Parameter adjustments */
+  a_dim1 = *nmax;
+  a_offset = 1 + a_dim1;
+  a -= a_offset;
+  --aa;
+
+  /* Function Body */
+  gen = *(unsigned char *)type__ == 'g';
+  sym = *(unsigned char *)type__ == 'h';
+  tri = *(unsigned char *)type__ == 't';
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
+        if (i__ <= j && j - i__ <= *ku || i__ >= j && i__ - j <= *kl) {
+          i__3 = i__ + j * a_dim1;
+          zbeg_(&z__2, reset);
+          z__1.r = z__2.r + transl->r, z__1.i = z__2.i + transl->i;
+          a[i__3].r = z__1.r, a[i__3].i = z__1.i;
+        } else {
+          i__3 = i__ + j * a_dim1;
+          a[i__3].r = 0., a[i__3].i = 0.;
+        }
+        if (i__ != j) {
+          if (sym) {
+            i__3 = j + i__ * a_dim1;
+            d_cnjg(&z__1, &a[i__ + j * a_dim1]);
+            a[i__3].r = z__1.r, a[i__3].i = z__1.i;
+          } else if (tri) {
+            i__3 = j + i__ * a_dim1;
+            a[i__3].r = 0., a[i__3].i = 0.;
+          }
+        }
+      }
+      /* L10: */
+    }
+    if (sym) {
+      i__2 = j + j * a_dim1;
+      i__3 = j + j * a_dim1;
+      d__1 = a[i__3].r;
+      z__1.r = d__1, z__1.i = 0.;
+      a[i__2].r = z__1.r, a[i__2].i = z__1.i;
+    }
+    if (tri) {
+      i__2 = j + j * a_dim1;
+      i__3 = j + j * a_dim1;
+      z__1.r = a[i__3].r + 1., z__1.i = a[i__3].i + 0.;
+      a[i__2].r = z__1.r, a[i__2].i = z__1.i;
+    }
+    if (unit) {
+      i__2 = j + j * a_dim1;
+      a[i__2].r = 1., a[i__2].i = 0.;
+    }
+    /* L20: */
+  }
+
+  /*     Store elements in array AS in data structure required by routine. */
+
+  if (s_cmp(type__, "ge", (ftnlen)2, (ftnlen)2) == 0) {
+    i__1 = *n;
+    for (j = 1; j <= i__1; ++j) {
+      i__2 = *m;
+      for (i__ = 1; i__ <= i__2; ++i__) {
+        i__3 = i__ + (j - 1) * *lda;
+        i__4 = i__ + j * a_dim1;
+        aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
+        /* L30: */
+      }
+      i__2 = *lda;
+      for (i__ = *m + 1; i__ <= i__2; ++i__) {
+        i__3 = i__ + (j - 1) * *lda;
+        aa[i__3].r = -1e10, aa[i__3].i = 1e10;
+        /* L40: */
+      }
+      /* L50: */
+    }
+  } else if (s_cmp(type__, "gb", (ftnlen)2, (ftnlen)2) == 0) {
+    i__1 = *n;
+    for (j = 1; j <= i__1; ++j) {
+      i__2 = *ku + 1 - j;
+      for (i1 = 1; i1 <= i__2; ++i1) {
+        i__3 = i1 + (j - 1) * *lda;
+        aa[i__3].r = -1e10, aa[i__3].i = 1e10;
+        /* L60: */
+      }
+      /* Computing MIN */
+      i__3 = *kl + *ku + 1, i__4 = *ku + 1 + *m - j;
+      i__2 = min(i__3, i__4);
+      for (i2 = i1; i2 <= i__2; ++i2) {
+        i__3 = i2 + (j - 1) * *lda;
+        i__4 = i2 + j - *ku - 1 + j * a_dim1;
+        aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
+        /* L70: */
+      }
+      i__2 = *lda;
+      for (i3 = i2; i3 <= i__2; ++i3) {
+        i__3 = i3 + (j - 1) * *lda;
+        aa[i__3].r = -1e10, aa[i__3].i = 1e10;
+        /* L80: */
+      }
+      /* L90: */
+    }
+  } else if (s_cmp(type__, "he", (ftnlen)2, (ftnlen)2) == 0 ||
+             s_cmp(type__, "tr", (ftnlen)2, (ftnlen)2) == 0) {
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
+        i__3 = i__ + (j - 1) * *lda;
+        aa[i__3].r = -1e10, aa[i__3].i = 1e10;
+        /* L100: */
+      }
+      i__2 = iend;
+      for (i__ = ibeg; i__ <= i__2; ++i__) {
+        i__3 = i__ + (j - 1) * *lda;
+        i__4 = i__ + j * a_dim1;
+        aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
+        /* L110: */
+      }
+      i__2 = *lda;
+      for (i__ = iend + 1; i__ <= i__2; ++i__) {
+        i__3 = i__ + (j - 1) * *lda;
+        aa[i__3].r = -1e10, aa[i__3].i = 1e10;
+        /* L120: */
+      }
+      if (sym) {
+        jj = j + (j - 1) * *lda;
+        i__2 = jj;
+        i__3 = jj;
+        d__1 = aa[i__3].r;
+        z__1.r = d__1, z__1.i = -1e10;
+        aa[i__2].r = z__1.r, aa[i__2].i = z__1.i;
+      }
+      /* L130: */
+    }
+  } else if (s_cmp(type__, "hb", (ftnlen)2, (ftnlen)2) == 0 ||
+             s_cmp(type__, "tb", (ftnlen)2, (ftnlen)2) == 0) {
+    i__1 = *n;
+    for (j = 1; j <= i__1; ++j) {
+      if (upper) {
+        kk = *kl + 1;
+        /* Computing MAX */
+        i__2 = 1, i__3 = *kl + 2 - j;
+        ibeg = max(i__2, i__3);
+        if (unit) {
+          iend = *kl;
+        } else {
+          iend = *kl + 1;
+        }
+      } else {
+        kk = 1;
+        if (unit) {
+          ibeg = 2;
+        } else {
+          ibeg = 1;
+        }
+        /* Computing MIN */
+        i__2 = *kl + 1, i__3 = *m + 1 - j;
+        iend = min(i__2, i__3);
+      }
+      i__2 = ibeg - 1;
+      for (i__ = 1; i__ <= i__2; ++i__) {
+        i__3 = i__ + (j - 1) * *lda;
+        aa[i__3].r = -1e10, aa[i__3].i = 1e10;
+        /* L140: */
+      }
+      i__2 = iend;
+      for (i__ = ibeg; i__ <= i__2; ++i__) {
+        i__3 = i__ + (j - 1) * *lda;
+        i__4 = i__ + j - kk + j * a_dim1;
+        aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
+        /* L150: */
+      }
+      i__2 = *lda;
+      for (i__ = iend + 1; i__ <= i__2; ++i__) {
+        i__3 = i__ + (j - 1) * *lda;
+        aa[i__3].r = -1e10, aa[i__3].i = 1e10;
+        /* L160: */
+      }
+      if (sym) {
+        jj = kk + (j - 1) * *lda;
+        i__2 = jj;
+        i__3 = jj;
+        d__1 = aa[i__3].r;
+        z__1.r = d__1, z__1.i = -1e10;
+        aa[i__2].r = z__1.r, aa[i__2].i = z__1.i;
+      }
+      /* L170: */
+    }
+  } else if (s_cmp(type__, "hp", (ftnlen)2, (ftnlen)2) == 0 ||
+             s_cmp(type__, "tp", (ftnlen)2, (ftnlen)2) == 0) {
+    ioff = 0;
+    i__1 = *n;
+    for (j = 1; j <= i__1; ++j) {
+      if (upper) {
+        ibeg = 1;
+        iend = j;
+      } else {
+        ibeg = j;
+        iend = *n;
+      }
+      i__2 = iend;
+      for (i__ = ibeg; i__ <= i__2; ++i__) {
+        ++ioff;
+        i__3 = ioff;
+        i__4 = i__ + j * a_dim1;
+        aa[i__3].r = a[i__4].r, aa[i__3].i = a[i__4].i;
+        if (i__ == j) {
+          if (unit) {
+            i__3 = ioff;
+            aa[i__3].r = -1e10, aa[i__3].i = 1e10;
+          }
+          if (sym) {
+            i__3 = ioff;
+            i__4 = ioff;
+            d__1 = aa[i__4].r;
+            z__1.r = d__1, z__1.i = -1e10;
+            aa[i__3].r = z__1.r, aa[i__3].i = z__1.i;
+          }
+        }
+        /* L180: */
+      }
+      /* L190: */
+    }
+  }
+  return 0;
+
+  /*     End of ZMAKE. */
+
+} /* zmake_ */
+
+/* Main program alias */ int zblat2_() {
+  MAIN__();
+  return 0;
+}
