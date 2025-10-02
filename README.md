# Qt Template Project

A ready-to-use C++/Qt6 starter template with **CMake**, **QRC resources**, and **QSS stylesheets**.  
Clone this repo to quickly bootstrap a new Qt application with **zero setup headaches**.

## Features

- ✅ CMake build system (Windows)
- ✅ Dark/Light QSS stylesheets (`styles/`)
- ✅ Centralized QRC resource management (`resources.qrc`)
- ✅ Example `MainWindow` implementation
- ✅ Windows build script (`BuildApplication.bat`)

## Getting Started

### 1. Install QT

- Download the [Qt Online Installer](https://www.qt.io/download-dev)
- Create a free account if you don’t already have one.
- During installation, make sure to select Qt 6.x and the MinGW compiler.

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

On **MacOS/Linx**

```bash
./BuildApplication.sh
```

---

## Project Structure

```bash
├── BuildApplication.bat      # Windows build script
├── BuildApplication.sh       # MacOS/Linux build script
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

## Notes

- For deployment on Windows, the batch file automatically calls windeployqt to include all necessary Qt dependencies.

## ToDo

- Make MacOS/Linux Script
- Add examples to MainWindow.cpp

## License

Licensed under the MIT License — see [LICENSE](https://tlo.mit.edu/understand-ip/exploring-mit-open-source-license-comprehensive-guide) for details.
