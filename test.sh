DIR=$(pwd)
rm -rf ./build/
mkdir build
cd build 
cmake ..
make
./tests/test_demo --gtest_output="xml:${DIR}/output.xml"
