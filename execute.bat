@echo off
echo Translator C++ to Python

rem Utilizar Bison para generar el analizador sintáctico
bison -d prog.y

rem Utilizar Flex para generar el analizador léxico
flex prog.l 

rem Compilar el código fuente en C
gcc -o a.exe prog.tab.c lex.yy.c main.c ast.c check_ast.c print_ast.c traductor_ast.c -lfl -lm 

rem Ejecutar el programa compilado con el archivo de entrada C++ y generar un archivo de salida Python
a.exe .\entrada\entrada.cpp .\salida\salida.py

type .\salida\salida.py

echo.
