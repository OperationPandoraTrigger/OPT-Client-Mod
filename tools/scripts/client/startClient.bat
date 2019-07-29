:: This script starts the local arma dev-server
:: All meta-information are set via the setMetaData.bat script that
:: is being called from this one
@ECHO OFF

:: set meta infos
CALL "%~dp0.\setMetaData.bat"

:: convert relative to absolute path of opt-client
:: so armaserver can read it properly
IF NOT EXIST "%~dp0..\..\..\@OPT-Client" (
	ECHO Can't find @OPT-Client - did you forget to build it before?
	PAUSE
	EXIT 1
)
PUSHD "%~dp0..\..\..\@OPT-Client"
SET "OPT-Client_Dir=%CD%"
POPD

:: change directory into the Arma directory (in which the server-exe resides)
CD /D "%armaDir%"

:: Start the client
START %exeNameClient% -noPause -nosplash -world=empty -skipIntro -filePatching -mod="%additionalMods%;%OPT-Client_Dir%" -connect=localhost -port=2302
