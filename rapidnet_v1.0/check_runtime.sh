#!/usr/bin/env bash

for ii in {1..10}
do
    echo "Turn:" ${ii}
   cat log2/logfile${ii}.log | awk 'END {print}'
    python3 ../hyperClassToProv.py -input ../rapidnet_v1.0/log2/logfile${ii}.log -output time${ii}.txt
done

