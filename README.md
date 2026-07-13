# C++ Competitive Programming Project

This project is designed to facilitate solving competitive programming problems using C++. It includes templates and a structure that can be easily adapted for various challenges.

## Project Structure

```
cpp-competitive-programming
├── src
│   └── main.cpp          # Entry point for the application
├── problems
│   └── template.cpp      # Template for solving competitive programming problems
├── templates
│   └── cp_template.cpp   # Reusable template for competitive programming
├── CMakeLists.txt        # Build configuration file for CMake
└── README.md             # Project documentation
```

## Setup Instructions

1. **Clone the Repository**: 
   ```
   git clone <repository-url>
   cd cpp-competitive-programming
   ```

2. **Build the Project**:
   - Ensure you have CMake installed.
   - Create a build directory and navigate into it:
     ```
     mkdir build
     cd build
     ```
   - Run CMake to configure the project:
     ```
     cmake ..
     ```
   - Build the project:
     ```
     cmake --build .
     ```

## Usage Guidelines

- Use `src/main.cpp` as the entry point for your application.
- For solving specific problems, copy the contents of `problems/template.cpp` and modify it according to the problem 
