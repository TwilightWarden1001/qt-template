@echo off 
setlocal  

set "BUILD_DIRECTORY=%~dp0build"
set "SOURCE_DIRECTORY=%~dp0"
set "PROJECT_NAME=MyApplication.exe"
set "QT_INSTALL_DIR=C:\Qt\6.9.1\mingw_64\lib\cmake"

echo [Step 1 out of 7] Deleting Old Build Directory
IF NOT EXIST %BUILD_DIRECTORY% ( 
    echo The build directory does not exist, it will be created in the next step.
) ELSE (
    rmdir /s /q %BUILD_DIRECTORY% 
    echo The build directory has been deleted.
)

echo [Step 2 out of 7] Creating Build Directory
mkdir %BUILD_DIRECTORY%
echo The build directory has been created.

echo [Step 3 out of 7] Go to build directory
cd /d %BUILD_DIRECTORY%
echo We are in the build directory

echo [Step 4 out of 7] Using CMake And MinGW
cmake -DCMAKE_PREFIX_PATH=%QT_INSTALL_DIR% -G "MinGW Makefiles" -S %SOURCE_DIRECTORY% -B %BUILD_DIRECTORY%
echo CMake has been used

echo [Step 5 out of 7] Building The Application
mingw32-make
echo The application has been built

echo [Step 6 out of 7] Deploying Qt Dependencies
C:\Qt\6.9.1\mingw_64\bin\windeployqt.exe "%BUILD_DIRECTORY%\%PROJECT_NAME%"
echo Qt Dependencies have been deployed

echo [Step 7 out of 7] Launching the Application
%BUILD_DIRECTORY%\%PROJECT_NAME%