#!/usr/bin/env bash

for ii in {1..2}
do
    echo "Turn:" ${ii}
    ./waf --run hyper-text-class-query-test >& logfile.log
    cat logfile.log | awk 'END {print}'
    python3 ../MLNInfer/hyperClassToProv.py -input ../rapidnet_v1.0/logfile.log -output time.txt
done

