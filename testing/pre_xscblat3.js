const DATA = `'SBLAT3.SNAP'     NAME OF SNAPSHOT OUTPUT FILE
-1                UNIT NUMBER OF SNAPSHOT FILE (NOT USED IF .LT. 0)
F        LOGICAL FLAG, T TO REWIND SNAPSHOT FILE AFTER EACH RECORD.
F        LOGICAL FLAG, T TO STOP ON FAILURES.
T        LOGICAL FLAG, T TO TEST ERROR EXITS.
2        0 TO TEST COLUMN-MAJOR, 1 TO TEST ROW-MAJOR, 2 TO TEST BOTH
16.0     THRESHOLD VALUE OF TEST RATIO
6                 NUMBER OF VALUES OF N
0 1 2 3 5 9       VALUES OF N
3                 NUMBER OF VALUES OF ALPHA
0.0 1.0 0.7       VALUES OF ALPHA
3                 NUMBER OF VALUES OF BETA
0.0 1.0 1.3       VALUES OF BETA
cblas_sgemm  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ssymm  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_strmm  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_strsm  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ssyrk  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ssyr2k T PUT F FOR NO TEST. SAME COLUMNS.
`

let i = 0;

Module = {
  preRun: function() {
    function stdin() {
      if (i < DATA.length) {
        const code = DATA.charCodeAt(i);
        ++i;
        return code;
      } else {
        return null;
      }
    }

    function stdout(asciiCode) {
      document.getElementById('output').value += String.fromCharCode(asciiCode);
    }

    FS.init(stdin, stdout);
  }
};
