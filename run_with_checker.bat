@echo off
set name=gen
call compile.bat
set name=checker
call compile.bat
set name=my
call compile.bat
set /A cnt=0
:loop
set /A cnt+=1
echo Running on test %cnt% 
gen.exe > input.inp
my.exe < input.inp > my.out
checker.exe
if errorlevel 1 (echo "WA") else goto loop
pause