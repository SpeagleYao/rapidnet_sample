#!/usr/bin/env bash

for ii in {1..1}
do
    echo "Turn:" ${ii}
    ./waf --run hyper-text-class-query-test >& log2/logfile1.log
    cat log2/logfile1.log | awk 'END {print}'
    python3 ../hyperClassToProv.py -input ../rapidnet_v1.0/log2/logfile1.log -output time1.txt
done

