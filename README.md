# Clean Project

This is clean project for TDD / kata exercises.

## How to

### Linux

1. Requirements: cmake, make, git, C++14 compiler, some nice IDE like [VS Code](https://code.visualstudio.com/).
2. Clone the project:
   ```bash
   git clone https://github.com/sand-dollar/clean-project
   cd clean-project
   ```
3. Create makefile with cmake:
   ```bash
   cmake .
   ```
4. Compile all executables with `make` or compile and run unit tests only with `make Test`.
5. Tip: To compile with 4 cores add `-j4` parameter to make:
   ```bash
   make -j4 Test
   ```

### Windows

1. Requirements: Visual Studio (at least [free Community edition](https://www.visualstudio.com/cs/downloads)), git.
2. Clone the project in git shell:
   ```bash
   git clone https://github.com/sand-dollar/clean-project
   ```
3. Open Visual Studio solution in `visual-studio` directory and build.
