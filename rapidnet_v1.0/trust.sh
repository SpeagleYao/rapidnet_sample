./waf --run trust-query-test > trust.log
sed -i '187s/60/70/g' ./examples/trust-query-test.cc
./waf --run trust-query-test >> trust.log
sed -i '187s/70/80/g' ./examples/trust-query-test.cc
./waf --run trust-query-test >> trust.log
sed -i '187s/80/90/g' ./examples/trust-query-test.cc
./waf --run trust-query-test >> trust.log
sed -i '187s/90/100/g' ./examples/trust-query-test.cc
./waf --run trust-query-test >> trust.log
