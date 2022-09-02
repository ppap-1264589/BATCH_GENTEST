@echo off
echo compiling %name%..
g++ -std=c++14 %name%.cpp -Wall -o %name%.exe
echo done