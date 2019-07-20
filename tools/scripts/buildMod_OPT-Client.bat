:: This script will build the OPT-Client mod.
:: Per default this program pauses at the end of execution to let the user inspect the output of the called commands.
:: Param 1: If this value is noPause, the script won't pause at the end of execution

@ECHO OFF

IF EXIST "%~dp0.\..\..\@OPT-Client.old" (
	ECHO Deleting old backup ...
	RMDIR /S /Q "%~dp0.\..\..\@OPT-Client.old"
)

IF EXIST "%~dp0.\..\..\@OPT-Client\" (
	ECHO Backing up old build ...
	PUSHD "%~dp0.\..\..\"
	REN @OPT-Client @OPT-Client.old
	POPD
)

IF NOT EXIST "%~dp0.\..\..\@OPT-Client\" (
	ECHO Creating directories ...
	MKDIR "%~dp0.\..\..\@OPT-Client"
	IF NOT EXIST "%~dp0.\..\..\@OPT-Client\addons\" MKDIR "%~dp0.\..\..\@OPT-Client\addons"
)

FOR /f %%a IN ('DIR "%~dp0\..\..\addons\" /AD /B /ON') DO (
	ECHO Packing %%a.pbo ...
	"%~dp0.\..\programs\armake2.exe" pack -v "%~dp0\..\..\addons\%%a" "%~dp0.\..\..\@OPT-Client\addons\%%a.pbo"
)

ECHO Copying static stuff ...
COPY /Y "%~dp0\..\..\mod.cpp" "%~dp0.\..\..\@OPT-Client\" > NUL
COPY /Y "%~dp0\..\..\opt4_icon.paa" "%~dp0.\..\..\@OPT-Client\" > NUL

ECHO.
ECHO Done.

IF NOT [%1] == [noPause] (
	ECHO Press any key to exit.
	PAUSE > NUL
)
