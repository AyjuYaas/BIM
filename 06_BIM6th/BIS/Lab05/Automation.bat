@echo off
echo Starting Lab 5 Automation...

:: Launch essential applications
start "" "C:\Program Files\Google\Chrome\Application\chrome.exe"
echo Opened Chrome
start "" "C:\Program Files (x86)\Microsoft SQL Server Management Studio 20\Common7\IDE\Ssms.exe"
echo Opened Microsoft SQL
start "" "C:\Users\sayuj\AppData\Local\Programs\Microsoft VS Code\Code.exe"
echo Opened VS Code

:: Check MSSQL$SQLEXPRESS service status
sc query MSSQL$SQLEXPRESS | find "RUNNING" > nul
if %errorlevel%==0 (
    echo MSSQL$SQLEXPRESS service is already running.
) else (
    echo Starting MSSQL$SQLEXPRESS service...
    net start MSSQL$SQLEXPRESS
)

:: Navigate and open Python lab files
start "" "C:\Users\sayuj\OneDrive\Desktop\BIM054\00_BIM_Repo\06_BIM6th\BIS\Lab02\linear_regression.ipynb"
echo Successfully opened LAB 2

start "" "C:\Users\sayuj\OneDrive\Desktop\BIM054\00_BIM_Repo\06_BIM6th\BIS\Lab03\k_means.ipynb"
echo Successfully opened LAB 3

:: False path to generate error
start "" "./123.123"

:: Error Handling
if %errorlevel% neq 0 (
    echo Error: Could not open lab files or start services. Check paths and permissions.
)

echo Automation Complete!
pause
