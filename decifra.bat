@echo off
set COMPILER=gcc
set SOURCE_FILES=src\decifra\main.c src\decifra\hexToAscii.c src\decifra\calcularPolinomio.c
set LIBS=-lm
set EXECUTABLE=decifra.exe

where %COMPILER% >nul 2>&1
if %errorlevel% == 1 (
    echo O '%COMPILER%' nao esta configurado no PATH!
    goto end
)

:parse_args
if "%1" == "-c" goto build
if "%1" == "-e" goto run
if "%1" == "-l" goto clean
if "%1" == "-h" goto help
goto help

:help
echo Automatizador de Build - Decifra 1944
echo Opcoes:
echo    -c  Compilar o projeto
echo    -e  Executar o programa
echo    -l  Limpar arquivos de build
echo    -h  Mensagem de ajuda
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