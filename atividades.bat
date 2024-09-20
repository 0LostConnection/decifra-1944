@echo off
set COMPILER=gcc
set LIMITS_FILE=src\atividades\limits.c
set LIMITS_EXECUTABLE=limits.exe
set OVERFLOW_FILE=src\atividades\overflow.c
set OVERFLOW_EXECUTABLE=overflow.exe

if not exist build (
    mkdir build
)

where %COMPILER% >nul 2>&1
if %errorlevel% == 1 (
    echo O '%COMPILER%' nao esta configurado no PATH!
    goto end
)

:parse_args
if "%1" == "-c" goto build
if "%1" == "-L" goto limits
if "%1" == "-O" goto overflow
if "%1" == "-l" goto clean
if "%1" == "-h" goto help
goto help

:help
echo Automatizador de Build - Decifra 1944
echo Opcoes:
echo    -c  Compilar atividades
echo    -L  Executar atividades - Limites
echo    -O  Executar atividades - Overflow
echo    -l  Limpar arquivos de build
echo    -h  Mensagem de ajuda
goto end

:clean
if not exist build (
    echo Pasta build nao encontrada!
    goto end
)
del /q build\*
echo Limpo!
goto end

:build
%COMPILER% %LIMITS_FILE% -o build\%LIMITS_EXECUTABLE%
%COMPILER% %OVERFLOW_FILE% -o build\%OVERFLOW_EXECUTABLE%
echo Compilacao Completa!
goto end

:limits
if not exist build\%LIMITS_EXECUTABLE% (
    echo Executavel nao encontrado! Compilando...
    echo.
    %COMPILER% %LIMITS_FILE% -o build\%LIMITS_EXECUTABLE%
)
if not exist build\%LIMITS_EXECUTABLE% (
    echo Erro na compilação!
)
build\%LIMITS_EXECUTABLE%
goto end

:overflow
if not exist build\%OVERFLOW_EXECUTABLE% (
    echo Executavel nao encontrado! Compilando...
    echo.
    %COMPILER% %OVERFLOW_FILE% -o build\%OVERFLOW_EXECUTABLE%
)
if not exist build\%OVERFLOW_EXECUTABLE% (
    echo Erro na compilação!
)
build\%OVERFLOW_EXECUTABLE%
goto end

:end