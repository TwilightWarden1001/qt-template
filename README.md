![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)
![CMake](https://img.shields.io/badge/build-CMake-blue)
![Qt](https://img.shields.io/badge/framework-Qt6-green)

# Qt Template Project

A ready-to-use C++/Qt6 starter template with **CMake**, **QRC resources**, and **QSS stylesheets**.  
Clone this repo to quickly bootstrap a new Qt application with **zero setup headaches**.

## Features

- ✅ CMake build system (Windows)
- ✅ Dark/Light QSS stylesheet templates (not filled out) (`styles/`)
- ✅ Centralized QRC resource management (`resources.qrc`)
- ✅ Example `MainWindow` implementation
- ✅ Windows build script (`FullBuild.bat` and `FastBuild.bat`)
- ✅ Space-Safe: This script supports folder names with spaces. No manual path editing required.

## Getting Started

### 1. Install Qt

- Download the [Qt Online Installer](https://www.qt.io/download-dev)
- Create a free account if you don’t already have one.
- During installation, make sure to select Qt 6.x with the MinGW 64-bit (mingw_64) kit.

### 2. Install MinGW

If you didn’t install MinGW through the Qt installer, grab it separately:

- [MSYS2 + MinGW-w64](https://www.msys2.org/)
- Add the bin/ folder to your PATH.

### 3. Clone this repo

```bash
git clone https://github.com/TwilightWarden1001/qt-template.git
cd qt-template
```

### 4. Build the Application

On **Windows**

```bash
./BuildApplication.bat
```

On **macOS/Linux**

```bash
./BuildApplication.sh
```

---

## Current Project Structure

```bash
├── FullBuild.bat             # Fresh Windows build script
├── FastBuild.bat             # Fast Windows build script
├── CMakeLists.txt            # Root CMake config
├── resources.qrc             # Resource definitions
├── src/app/                  # Application code
│   ├── main.cpp
│   ├── mainwindow.cpp
│   ├── mainwindow.h
│   └── CMakeLists.txt
├── styles/                   # Stylesheets
│   ├── dark.qss
│   └── light.qss
├── images/                   # Images
└── QT_Cookbook.md            # Notes & usage guide
```

(FullBuild.sh and FastBuild.sh are planned for macOS/Linux, not yet implemented)

---

## Notes

- On Windows, the batch file automatically calls `windeployqt` to include all required Qt dependencies.
- To change the name of the Application change the name in `./FullBuild.bat/sh`, `./FastBuild.bat/sh` and the top level `CMakeLists.txt`

---

## ToDo

- Add macOS/Linux build script.
- Add examples to MainWindow.cpp.
- Finish QT_Cookbook.md

## License

Licensed under the MIT License — see [LICENSE](LICENSE) for details.
