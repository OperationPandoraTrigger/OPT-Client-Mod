:: This script starts the local arma client (if it is even running)
:: All meta-information are set via the setServerData.bat script that
:: is being called from this one
@ECHO OFF

:: set meta infos
CALL "%~dp0.\setMetaData.bat"

:: change directory into the Arma directory (in which the client-exe resides)
CD /D "%armaDir%"

:: Kill the client
:: The loop occurs as long as the killing reports a success status as this means
:: there was a client process in the process table that was sent a kill-signal
:: However this also means that the client is still running and as Windows doesn't really
:: kill the program, we have to continously send the signal until the client is actually dead
ECHO Killing the (potentially) running client. This might take a while...
:killLoop
	TASKKILL /im %exeNameClient% > NUL 2>&1
	
	IF [%errorlevel%] == [0] (
		:: sleep 100ms
		CALL "%~dp0.\sleep.bat" 100
		GOTO :killLoop
	) ELSE (
		:: wait another 100ms and check again if the client was _really_ (hard)killed
		CALL "%~dp0.\sleep.bat" 100
		TASKKILL /F /IM %exeNameClient% > NUL 2>&1
		IF [%errorlevel%] == [0] (
			:: apparently the client isn't as dead as it seemed
			GOTO :killLoop
		)
	)

ECHO Successfully killed the client
