@echo off
set COMPILER=gcc
set SOURCE_FILES=%cd%\src\decifra\main.c %cd%\src\decifra\hexToAscii.c %cd%\src\decifra\calcularPolinomio.c
set LIBS=-lm
set EXECUTABLE=decifra.exe

:parse_args
if "%1" == "-c" goto clean
if "%1" == "-r" goto run
if "%1" == "-b" goto build
goto help

:help
echo Automatizador de Build - Decifra 1944
echo Opcoes:
echo    -c  Limpar arquivos de build
echo    -r  Executar o programa
echo    -b  Compilar apenas
goto end

:clean
if not exist %EXECUTABLE% (
    echo Executavel nao encontrado!
    goto end
)
del /q %EXECUTABLE%
echo Limpo!
goto end

:build
%COMPILER% %SOURCE_FILES% %LIBS% -o %EXECUTABLE%
echo Compilacao Completa!
goto end

:build-run
%COMPILER% %SOURCE_FILES% %LIBS% -o %EXECUTABLE%
echo Compilacao Completa!
echo.
%EXECUTABLE%
goto end

:run
if not exist %EXECUTABLE% (
    echo Executavel nao encontrado! Compilando...
    goto build-run
)
%EXECUTABLE%
goto end

:end