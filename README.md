# Qt Projects Collection

This repository contains three Qt GUI applications demonstrating different aspects of desktop application development using the Qt framework.

## 📋 Table of Contents
- [Projects Overview](#projects-overview)
- [Requirements](#requirements)
- [Building and Running](#building-and-running)
- [Project Details](#project-details)
- [Author](#author)

## 🚀 Projects Overview

| Project | Description | Key Features |
|---------|-------------|--------------|
| **DisplayImage** | Simple image display application | Image loading, show/hide functionality |
| **ImageDetector** | Image comparison and analysis tool | Load two images, calculate similarity and differences |
| **Login** | Authentication interface | Username/password validation with visual feedback |

## 🔧 Requirements

- **Qt Framework**: Qt 5.15.11 or higher
- **Compiler**: MinGW 64-bit or equivalent C++17 compatible compiler
- **Operating System**: Windows, macOS, or Linux
- **Build System**: qmake (included with Qt)

## 🏗️ Building and Running

### Prerequisites
1. Install Qt 5.15.11 or later from [qt.io](https://www.qt.io/)
2. Ensure qmake is in your system PATH

### Build Instructions

For each project, navigate to the project directory and run:

```bash
# Navigate to project directory (example for DisplayImage)
cd DisplayImage

# Generate Makefile
qmake DisplayImage.pro

# Build the project
make

# Run the executable (Windows)
./debug/DisplayImage.exe

# Run the executable (macOS/Linux)
./DisplayImage
```

### Using Qt Creator (Recommended)
1. Open Qt Creator
2. Open the `.pro` file for any project
3. Configure the project with your Qt kit
4. Build and run using Ctrl+R (Cmd+R on macOS)

## 📁 Project Details

### 1. DisplayImage 🖼️

**Purpose**: Demonstrates basic image loading and display functionality in Qt.

**Features**:
- Load and display images from file system
- Scale images to fit within designated area
- Show/Hide image toggle functionality
- Simple, clean user interface

**Key Components**:
- `QPixmap` for image handling
- `QLabel` for image display
- Push buttons for user interaction

**Usage**:
- Click "Display" to show an image
- Click "Hide" to hide the current image

---

### 2. ImageDetector 🔍

**Purpose**: Advanced image comparison tool that analyzes similarities and differences between two images.

**Features**:
- Load two images simultaneously
- Calculate pixel-by-pixel difference
- Compute image similarity using cosine similarity
- Visual feedback with numerical results
- Support for multiple image formats (PNG, JPG, BMP)

**Key Components**:
- `QImage` for image processing
- `QFileDialog` for file selection
- Mathematical algorithms for image analysis
- Dual image display interface

**Algorithms Used**:
- **Difference Calculation**: Measures absolute differences in RGB values
- **Similarity Calculation**: Uses cosine similarity between pixel vectors

**Usage**:
1. Click "Load Image 1" to select first image
2. Click "Load Image 2" to select second image  
3. Click "Compare" to analyze the images
4. View difference and similarity scores

---

### 3. Login 🔐

**Purpose**: User authentication interface with validation and visual feedback.

**Features**:
- Username and password input fields
- Real-time validation feedback
- Custom styling with colored error messages
- Logo display capability
- Success/error message dialogs

**Key Components**:
- `QLineEdit` for user input
- `QMessageBox` for notifications
- Custom styling and error handling
- Logo integration with `QPixmap`

**Authentication**:
- **Default Username**: `Tanish`
- **Default Password**: `12345`

**Usage**:
1. Enter username and password
2. Click "Login" to authenticate
3. View validation feedback in real-time
4. Success message appears for correct credentials

## 🛠️ Technical Specifications

### Common Features Across Projects:
- **Qt Framework**: Qt 5.15.11
- **Language**: C++17
- **UI Framework**: Qt Widgets
- **Build System**: qmake
- **Architecture**: Model-View pattern with Qt's signal-slot mechanism

### File Structure (Per Project):
```
ProjectName/
├── ProjectName.pro      # qmake project file
├── main.cpp            # Application entry point
├── mainwindow.cpp      # Main window implementation
├── mainwindow.h        # Main window header
├── mainwindow.ui       # UI design file
└── build-*/            # Build artifacts (auto-generated)
```

## 📝 Development Notes

- All projects use Qt's signal-slot mechanism for event handling
- Image paths in some projects are hardcoded and may need adjustment
- Projects are configured for C++17 standard
- Build directories contain compiled executables and object files

## 🤝 Contributing

Feel free to fork this repository and submit pull requests for improvements:
- Bug fixes
- New features
- Code optimizations
- Documentation improvements

## 📄 License

These projects are educational demonstrations. Feel free to use and modify as needed.

## 👤 Author

**Tanish Ullas**
- GitHub: [@tanishullas04](https://github.com/tanishullas04)

---

*Last updated: September 2025*