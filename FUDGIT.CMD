@echo off
rem [aci 30-Jul-93]
rem   Invoke FUDGIT with environment variables properly set.
rem [An alternate way of specifying parameters to emx.exe]
rem if "%EMXOPT%"=="" set EMXOPT=-h30 -t -p -ac
if "%TERM%"=="" set TERM=mono
if "%TERMCAP%"=="" set TERMCAP=c:\emx\etc\termcap.dat
if "%HOME%"=="" set HOME=c:\fudgit
if "%PAGER%"=="" set PAGER=c:\os2\more.com
if "%FUDGITHELP%"=="" set FUDGITHELP=c:\fudgit\fudgit.hlp
c:\fudgit\fudgit %1 %2 %3 %4 %5 %6 %7 %8 %9
