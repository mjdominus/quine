@ECHO OFF
CALL :q %%%%
ECHO :q
CALL :q %%%%1 ECHO.%%%%2
ECHO EXIT /B
GOTO :EOF
:q
ECHO.%2@ECHO OFF
ECHO.%2CALL :q %1%1%1%1
ECHO.%2ECHO :q
ECHO.%2CALL :q %1%1%1%11 ECHO.%1%1%1%12
ECHO.%2ECHO EXIT /B
ECHO.%2GOTO :EOF
EXIT /B
