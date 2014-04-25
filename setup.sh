git submodule init
git submodule sync
git submodule update
cmake -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang .
make -j4
