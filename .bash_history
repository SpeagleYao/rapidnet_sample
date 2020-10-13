ls
git clone https://github.com/milliondegree/rapidnet_v1.0.git
git clone https://github.com/milliondegree/MLNInfer.git
ls
cd rapidnet_v1.0/cd ..
cd MLNInfer/
cd ..
python MLNInfer/hyperClassSample_v2.py  -n 10 -dir rapidnet_v1.0/data/hyper-text-class/sample_new/
老师、
ls
cd rapidnet_v1.0/
./waf
cd ..
python MLNInfer/hyperClassSample_v2.py -n 10 -dir rapidnet_v1.0/data/hyper-text-class/sample_new/
cd MLNInfer/
ls
cd ..
cd rapidnet_v1.0/
python ../MLNInfer/hyperClassSample_v2.py -n 10 data/hyper-text-class/sample_new/
python ../MLNInfer/hyperClassSample_v2.py -n 10 -dir data/hyper-text-class/sample_new/
ls data/hyper-text-class/
cd ..
cd MLNInfer/
python hyperClassSample_v2.py -n 10 -dir ../rapidnet_v1.0/data/hyper-text-class/sample_new/
cd ..
cd rapidnet_v1.0/
cd data/hyper-text-class/sample_new/
ls
vim sample.olg 
ls
cd ..
ls
cd src/applications/hyper-text-class
ls
cd ..
cp data/hyper-text-class/sample_new/sample.olg src/applications/hyper-text-class/hyper-text-class.olg
cd ..
cd rapidnet_v1.0/
rapidnet/compiler/compile src/applications/hyper-text-class --provenance
tmux
tmux attach -t 0
cd rapidnet_v1.0/src/applications/

vim hyper-text-class/hyper-text-class.cc
tmux attach -t 0
ls
cd rapidnet_v1.0/
ls
vim logfile.log 
vim examples/hyper-text-class-query-test.cc 
vim logfile.log 
git push origin master
sudo git push origin master
