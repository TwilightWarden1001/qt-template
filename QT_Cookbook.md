# Qt Cookbook

## 1. Basic App & Window

Snippet: `QApplication`, `MainWindow`, `Layout`

## 2. Core Widgets

### Explanation on Connecting

At first glance, Qt’s connect function looks complicated, but the idea is actually very simple. Every connection — no matter how complex — always breaks down into five parts:

1. The connect function itself. That part never changes.
2. The sender widget. This is the widget that emits the signal.
3. The signal. Written as a pointer: &Class::signalName.
4. The receiver object. Most often this is this (the current window or widget).
5. The slot (receiver function). Also written as a pointer: &Class::slotName.

---

### 2.1 QPushButton

#### Declaring

```cpp
#include <QPushButton>
QPushButton *button = new QPushButton("Download", this);
```

#### Connecting

```cpp
connect(button, &QPushButton::clicked, this, &MainWindow::download);
```

#### Useful Functions

```cpp
clicked()    // Signal emitted when the button is clicked
setText()    // Change the button text after creation
setEnabled() // Enable or disable the button
isEnabled()  // Check if the button is enabled
setChecked() // Check or uncheck the button
isChecked()  // Check if the button is checked
```

---

### 2.2 QLabel

#### Declaring

```cpp
#include <QLabel>
QLabel *label = new QLabel(this);
```

#### Connecting

```cpp
connect(label, &QLabel::setPicture, this, &MainWindow::changePicture);
```

#### Functions

```cpp
void clear()                             // Clears any label contents.
void setMovie(QMovie *movie)             // Sets the label contents to movie.
void setNum(int num)                     // Sets the label contents to plain text containing the textual representation of integer num.
void setNum(double num)                  // Sets the label contents to plain text containing the textual representation of double num.
void setPicture(const QPicture &picture) // Sets the label contents to picture.
void setPixmap(const QPixmap &)          // Sets the label contents to pixmap.(Pixel Map)
void setText(const QString &)            // Sets the label contents to text.
```

---

### 2.3 QLineEdit

#### Declaring

```cpp
#include <QLineEdit>
QLineEdit *lineEdit = new QLineEdit(this);
```

#### Connecting

```cpp
connect(lineEdit, &QLineEdit::returnPressed, this, &MainWindow::search);
```

#### Functions

```cpp
void setText(const QString&)            // Sets the line edit contents to text.
QString text()                          // Returns the line edit contents.
void clear()                            // Clears the line edit contents.
void setPlaceholderText(const QString&) // Sets the placeholder text (gray text) for the line edit
void setEchoMode(QLineEdit::Password)   // Sets the echo mode for the line edit
void setEnabled(bool)                // Enables or disables the line edit.
bool isEnabled()                     // Returns true if the line edit is enabled.
```

#### Signals

```cpp
void QLineEdit::textChanged(const QString &text) // This signal is emitted whenever the text changes. The text argument is the new text.
void QLineEdit::returnPressed()                  // This signal is emitted when the Return or Enter key is used.
void QLineEdit::editingFinished()                // This signal is emitted when the Return or Enter key is used, or if the line edit loses focus and its contents have changed since the last time this signal was emitted.
```

---

### 2.4 QCheckBox

#### Declaring

```cpp
#include <QCheckBox>
QCheckBox *checkBox = new QCheckBox(this);
```

#### Connecting

```cpp
connect(checkbox, &QCheckBox::setCheckState(Qt::Checked), this, &MainWindow::toggle)
```

#### Functions

---

// 2.5 QComboBox (Dropdown)
#include <QComboBox>
QComboBox \*comboBox = new QComboBox(this);

// 2.5 QComboBox - Functions

// 2.6 QRadioButton
#include <QRadioButton>
QRadioButton \*radioButton = new QRadioButton(this);

// 2.6 QRadioButton - Functions

// 2.7 QSlider
#include <QSlider>
QSlider \*slider = new QSlider(Qt::Horizontal, this);

// 2.7 QSlider - Functions

// 2.8 QProgressBar
#include <QProgressBar>
QProgressBar \*progressBar = new QProgressBar(this);

// 2.8 QProgressBar - Functions

// -------------------------------
// 3. Layouts
// -------------------------------
// QVBoxLayout, QHBoxLayout, QGridLayout

// -------------------------------
// 4. Menus & Toolbars
// -------------------------------
// QMenuBar, QToolBar, QAction examples

// -------------------------------
// 5. Dialogs
// -------------------------------
// QFileDialog (open/save), QMessageBox, QInputDialog

// -------------------------------
// 6. Stylesheets (QSS)
// -------------------------------
// Load stylesheet from file, switch stylesheets

// -------------------------------
// 7. Database (QtSQL)
// -------------------------------
// Connect to SQLite, run query, display results

// -------------------------------
// 8. Misc Utilities
// -------------------------------
// Timers, launching external programs, signals/slots lambda example
