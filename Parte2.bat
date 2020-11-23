@echo off
echo.
set/p Nombre= Cual es su nombre?
echo.

if not defined Nombre (
echo Error, debe ingresar algo.
pause
)

if defined Nombre (
echo Hola, %Nombre%
pause
exit
)