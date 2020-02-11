#!/bin/bash

set -o nounset

EXECS="xccblat1 xdcblat1 xscblat1 xzcblat1"
TESTS_WITH_INPUTS="xccblat2 xdcblat2 xscblat2 xzcblat2 \
                   xccblat3 xdcblat3 xscblat3 xzcblat3"
bc_ext='.bc'
html_ext='.html'

for test in $EXECS; do
    testfile=testing/$test
    if [ -f "$testfile" ]; then
        cp $testfile ${testfile}$bc_ext
        emcc -o $testfile$html_ext $testfile$bc_ext && \
            echo "Successfully created ${testfile}$html_ext"
    else
        echo "File not found $test"
    fi
done

for test in $TESTS_WITH_INPUTS; do
    testfile=testing/$test
    if [ -f "$testfile" ]; then
        cp "$testfile" "${testfile}$bc_ext"
        emcc -s EXIT_RUNTIME=1 -o "${testfile}$html_ext" \
            --pre-js "testing/pre_$test.js" ${testfile}$bc_ext && \
            echo "Successfully created ${testfile}$html_ext"
    else
        echo "File not found $testfile"
    fi
done

rm testing/*${bc_ext}

