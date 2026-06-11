<h1 align="center">🧮 Geometry Calculator</h1>

<p align="center">
  <em>A terminal-based geometry calculator written in C++ with an interactive, colored CLI.</em>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C++-00599C?style=flat-square&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Platform-Windows-0078D6?style=flat-square&logo=windows&logoColor=white" alt="Windows" />
  <img src="https://img.shields.io/badge/Status-Under_Development-FFD700?style=flat-square" alt="Status" />
</p>

---

## 📖 About The Project

This project is a command-line interface (CLI) geometry calculator developed in C++. It replaces standard text outputs with a menu-driven system utilizing ANSI color codes, creating a cleaner and highly interactive user experience right in your terminal.

Currently under active development, the calculator includes geometry category selection, shape-specific menus, strict input validation, and a structured calculation flow. 

## ✨ Key Features

* **🎨 Colored CLI Interface:** Vibrant terminal output for better readability using ANSI escape codes.
* **🧭 Intuitive Navigation:** Menu-driven system for selecting geometry categories and specific shapes.
* **🛡️ Robust Input Validation:** Prevents crashes and infinite loops by detecting invalid user inputs using `cin.fail()`.
* **🧮 Calculation Flow:** Structured pathways for specific calculations (e.g., dedicated Square calculation menu).

## 📐 Supported Geometry Options

### 📏 Plane Geometry (2D)
* Square
* Rectangle
* Kite
* Rhombus
* Triangle
* Circle
* Parallelogram
* Trapezoid

### 🧊 Solid Geometry (3D)
* Cube
* Cuboid
* Square Pyramid
* Triangular Prism
* Triangular Pyramid
* Cylinder
* Cone
* Sphere

## 🚀 Getting Started

Follow these instructions to get a copy of the project up and running on your local machine.

### Dependencies
* **OS:** Windows
* **Compiler:** `g++` (via MinGW)
* **Editor:** VS Code (recommended)
* **Environment:** A terminal that supports ANSI color codes (e.g., Windows Terminal, VS Code integrated terminal)

### Installation

1. Clone the repository:
    
        git clone [your_repository_link]

2. Open the project folder in VS Code.
3. Ensure MinGW and `g++` are properly installed and added to your system's PATH variables.

### Execution

Compile the program using `g++`:

    g++ script.cpp -o geometry-calculator

Run the compiled executable:

    geometry-calculator

## 🚧 Project Status & Roadmap

**Status:** Under Development 🏗️

The core menu system and validation architecture are implemented. Future updates will gradually introduce specific formulas and calculation logic for:
* Area & Perimeter (Plane Geometry)
* Surface Area & Volume (Solid Geometry)
