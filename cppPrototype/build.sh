mkdir build
cd build
g++ -c ../RGEVulLin64.cpp
g++ RGEVulLin64.o -o RGEBuild -lsfml-graphics -lsfml-window -lsfml-system
./RGEBuild