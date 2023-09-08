rm -rf build
mkdir build
cp -r resources build
cd build
g++ -c ../RGEVulLin64.cpp
g++ RGEVulLin64.o -o RGEBuild -lsfml-graphics -lsfml-window -lsfml-system
rm -f RGEVulLin64.o 
./RGEBuild