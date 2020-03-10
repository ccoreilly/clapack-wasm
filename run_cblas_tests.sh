#!/bin/bash

PRGS=("./testing/xscblat1" "./testing/xdcblat1" "./testing/xccblat1" \
      "./testing/xzcblat1" "./testing/xscblat2 < testing/sin2" \
      "./testing/xccblat2 < testing/cin2" \
      "./testing/xzcblat2 < testing/zin2" "./testing/xscblat3 < testing/sin3" \
      "./testing/xdcblat3 < testing/din3" "./testing/xccblat3 < testing/cin3" \
      "./testing/xzcblat3 < testing/zin3")

for test in "${PRGS[@]}"; do
    echo "****************** $test ******************"
    eval "$test"
    echo
done
