# C++ Build Boilerplate
This assumes the following is available:
- Conan 1.21.1 or greater (can install via pip3)
- CMake 3.10.2 or greater
- Clang 6.0.0 or greater

Run the following commands:
```
mkdir build && cd build
conan install ..
cmake ..
cmake --build .
```
The built binary shall be in `bin`.
